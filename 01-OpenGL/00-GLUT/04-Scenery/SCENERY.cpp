#include <GL/freeglut.h>

bool bIsFullScreen = false;

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
	glutCreateWindow("SCENERY");

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
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
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
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//this is sky 


	glBegin(GL_QUADS);
          glColor3f(0.92f, 0.45f, 0.08f);  
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);

          glColor3f(0.92f, 0.68f, 0.31f);	
          glVertex2f(1.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glEnd();


	glBegin(GL_TRIANGLES);
          glColor3f(0.3f, 0.17f, 0.09f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-0.5f, 0.8f);
	glVertex2f(-0.3f, 0.0f);
          glEnd();


	glBegin(GL_TRIANGLES);
          glColor3f(0.75f, 0.42f, 0.21f);
	glVertex2f(-0.5f, 0.8f);
	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.1f, 0.0f);
          glEnd();


	glBegin(GL_TRIANGLES);
          glColor3f(0.3f, 0.17f, 0.09f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(0.3f, 1.0f);
	glVertex2f(0.4f, 0.0f);
          glEnd();

	glBegin(GL_TRIANGLES);
          glColor3f(0.75f, 0.42f, 0.21f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.3f, 1.0f);
	glVertex2f(0.7f, 0.0f);
          glEnd();


	
	glBegin(GL_QUADS);
          glColor3f(0.2f, 0.19f, 0.18f);
	glVertex2f(1.0f, -0.2f);//m
	glVertex2f(0.6f, -0.4f);//n
	glVertex2f(0.5f, -0.6f);//o
	glVertex2f(1.0f, -1.0f);//c
          glEnd();

	glBegin(GL_QUADS);
          glColor3f(0.2f, 0.19f, 0.18f);
	glVertex2f(1.0f, -1.0f);//c
	glVertex2f(0.5f, -0.6f);
	glVertex2f(0.4f, -0.8f);
	glVertex2f(0.4f, -1.0f);
          glEnd();

	//house 

	glBegin(GL_QUADS);
          glColor3f(0.83f, 0.74f, 0.42f);
	glVertex2f(0.8f, -0.4f);//t
	glVertex2f(1.0f, -0.266f);//l
	glVertex2f(1.0f, -0.844f);//d1
	glVertex2f(0.8f, -1.0f);//u
          glEnd();

	glBegin(GL_QUADS);
          glColor3f(0.95f, 0.78f, 0.14f);
	glVertex2f(0.8f, -0.4f);//t
	glVertex2f(0.8f, -1.0f);//u
	glVertex2f(0.6f, -0.8f);//r
	glVertex2f(0.6f, -0.2f);//s
          glEnd();

	glBegin(GL_TRIANGLES);
          glColor3f(0.34f, 0.25f, 0.13f);
	glVertex2f(0.8f, -0.4f);//t
	glVertex2f(0.6f, -0.2f);//s
	glVertex2f(0.7f, 0.0f);//J
          glEnd();

	
	glBegin(GL_QUADS);//door
          glColor3f(0.95f, 0.78f, 0.14f);
	glVertex2f(0.8f, -0.4f);//t
	glVertex2f(0.8f, -1.0f);//u
	glVertex2f(0.6f, -0.8f);//r
	glVertex2f(0.6f, -0.2f);//s
          glEnd();


	glBegin(GL_QUADS);//door
          glColor3f(0.19f, 0.11f, 0.02f);
	glVertex2f(0.7f, 0.0f);//J
	glVertex2f(0.8f, -0.4f);//t
	glVertex2f(1.0f, -0.266f);//l
	glVertex2f(1.0f, 0.2f);//w         
	glEnd();


	glBegin(GL_QUADS);//door
          glColor3f(0.19f, 0.11f, 0.02f);
	glVertex2f(0.65f, -0.6f);//v
	glVertex2f(0.717f, -0.678f);//a1
	glVertex2f(0.716f, -0.916f);//b1
	glVertex2f(0.651f, -0.851f);//m      
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
