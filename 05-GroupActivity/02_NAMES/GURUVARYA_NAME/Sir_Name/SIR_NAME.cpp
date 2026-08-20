#include <GL/freeglut.h>

bool bIsFullScreen = false;
float SPK_xPosition;
float SPK_yPosition;
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
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
          

          //R 
          float SK_xPosition = 0.545;
          float SK_yPosition = 0.0;


          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.195f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+SK_yPosition);//T
	glVertex2f(VALUE_FROM_PERSENT(-0.245f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+SK_yPosition);//S
	glVertex2f(VALUE_FROM_PERSENT(-0.245f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+SK_yPosition);//V
	glVertex2f(VALUE_FROM_PERSENT(-0.194f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+SK_yPosition);//I1
          glEnd();

          glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.265f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+SK_yPosition);//W
	glVertex2f(VALUE_FROM_PERSENT(-0.245f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+SK_yPosition);//V
	glVertex2f(VALUE_FROM_PERSENT(-0.194f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+SK_yPosition);//I1
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+SK_yPosition);//J1
          glVertex2f(VALUE_FROM_PERSENT(-0.14f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+SK_yPosition);//Z
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(-0.14f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+SK_yPosition);//Z
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+SK_yPosition);//J1
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.205f, persent)+SK_yPosition);//K1
	glVertex2f(VALUE_FROM_PERSENT(-0.12f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+SK_yPosition);//A1
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.12f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+SK_yPosition);//A1
	glVertex2f(VALUE_FROM_PERSENT(-0.12f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.195f, persent)+SK_yPosition);//B1
	glVertex2f(VALUE_FROM_PERSENT(-0.157f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.157f, persent)+SK_yPosition);//C1
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.205f, persent)+SK_yPosition);//K1
          glEnd();

          glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.187f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.186f, persent)+SK_yPosition);//L1
	glVertex2f(VALUE_FROM_PERSENT(-0.195f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.135f, persent)+SK_yPosition);//U
          glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.11f, persent)+SK_yPosition);//G1
	glVertex2f(VALUE_FROM_PERSENT(-0.157f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.157f, persent)+SK_yPosition);//C1
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.205f, persent)+SK_yPosition);//K1
          glEnd();

          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.194f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.195f, persent)+SK_yPosition);//H1
	glVertex2f(VALUE_FROM_PERSENT(-0.187f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.186f, persent)+SK_yPosition);//L1
	glVertex2f(VALUE_FROM_PERSENT(-0.195f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.135f, persent)+SK_yPosition);//U
          glEnd();

          glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.157f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.157f, persent)+SK_yPosition);//C1
	glVertex2f(VALUE_FROM_PERSENT(-0.116f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.115f, persent)+SK_yPosition);//D1
          glVertex2f(VALUE_FROM_PERSENT(-0.116f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+SK_yPosition);//E1
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+SK_yPosition);//F1
          glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+SK_xPosition, VALUE_FROM_PERSENT(0.11f, persent)+SK_yPosition);//G1
          glEnd();

       
          // S

          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.045f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+SPK_yPosition);//N2
	glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+SPK_yPosition);//I2
	glVertex2f(VALUE_FROM_PERSENT(0.192f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+SPK_yPosition);//M2
          glEnd();


          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.065f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.29f, persent)+SPK_yPosition);//O2
	glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+SPK_yPosition);//I2
	glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.195f, persent)+SPK_yPosition);//H2
	glVertex2f(VALUE_FROM_PERSENT(0.065f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.186f, persent)+SPK_yPosition);//P2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.065f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.186f, persent)+SPK_yPosition);//P2
	glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.195f, persent)+SPK_yPosition);//H2
	glVertex2f(VALUE_FROM_PERSENT(0.194f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.12f, persent)+SPK_yPosition);//G2
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.108f, persent)+SPK_yPosition);//Q2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.108f, persent)+SPK_yPosition);//Q2
	glVertex2f(VALUE_FROM_PERSENT(0.194f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.12f, persent)+SPK_yPosition);//G2
	glVertex2f(VALUE_FROM_PERSENT(0.194f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.025f, persent)+SPK_yPosition);//F2
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+SPK_yPosition);//R2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+SPK_yPosition);//R2
	glVertex2f(VALUE_FROM_PERSENT(0.194f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.025f, persent)+SPK_yPosition);//F2
	glVertex2f(VALUE_FROM_PERSENT(0.17f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+SPK_yPosition);//E2
	glVertex2f(VALUE_FROM_PERSENT(0.115f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+SPK_yPosition);//S2
          glEnd();

          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.115f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+SPK_yPosition);//S2
	glVertex2f(VALUE_FROM_PERSENT(0.17f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+SPK_yPosition);//E2
	glVertex2f(VALUE_FROM_PERSENT(0.065f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+SPK_yPosition);//D2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.115f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+SPK_yPosition);//S2
	glVertex2f(VALUE_FROM_PERSENT(0.065f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+SPK_yPosition);//D2
	glVertex2f(VALUE_FROM_PERSENT(0.0642f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.1316f, persent)+SPK_yPosition);//C2
	glVertex2f(VALUE_FROM_PERSENT(0.115f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.078f, persent)+SPK_yPosition);//T2
          glEnd();

          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+SPK_yPosition);//I2
	glVertex2f(VALUE_FROM_PERSENT(0.192f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+SPK_yPosition);//M2
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+SPK_yPosition);//J2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+SPK_yPosition);//J2
	glVertex2f(VALUE_FROM_PERSENT(0.192f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+SPK_yPosition);//M2
	glVertex2f(VALUE_FROM_PERSENT(0.192f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.175f, persent)+SPK_yPosition);//L2
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+SPK_xPosition, VALUE_FROM_PERSENT(0.225f, persent)+SPK_yPosition);//K2
          glEnd();

          // I 
          float SP_xPosition = -0.32;
          float SP_yPosition = 0.0;

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.54f,persent)+SP_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+SP_yPosition);//Z3
	glVertex2f(VALUE_FROM_PERSENT(0.54f,persent)+SP_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+SP_yPosition);//D4
	glVertex2f(VALUE_FROM_PERSENT(0.6f,persent)+SP_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+SP_yPosition);//B4
	glVertex2f(VALUE_FROM_PERSENT(0.6f,persent)+SP_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+SP_yPosition);//A4
          glEnd();


          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.54f,persent)+SP_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+SP_yPosition);//D4
	glVertex2f(VALUE_FROM_PERSENT(0.6f,persent)+SP_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+SP_yPosition);//B4
	glVertex2f(VALUE_FROM_PERSENT(0.52f,persent)+SP_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+SP_yPosition);//C4
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