#include <GL/freeglut.h>
#include<cmath>

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
void drawCircle(float cx, float cy, float r, int num_segments) 
{
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < num_segments; i++)
     {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();


}
void display(void)
{
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5f, 0.0f);//ORANGE
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glColor3f(0.27f, 0.76f, 0.0f);//green
	glVertex3f(1.0f, -1.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);//white
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glEnd();


          //THIS IS PENTAGON
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.5f, 0.0f);//ORANGE
	glVertex2f(-0.9f, 0.0f);//f
	glVertex2f(-0.7f, 0.3f);//g
	glVertex2f(-0.5f, 0.0f);//h
	glVertex2f(-0.6f, -0.4f);//i
	glVertex2f(-0.8f, -0.4f);//e
	glEnd();

	//THIS IS SQUARE 
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);//WHITE
	glVertex2f(-0.4f, -0.4f);//J
	glVertex2f(-0.4f, 0.3f);//K
	glVertex2f(0.4f, 0.3f);//L
	glVertex2f(0.4f, -0.4f);//M
	glEnd();

	//THIS IS TRIANGLE
	glBegin(GL_TRIANGLES);
	glColor3f(0.27f, 0.76f, 0.0f);//green
	glVertex2f(0.5f, -0.4f);//N
	glVertex2f(0.7f, 0.3f);//P
	glVertex2f(0.9f, -0.4f);//O
	glEnd();

	//THIS IS CIRCLE
	glColor3f(0.02f, 0.0f, 0.4f);//WHITE
          drawCircle(0.0f, -0.049f, 0.249f, 100);
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