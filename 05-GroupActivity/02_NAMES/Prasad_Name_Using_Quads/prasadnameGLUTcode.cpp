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
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
          

          // P
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.4f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//G
	glVertex2f(VALUE_FROM_PERSENT(-0.4f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//N
	glVertex2f(VALUE_FROM_PERSENT(-0.35f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//P
	glVertex2f(VALUE_FROM_PERSENT(-0.35f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//H
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.42f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//M
	glVertex2f(VALUE_FROM_PERSENT(-0.4f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//N
	glVertex2f(VALUE_FROM_PERSENT(-0.35f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//P
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//L
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.27f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//k
	glVertex2f(VALUE_FROM_PERSENT(-0.322f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//Q
	glVertex2f(VALUE_FROM_PERSENT(-0.35f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//P
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//L
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.27f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//k
	glVertex2f(VALUE_FROM_PERSENT(-0.322f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//Q
	glVertex2f(VALUE_FROM_PERSENT(-0.322f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.208f, persent)+PRASAD_yPosition);//R
	glVertex2f(VALUE_FROM_PERSENT(-0.27f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.2f, persent)+PRASAD_yPosition);//J
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.27f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//I
	glVertex2f(VALUE_FROM_PERSENT(-0.35f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.18f, persent)+PRASAD_yPosition);//O
	glVertex2f(VALUE_FROM_PERSENT(-0.35f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.12f, persent)+PRASAD_yPosition);//R
	glVertex2f(VALUE_FROM_PERSENT(-0.27f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.2f, persent)+PRASAD_yPosition);//J
          glEnd();


          //R 

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.195f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//T
	glVertex2f(VALUE_FROM_PERSENT(-0.245f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//S
	glVertex2f(VALUE_FROM_PERSENT(-0.245f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//V
	glVertex2f(VALUE_FROM_PERSENT(-0.194f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//I1
          glEnd();

          glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.265f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//W
	glVertex2f(VALUE_FROM_PERSENT(-0.245f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//V
	glVertex2f(VALUE_FROM_PERSENT(-0.194f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//I1
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//J1
          glVertex2f(VALUE_FROM_PERSENT(-0.14f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//Z
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(-0.14f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//Z
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//J1
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.205f, persent)+PRASAD_yPosition);//K1
	glVertex2f(VALUE_FROM_PERSENT(-0.12f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//A1
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.12f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//A1
	glVertex2f(VALUE_FROM_PERSENT(-0.12f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.195f, persent)+PRASAD_yPosition);//B1
	glVertex2f(VALUE_FROM_PERSENT(-0.157f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.157f, persent)+PRASAD_yPosition);//C1
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.205f, persent)+PRASAD_yPosition);//K1
          glEnd();

          glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.187f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.186f, persent)+PRASAD_yPosition);//L1
	glVertex2f(VALUE_FROM_PERSENT(-0.195f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.135f, persent)+PRASAD_yPosition);//U
          glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.11f, persent)+PRASAD_yPosition);//G1
	glVertex2f(VALUE_FROM_PERSENT(-0.157f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.157f, persent)+PRASAD_yPosition);//C1
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.205f, persent)+PRASAD_yPosition);//K1
          glEnd();

          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.194f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.195f, persent)+PRASAD_yPosition);//H1
	glVertex2f(VALUE_FROM_PERSENT(-0.187f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.186f, persent)+PRASAD_yPosition);//L1
	glVertex2f(VALUE_FROM_PERSENT(-0.195f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.135f, persent)+PRASAD_yPosition);//U
          glEnd();

          glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.157f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.157f, persent)+PRASAD_yPosition);//C1
	glVertex2f(VALUE_FROM_PERSENT(-0.116f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.115f, persent)+PRASAD_yPosition);//D1
          glVertex2f(VALUE_FROM_PERSENT(-0.116f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//E1
	glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//F1
          glVertex2f(VALUE_FROM_PERSENT(-0.168f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.11f, persent)+PRASAD_yPosition);//G1
          glEnd();

          // A

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.11f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//U1
	glVertex2f(VALUE_FROM_PERSENT(0.02f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//T1
	glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//B2
	glVertex2f(VALUE_FROM_PERSENT(-0.09f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//V1
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.09f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//V1
	glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//B2
	glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//N1
	glVertex2f(VALUE_FROM_PERSENT(-0.09f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//M1
          glEnd();

          
          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(-0.015f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//A2
	glVertex2f(VALUE_FROM_PERSENT(0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//S1
	glVertex2f(VALUE_FROM_PERSENT(0.02f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//T1
	glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//B2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(-0.015f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//A2
	glVertex2f(VALUE_FROM_PERSENT(0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//S1
	glVertex2f(VALUE_FROM_PERSENT(0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//R1
	glVertex2f(VALUE_FROM_PERSENT(-0.015f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//Q1
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.194f, persent)+PRASAD_yPosition);//W1
	glVertex2f(VALUE_FROM_PERSENT(-0.015f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.17f, persent)+PRASAD_yPosition);//Z1
	glVertex2f(VALUE_FROM_PERSENT(-0.015f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.112f, persent)+PRASAD_yPosition);//P1
	glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PRASAD_yPosition);//O1
          glEnd();

          // S

          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.045f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//N2
	glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//I2
	glVertex2f(VALUE_FROM_PERSENT(0.192f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//M2
          glEnd();


          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.065f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.29f, persent)+PRASAD_yPosition);//O2
	glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//I2
	glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.195f, persent)+PRASAD_yPosition);//H2
	glVertex2f(VALUE_FROM_PERSENT(0.065f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.186f, persent)+PRASAD_yPosition);//P2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.065f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.186f, persent)+PRASAD_yPosition);//P2
	glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.195f, persent)+PRASAD_yPosition);//H2
	glVertex2f(VALUE_FROM_PERSENT(0.194f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.12f, persent)+PRASAD_yPosition);//G2
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.108f, persent)+PRASAD_yPosition);//Q2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.108f, persent)+PRASAD_yPosition);//Q2
	glVertex2f(VALUE_FROM_PERSENT(0.194f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.12f, persent)+PRASAD_yPosition);//G2
	glVertex2f(VALUE_FROM_PERSENT(0.194f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.025f, persent)+PRASAD_yPosition);//F2
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+PRASAD_yPosition);//R2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+PRASAD_yPosition);//R2
	glVertex2f(VALUE_FROM_PERSENT(0.194f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.025f, persent)+PRASAD_yPosition);//F2
	glVertex2f(VALUE_FROM_PERSENT(0.17f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//E2
	glVertex2f(VALUE_FROM_PERSENT(0.115f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+PRASAD_yPosition);//S2
          glEnd();

          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.115f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+PRASAD_yPosition);//S2
	glVertex2f(VALUE_FROM_PERSENT(0.17f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//E2
	glVertex2f(VALUE_FROM_PERSENT(0.065f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//D2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.115f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+PRASAD_yPosition);//S2
	glVertex2f(VALUE_FROM_PERSENT(0.065f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//D2
	glVertex2f(VALUE_FROM_PERSENT(0.0642f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.1316f, persent)+PRASAD_yPosition);//C2
	glVertex2f(VALUE_FROM_PERSENT(0.115f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.078f, persent)+PRASAD_yPosition);//T2
          glEnd();

          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//I2
	glVertex2f(VALUE_FROM_PERSENT(0.192f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//M2
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//J2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//J2
	glVertex2f(VALUE_FROM_PERSENT(0.192f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//M2
	glVertex2f(VALUE_FROM_PERSENT(0.192f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.175f, persent)+PRASAD_yPosition);//L2
	glVertex2f(VALUE_FROM_PERSENT(0.142f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.225f, persent)+PRASAD_yPosition);//K2
          glEnd();


          // D


          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.36f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//K3
	glVertex2f(VALUE_FROM_PERSENT(0.425f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//R3
	glVertex2f(VALUE_FROM_PERSENT(0.48f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//Q3
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.38f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.29f, persent)+PRASAD_yPosition);//L3
	glVertex2f(VALUE_FROM_PERSENT(0.425f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//R3
	glVertex2f(VALUE_FROM_PERSENT(0.425f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.05f, persent)+PRASAD_yPosition);//U3
	glVertex2f(VALUE_FROM_PERSENT(0.38f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//M3
          glEnd();

          
          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.425f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.05f, persent)+PRASAD_yPosition);//U3
	glVertex2f(VALUE_FROM_PERSENT(0.38f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//M3
	glVertex2f(VALUE_FROM_PERSENT(0.48f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//N3
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.05f, persent)+PRASAD_yPosition);//T3
          glEnd();

          glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.05f, persent)+PRASAD_yPosition);//T3
	glVertex2f(VALUE_FROM_PERSENT(0.48f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//N3
	glVertex2f(VALUE_FROM_PERSENT(0.5f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.02f, persent)+PRASAD_yPosition);//O3
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.05f, persent)+PRASAD_yPosition);//T3
	glVertex2f(VALUE_FROM_PERSENT(0.5f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.02f, persent)+PRASAD_yPosition);//O3
	glVertex2f(VALUE_FROM_PERSENT(0.5f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//P3
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//S3
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.48f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//Q3
	glVertex2f(VALUE_FROM_PERSENT(0.5f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//P3
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//S3
	glVertex2f(VALUE_FROM_PERSENT(0.425f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//R3
          glEnd();

//A          
          glPushMatrix();
          glTranslatef(0.31f, 0.0f, 0.0f);
          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.11f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//U1
	glVertex2f(VALUE_FROM_PERSENT(0.02f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//T1
	glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//B2
	glVertex2f(VALUE_FROM_PERSENT(-0.09f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//V1
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.09f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//V1
	glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//B2
	glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//N1
	glVertex2f(VALUE_FROM_PERSENT(-0.09f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//M1
          glEnd();

          
          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(-0.015f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//A2
	glVertex2f(VALUE_FROM_PERSENT(0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//S1
	glVertex2f(VALUE_FROM_PERSENT(0.02f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.3f, persent)+PRASAD_yPosition);//T1
	glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//B2
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(-0.015f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.25f, persent)+PRASAD_yPosition);//A2
	glVertex2f(VALUE_FROM_PERSENT(0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.28f, persent)+PRASAD_yPosition);//S1
	glVertex2f(VALUE_FROM_PERSENT(0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//R1
	glVertex2f(VALUE_FROM_PERSENT(-0.015f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.0f, persent)+PRASAD_yPosition);//Q1
          glEnd();

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.194f, persent)+PRASAD_yPosition);//W1
	glVertex2f(VALUE_FROM_PERSENT(-0.015f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.17f, persent)+PRASAD_yPosition);//Z1
	glVertex2f(VALUE_FROM_PERSENT(-0.015f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.112f, persent)+PRASAD_yPosition);//P1
	glVertex2f(VALUE_FROM_PERSENT(-0.04f,persent)+PRASAD_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PRASAD_yPosition);//O1
          glEnd();
          glPopMatrix();

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