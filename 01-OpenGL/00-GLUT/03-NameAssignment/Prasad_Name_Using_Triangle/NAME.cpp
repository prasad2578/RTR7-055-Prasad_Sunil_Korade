#include <GL/freeglut.h>

bool bIsFullScreen = false;
float PRASAD_xPosition;
float PRASAD_yPosition;
float persent=100;

#define VALUE_FROM_PERSENT(complete_value,persent)(complete_value*persent/100)
int main(int argc, char* argv[])
{
	// function declarations
	void initialize(void);
	void uninitialize(void);
	void resize(int, int);
	void display(void);
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);

	// code
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("My First RTR7 Program: Prasad Sunil Korade");

	initialize();

	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(uninitialize);

	glutMainLoop();

	// Flow should not come here
	return(0);
}

void initialize(void)
{
	// code
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void resize(int width, int height)
{
	// code
	if (height <= 0)
		height = 1;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, (GLsizei)width, (GLsizei)height);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    //letter p

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.9f, -0.6f);//e
    glVertex2f(-0.8f, -0.6f);//f
    glVertex2f(-0.85f, 0.6f);//g
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.85f, 0.6f);//g
    glVertex2f(-0.6f, 0.6f);//h
    glVertex2f(-0.6f, 0.4f);//k
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.6f, 0.4f);//k
    glVertex2f(-0.6f, 0.2f);//i
    glVertex2f(-0.833f, 0.198f);//j
    glEnd();

    //letter r

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.55f, -0.6f);//m
    glVertex2f(-0.55f, 0.6f);//l
    glVertex2f(-0.5f, 0.6f);//o
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.55f, -0.6f);//m
    glVertex2f(-0.5f, 0.6f);//o
    glVertex2f(-0.45f, -0.6f);//n
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.5f, 0.6f);//o
    glVertex2f(-0.3f, 0.6f);//p
    glVertex2f(-0.3f, 0.4f);//s
    glEnd();

    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.3f, 0.4f);//s
    glVertex2f(-0.3f, 0.2f);//q
    glVertex2f(-0.483f, 0.199f);//r
    glEnd();


    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.483f, 0.199f);//r
    glVertex2f(-0.3f, -0.6f);//u
    glVertex2f(-0.35f, -0.6f);//t
    glEnd();


    //letter a

        
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.2f, -0.6f);//v
    glVertex2f(-0.08f, 0.6f);//w
    glVertex2f(-0.080f, -0.041f);//a1
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.08f, 0.6f);//w
    glVertex2f(-0.080f, -0.041f);//a1
    glVertex2f(0.05f, -0.6f);//z
    glEnd();

    //letter s
    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.1f, 0.6f);//i1
    glVertex2f(0.4f, 0.6f);//k1
    glVertex2f(0.1f, 0.3f);//j1
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.1f, 0.3f);//j1
    glVertex2f(0.4f, 0.0f);//e1
    glVertex2f(0.1f, 0.0f);//g1
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.1f, 0.0f);//g1
    glVertex2f(0.4f, 0.0f);//e1
    glVertex2f(0.400f, -0.316f);//d1
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.400f, -0.316f);//d1
    glVertex2f(0.4f, -0.6f);//c1
    glVertex2f(0.1f, -0.6f);//b1
    glEnd();


    //from here started the letter a 

    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.5f, -0.6f);//l1
    glVertex2f(0.62f, 0.6f);//o1
    glVertex2f(0.614f, -0.176f);//p1
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.62f, 0.6f);//o1
    glVertex2f(0.75f, -0.6f);//n1
    glVertex2f(0.614f, -0.176f);//p1
    glEnd();


    //from here we started the lettter d 


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.8f, -0.6f);//q1
    glVertex2f(0.9f, 0.0f);//u1
    glVertex2f(1.0f, 0.0f);//r1
    glEnd();


    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.9f, 0.0f);//u1
    glVertex2f(1.0f, 0.0f);//r1
    glVertex2f(0.8f, 0.6f);//t1
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.83f, 0.48f);//z1
    glVertex2f(0.850f, -0.398f);//a2
    glVertex2f(0.83f, 0.42f);//w1
    glEnd();

   


    glutSwapBuffers();
}


void keyboard(unsigned char key, int x, int y)
{
	//code
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		break;
	case 'F':
	case 'f':
	{
		if (bIsFullScreen == false)
		{
			glutFullScreen();
			bIsFullScreen = true;
		}
		else
		{
			glutLeaveFullScreen();
			bIsFullScreen = false;
		}
	}
	break;
	default:
		break;
	}
}

void mouse(int button, int state, int x, int y)
{
	// code
	switch (button)
	{
	case GLUT_RIGHT_BUTTON:
		glutLeaveMainLoop();
		break;
	default:
		break;
	}
}

void uninitialize(void)
{
	// code
}


/*
C:\MyProjects\GLUT>cl.exe /c /EHsc /I C:\freeglut\include OGL.cpp

C:\MyProjects\GLUT>link.exe OGL.obj /LIBPATH:C:\freeglut\lib\x64 freeglut.lib /SUBSYSTEM:CONSOLE

C:\MyProjects\GLUT>OGL.exe
*/