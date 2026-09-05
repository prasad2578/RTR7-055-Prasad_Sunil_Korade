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
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
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
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < num_segments; i++)
     {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void Emoji01(void)
{
    //outer body of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.91f, 0.0f);//YELLOW
    drawCircle(-0.8f, 0.4f, 0.15f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(-0.85f, 0.45f, 0.02f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(-0.75f, 0.45f, 0.02f, 100);
    glEnd();
}

void Emoji02(void)
{
    //THIS IS CIRCLE
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.91f, 0.0f);//YELLOW

    drawCircle(-0.4f, 0.4f, 0.15f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(-0.45f, 0.45f, 0.02f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(-0.35f, 0.45f, 0.02f, 100);
    glEnd();
}

void Emoji03(void)
{
    //THIS IS CIRCLE
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.91f, 0.0f);//YELLOW

    drawCircle(0.0f, 0.4f, 0.15f, 100);
    glEnd();
    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(-0.05f, 0.45f, 0.02f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(0.05f, 0.45f, 0.02f, 100);
    glEnd();
}
void Emoji04(void)
{
    //THIS IS CIRCLE
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.91f, 0.0f);//YELLOW

    drawCircle(0.4f, 0.4f, 0.15f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(0.35f, 0.45f, 0.02f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(0.45f, 0.45f, 0.02f, 100);
    glEnd();
}
void Emoji05(void)
{
    //THIS IS CIRCLE
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.91f, 0.0f);//YELLOW

    drawCircle(0.8f, 0.4f, 0.15f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(0.75f, 0.45f, 0.02f, 100);
    glEnd();

    //eyes of emoji 
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(0.85f, 0.45f, 0.02f, 100);
    glEnd();    
}


void Emoji06(void)
{
    //THIS IS CIRCLE
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.91f, 0.0f);//YELLOW

    drawCircle(-0.8f, -0.4f, 0.15f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(-0.85f, -0.35f, 0.02f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(-0.75f, -0.35f, 0.02f, 100);
    glEnd();

}

void Emoji07(void)
{
    //THIS IS CIRCLE
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.91f, 0.0f);//YELLOW
    drawCircle(-0.4f, -0.4f, 0.15f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(-0.45f, -0.35f, 0.02f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(-0.35f, -0.35f, 0.02f, 100);
    glEnd();
}

void Emoji08(void)
{
    //THIS IS CIRCLE
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.91f, 0.0f);//YELLOW
    drawCircle(0.0f, -0.4f, 0.15f, 100);
    glEnd();


}
void Emoji09(void)
{
    //THIS IS CIRCLE
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.91f, 0.0f);//YELLOW
    drawCircle(0.4f, -0.4f, 0.15f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(0.35f, -0.35f, 0.02f, 100);
    glEnd();

    //eyes of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    drawCircle(0.45f, -0.35f, 0.02f, 100);
    glEnd();

    //mouth of emoji
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(0.4f, -0.45f, 0.05f, 100);
    glEnd();
}
void Emoji10(void)
{
    //THIS IS CIRCLE
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.91f, 0.0f);//YELLOW
    drawCircle(0.8f, -0.4f, 0.15f, 100);
    glEnd();
}
void display(void)
{
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

    Emoji01();
    Emoji02();
    Emoji03();
    Emoji04();
    Emoji05();
    Emoji06();
    Emoji07();
    Emoji08();
    Emoji09();
    Emoji10();
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