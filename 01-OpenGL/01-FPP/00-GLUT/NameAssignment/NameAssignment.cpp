#include <GL/freeglut.h>

bool bIsFullScreen = false;
float PS_xPosition;
float PS_yPosition;
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

	/*glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.365f, -0.02f, 0.0f);//D1
	glVertex2f(-0.365f, 0.016f, 0.0f);//C1
	glVertex3f(-0.302f, 0.016f, 0.0f);//G1
	glVertex3f(-0.302f, -0.02f, 0.0f);//E1*/
          //letter D starrt from here 
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.502f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f , persent)+PS_yPosition);//k
	glVertex2f(VALUE_FROM_PERSENT(-0.402f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f , persent)+PS_yPosition);//L
	glVertex2f(VALUE_FROM_PERSENT(-0.428f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//S
	glVertex2f(VALUE_FROM_PERSENT(-0.502f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//G
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.428f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//S
	glVertex2f(VALUE_FROM_PERSENT(-0.402f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f , persent)+PS_yPosition);//L
	glVertex2f(VALUE_FROM_PERSENT(-0.378f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.115f, persent)+PS_yPosition);//M
	glVertex2f(VALUE_FROM_PERSENT(-0.422f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.1f,   persent)+PS_yPosition);//U
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.422f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.1f,   persent)+PS_yPosition);//U
	glVertex2f(VALUE_FROM_PERSENT(-0.378f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.115f, persent)+PS_yPosition);//M
	glVertex2f(VALUE_FROM_PERSENT(-0.378f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.005f, persent)+PS_yPosition);//N
	glVertex2f(VALUE_FROM_PERSENT(-0.422f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.02f,  persent)+PS_yPosition);//V
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.422f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.02f,  persent)+PS_yPosition);//V
	glVertex2f(VALUE_FROM_PERSENT(-0.378f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.005f, persent)+PS_yPosition);//N
	glVertex2f(VALUE_FROM_PERSENT(-0.402f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//O
	glVertex2f(VALUE_FROM_PERSENT(-0.428f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.015f,  persent)+PS_yPosition);//T
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.428f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.015f,  persent)+PS_yPosition);//T
	glVertex2f(VALUE_FROM_PERSENT(-0.402f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//O
	glVertex2f(VALUE_FROM_PERSENT(-0.502f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//P
	glVertex2f(VALUE_FROM_PERSENT(-0.502f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.015f,  persent)+PS_yPosition);//J
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.494f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f,  persent)+PS_yPosition);//H
	glVertex2f(VALUE_FROM_PERSENT(-0.45f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//Q
	glVertex2f(VALUE_FROM_PERSENT(-0.45f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.015f, persent)+PS_yPosition);//R
	glVertex2f(VALUE_FROM_PERSENT(-0.494f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.015f,  persent)+PS_yPosition);//I
	glEnd();

	// from here we start the letter "R"

	glBegin(GL_POLYGON);  
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.365f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f,  persent)+PS_yPosition);//C1C_{1}=(-0.365,0.016)
	glVertex2f(VALUE_FROM_PERSENT(-0.302f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//G1G_{1}=(-0.302,0.016)
	glVertex2f(VALUE_FROM_PERSENT(-0.302f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//E1E_{1}=(-0.302,-0.02)
	glVertex2f(VALUE_FROM_PERSENT(-0.365f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f,  persent)+PS_yPosition);//D1
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.365f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f,  persent)+PS_yPosition);//W
	glVertex2f(VALUE_FROM_PERSENT(-0.265f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//S1
	glVertex2f(VALUE_FROM_PERSENT(-0.312f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//T1
	glVertex2f(VALUE_FROM_PERSENT(-0.365f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.104f,  persent)+PS_yPosition);//Z
	glEnd();

	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.265f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f,  persent)+PS_yPosition);//S1
	glVertex2f(VALUE_FROM_PERSENT(-0.24f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.115f, persent)+PS_yPosition);//R1
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//A2
          glVertex2f(VALUE_FROM_PERSENT(-0.312f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//T1	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f,  persent)+PS_yPosition);//A2
	glVertex2f(VALUE_FROM_PERSENT(-0.24f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.115f, persent)+PS_yPosition);//R1
	glVertex2f(VALUE_FROM_PERSENT(-0.24f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.075f, persent)+PS_yPosition);//Q1
          glVertex2f(VALUE_FROM_PERSENT(-0.284f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.1f, persent)+PS_yPosition);//Z1	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.284f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.1f, persent)+PS_yPosition);//Z1
	glVertex2f(VALUE_FROM_PERSENT(-0.24f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.075f, persent)+PS_yPosition);//Q1
	glVertex2f(VALUE_FROM_PERSENT(-0.252f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.064f, persent)+PS_yPosition);//P1
          glVertex2f(VALUE_FROM_PERSENT(-0.284f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.085f, persent)+PS_yPosition);//W1	
          glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.284f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.085f, persent)+PS_yPosition);//W1
	glVertex2f(VALUE_FROM_PERSENT(-0.252f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.064f, persent)+PS_yPosition);//P1
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.045f, persent)+PS_yPosition);//I1
          glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.08f, persent)+PS_yPosition);//V1	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.08f, persent)+PS_yPosition);//V1
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.045f, persent)+PS_yPosition);//I1
	glVertex2f(VALUE_FROM_PERSENT(-0.312f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.045f, persent)+PS_yPosition);//H1
          glVertex2f(VALUE_FROM_PERSENT(-0.312f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.08f, persent)+PS_yPosition);//U1	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.045f, persent)+PS_yPosition);//I1
	glVertex2f(VALUE_FROM_PERSENT(-0.252f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.064f, persent)+PS_yPosition);//P1
	glVertex2f(VALUE_FROM_PERSENT(-0.242f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.055f, persent)+PS_yPosition);//O1
          glVertex2f(VALUE_FROM_PERSENT(-0.285f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.04f, persent)+PS_yPosition);//J1	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.242f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.055f, persent)+PS_yPosition);//O1
	glVertex2f(VALUE_FROM_PERSENT(-0.242f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//N1
	glVertex2f(VALUE_FROM_PERSENT(-0.285f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//K1
          glVertex2f(VALUE_FROM_PERSENT(-0.285f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.04f, persent)+PS_yPosition);//J1	
          glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.242f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//N1
	glVertex2f(VALUE_FROM_PERSENT(-0.23f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//M1
	glVertex2f(VALUE_FROM_PERSENT(-0.23f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//L1
	glVertex2f(VALUE_FROM_PERSENT(-0.285f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//K1
          glEnd();


	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.356f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//A1
          glVertex2f(VALUE_FROM_PERSENT(-0.312f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//T1	
	glVertex2f(VALUE_FROM_PERSENT(-0.312f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//F1
	glVertex2f(VALUE_FROM_PERSENT(-0.356f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//B1
          glEnd();


	// DOT AFTER DR 

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.22f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.02f, persent)+PS_yPosition);//A1
          glVertex2f(VALUE_FROM_PERSENT(-0.18f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.02f, persent)+PS_yPosition);//T1	
	glVertex2f(VALUE_FROM_PERSENT(-0.18f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//F1
	glVertex2f(VALUE_FROM_PERSENT(-0.22f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//B1
          glEnd();

	// LETTER V

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.166f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//F2
          glVertex2f(VALUE_FROM_PERSENT(-0.102f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//I2	
	glVertex2f(VALUE_FROM_PERSENT(-0.102f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//J2
	glVertex2f(VALUE_FROM_PERSENT(-0.166f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//G2
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.154f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//H2
          glVertex2f(VALUE_FROM_PERSENT(-0.108f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//K2	
	glVertex2f(VALUE_FROM_PERSENT(-0.0896f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.0528f, persent)+PS_yPosition);//L2
	glVertex2f(VALUE_FROM_PERSENT(-0.124f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.017f, persent)+PS_yPosition);//T2
          glEnd();

	
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.124f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.017f, persent)+PS_yPosition);//T2
          glVertex2f(VALUE_FROM_PERSENT(-0.055f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.017f, persent)+PS_yPosition);//S2	
	glVertex2f(VALUE_FROM_PERSENT(-0.0896f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.0528f, persent)+PS_yPosition);//L2
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.0896f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.0528f, persent)+PS_yPosition);//L2
          glVertex2f(VALUE_FROM_PERSENT(-0.072f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//M2	
	glVertex2f(VALUE_FROM_PERSENT(-0.026f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//R2
          glVertex2f(VALUE_FROM_PERSENT(-0.055f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.017f, persent)+PS_yPosition);//S2	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.078f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//O2
          glVertex2f(VALUE_FROM_PERSENT(-0.01f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//P2	
	glVertex2f(VALUE_FROM_PERSENT(-0.01f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//Q2
          glVertex2f(VALUE_FROM_PERSENT(-0.078f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//N2	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.132f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.017f, persent)+PS_yPosition);//U2
          glVertex2f(VALUE_FROM_PERSENT(-0.047f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.017f, persent)+PS_yPosition);//Z2	
	glVertex2f(VALUE_FROM_PERSENT(-0.047f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//W2
          glVertex2f(VALUE_FROM_PERSENT(-0.132f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//V2	
          glEnd();


	// LETTER I

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.0f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//A3
          glVertex2f(VALUE_FROM_PERSENT(0.067f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//I3	
	glVertex2f(VALUE_FROM_PERSENT(0.067f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//J3
          glVertex2f(VALUE_FROM_PERSENT(0.0f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//B3	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.0085f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//C3
          glVertex2f(VALUE_FROM_PERSENT(0.052f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//K3	
	glVertex2f(VALUE_FROM_PERSENT(0.052f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//L3
          glVertex2f(VALUE_FROM_PERSENT(0.0085f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//D3	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.0f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//E3
          glVertex2f(VALUE_FROM_PERSENT(0.062f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//H3	
	glVertex2f(VALUE_FROM_PERSENT(0.062f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//G3
          glVertex2f(VALUE_FROM_PERSENT(0.0f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//F3	
          glEnd();

	//I

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.124f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//V3
          glVertex2f(VALUE_FROM_PERSENT(0.192f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//W3	
	glVertex2f(VALUE_FROM_PERSENT(0.192f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//Z3
          glVertex2f(VALUE_FROM_PERSENT(0.124f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//U3	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.138f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//T3
          glVertex2f(VALUE_FROM_PERSENT(0.182f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//A4	
	glVertex2f(VALUE_FROM_PERSENT(0.182f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.005f, persent)+PS_yPosition);//B4
          glVertex2f(VALUE_FROM_PERSENT(0.138f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.02f, persent)+PS_yPosition);//S3	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.138f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.02f, persent)+PS_yPosition);//S3	
	glVertex2f(VALUE_FROM_PERSENT(0.182f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.005f, persent)+PS_yPosition);//B4
	glVertex2f(VALUE_FROM_PERSENT(0.155f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//C4
          glVertex2f(VALUE_FROM_PERSENT(0.133f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.015f, persent)+PS_yPosition);//R3	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.133f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.015f, persent)+PS_yPosition);//R3	
	glVertex2f(VALUE_FROM_PERSENT(0.155f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//C4
	glVertex2f(VALUE_FROM_PERSENT(0.098f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//D4
          glVertex2f(VALUE_FROM_PERSENT(0.12f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.015f, persent)+PS_yPosition);//B6	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.12f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.015f, persent)+PS_yPosition);//B6	
	glVertex2f(VALUE_FROM_PERSENT(0.098f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//D4
	glVertex2f(VALUE_FROM_PERSENT(0.072f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.005f, persent)+PS_yPosition);//N3
          glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.02f, persent)+PS_yPosition);//P3	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.02f, persent)+PS_yPosition);//P3	
	glVertex2f(VALUE_FROM_PERSENT(0.072f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.005f, persent)+PS_yPosition);//N3
	glVertex2f(VALUE_FROM_PERSENT(0.072f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.045f, persent)+PS_yPosition);//M3
          glVertex2f(VALUE_FROM_PERSENT(0.116f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.045f, persent)+PS_yPosition);//B6	
          glEnd();

	//A

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.24f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//J4
	glVertex2f(VALUE_FROM_PERSENT(0.325f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//K4
	glVertex2f(VALUE_FROM_PERSENT(0.325f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//L4
          glVertex2f(VALUE_FROM_PERSENT(0.24f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//I4	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.248f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//H4	
	glVertex2f(VALUE_FROM_PERSENT(0.282f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//C6
	glVertex2f(VALUE_FROM_PERSENT(0.282f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.081f, persent)+PS_yPosition);//C5
          glVertex2f(VALUE_FROM_PERSENT(0.2715f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.055f, persent)+PS_yPosition);//A5	
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.282f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//C6
	glVertex2f(VALUE_FROM_PERSENT(0.3175f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//M4
	glVertex2f(VALUE_FROM_PERSENT(0.2925f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.055f, persent)+PS_yPosition);//B5
	glVertex2f(VALUE_FROM_PERSENT(0.282f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.081f, persent)+PS_yPosition);//C5
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.248f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//H4
	glVertex2f(VALUE_FROM_PERSENT(0.2715f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.055f, persent)+PS_yPosition);//A5
	glVertex2f(VALUE_FROM_PERSENT(0.258f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//S4
	glVertex2f(VALUE_FROM_PERSENT(0.212f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//G4
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.2925f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.055f, persent)+PS_yPosition);//B5
	glVertex2f(VALUE_FROM_PERSENT(0.3175f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//M4
	glVertex2f(VALUE_FROM_PERSENT(0.352f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//P4
	glVertex2f(VALUE_FROM_PERSENT(0.306f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//V4
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.2715f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.055f, persent)+PS_yPosition);//A5
	glVertex2f(VALUE_FROM_PERSENT(0.2925f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.055f, persent)+PS_yPosition);//B5
	glVertex2f(VALUE_FROM_PERSENT(0.303f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.024f, persent)+PS_yPosition);//U4
	glVertex2f(VALUE_FROM_PERSENT(0.261f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.024f, persent)+PS_yPosition);//T4
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.202f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//F4
	glVertex2f(VALUE_FROM_PERSENT(0.264f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//R4
	glVertex2f(VALUE_FROM_PERSENT(0.264f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//Q4
	glVertex2f(VALUE_FROM_PERSENT(0.202f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//E4
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.301f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//W4
	glVertex2f(VALUE_FROM_PERSENT(0.362f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//O4
	glVertex2f(VALUE_FROM_PERSENT(0.362f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//N4
	glVertex2f(VALUE_FROM_PERSENT(0.301f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//Z4
          glEnd();
           

	//Y


	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.346f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//D5
	glVertex2f(VALUE_FROM_PERSENT(0.4225f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//Z5
	glVertex2f(VALUE_FROM_PERSENT(0.4225f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//W5
	glVertex2f(VALUE_FROM_PERSENT(0.346f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//E5
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.3619f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.1047f, persent)+PS_yPosition);//F5
	glVertex2f(VALUE_FROM_PERSENT(0.4165f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//V5
	glVertex2f(VALUE_FROM_PERSENT(0.435f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.084f, persent)+PS_yPosition);//U5
	glVertex2f(VALUE_FROM_PERSENT(0.413f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+PS_yPosition);//G5
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.448f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//R5
	glVertex2f(VALUE_FROM_PERSENT(0.521f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.14f, persent)+PS_yPosition);//Q5
	glVertex2f(VALUE_FROM_PERSENT(0.521f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//P5
	glVertex2f(VALUE_FROM_PERSENT(0.448f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//S5
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.454f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//T5
	glVertex2f(VALUE_FROM_PERSENT(0.509f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//Q5
	glVertex2f(VALUE_FROM_PERSENT(0.457f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+PS_yPosition);//N5
	glVertex2f(VALUE_FROM_PERSENT(0.435f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.084f, persent)+PS_yPosition);//U5
          glEnd();
          
	glBegin(GL_POLYGON);  
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.4165f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.105f, persent)+PS_yPosition);//V5
	glVertex2f(VALUE_FROM_PERSENT(0.457f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+PS_yPosition);//N5
	glVertex2f(VALUE_FROM_PERSENT(0.457f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//M5
	glVertex2f(VALUE_FROM_PERSENT(0.413f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//H5
	glVertex2f(VALUE_FROM_PERSENT(0.413f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.052f, persent)+PS_yPosition);//G5
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.404f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//I5
	glVertex2f(VALUE_FROM_PERSENT(0.468f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.016f, persent)+PS_yPosition);//L5
	glVertex2f(VALUE_FROM_PERSENT(0.468f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//K5
	glVertex2f(VALUE_FROM_PERSENT(0.404f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f, persent)+PS_yPosition);//J5
          glEnd();



	//G

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.4264f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1625f, persent)+PS_yPosition);//L6
	glVertex2f(VALUE_FROM_PERSENT(-0.382f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.13f, persent)+PS_yPosition);//O6
	glVertex2f(VALUE_FROM_PERSENT(-0.437f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.13f, persent)+PS_yPosition);//N6
	glVertex2f(VALUE_FROM_PERSENT(-0.437f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1625f, persent)+PS_yPosition);//M6
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.4264f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1785f, persent)+PS_yPosition);//K6
	glVertex2f(VALUE_FROM_PERSENT(-0.382f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.194f, persent)+PS_yPosition);//P6
	glVertex2f(VALUE_FROM_PERSENT(-0.382f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.13f, persent)+PS_yPosition);//O6
	glVertex2f(VALUE_FROM_PERSENT(-0.4264f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1625f, persent)+PS_yPosition);//L6
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.4305f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//J6
	glVertex2f(VALUE_FROM_PERSENT(-0.4075f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//Q6
	glVertex2f(VALUE_FROM_PERSENT(-0.382f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.194f, persent)+PS_yPosition);//P6
	glVertex2f(VALUE_FROM_PERSENT(-0.4264f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1785f, persent)+PS_yPosition);//K6
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.455f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//I6
	glVertex2f(VALUE_FROM_PERSENT(-0.4785f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//F6
	glVertex2f(VALUE_FROM_PERSENT(-0.4075f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//Q6
	glVertex2f(VALUE_FROM_PERSENT(-0.4305f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//J6
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.46f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.178f, persent)+PS_yPosition);//H6
	glVertex2f(VALUE_FROM_PERSENT(-0.504f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.194f, persent)+PS_yPosition);//E6
	glVertex2f(VALUE_FROM_PERSENT(-0.4785f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//F6
	glVertex2f(VALUE_FROM_PERSENT(-0.455f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//I6
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.46f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f, persent)+PS_yPosition);//R6
	glVertex2f(VALUE_FROM_PERSENT(-0.504f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.082f, persent)+PS_yPosition);//D6
	glVertex2f(VALUE_FROM_PERSENT(-0.504f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.194f, persent)+PS_yPosition);//E6
	glVertex2f(VALUE_FROM_PERSENT(-0.46f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.178f, persent)+PS_yPosition);//H6
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.455f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//S6
	glVertex2f(VALUE_FROM_PERSENT(-0.4785f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//G6
	glVertex2f(VALUE_FROM_PERSENT(-0.504f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.082f, persent)+PS_yPosition);//D6
	glVertex2f(VALUE_FROM_PERSENT(-0.46f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f, persent)+PS_yPosition);//R6
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.43f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//T6
	glVertex2f(VALUE_FROM_PERSENT(-0.406f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//A7
	glVertex2f(VALUE_FROM_PERSENT(-0.4785f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//G6
	glVertex2f(VALUE_FROM_PERSENT(-0.455f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//S6
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.426f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f, persent)+PS_yPosition);//U6
	glVertex2f(VALUE_FROM_PERSENT(-0.382f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.085f, persent)+PS_yPosition);//Z6
	glVertex2f(VALUE_FROM_PERSENT(-0.406f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//A7
	glVertex2f(VALUE_FROM_PERSENT(-0.43f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//T6
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.426f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.12f, persent)+PS_yPosition);//V6
	glVertex2f(VALUE_FROM_PERSENT(-0.382f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.12f, persent)+PS_yPosition);//W6
	glVertex2f(VALUE_FROM_PERSENT(-0.382f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.085f, persent)+PS_yPosition);//Z6
	glVertex2f(VALUE_FROM_PERSENT(-0.426f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f, persent)+PS_yPosition);//U6
          glEnd();

          //O

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.325f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f, persent)+PS_yPosition);//F7
	glVertex2f(VALUE_FROM_PERSENT(-0.368f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.082f, persent)+PS_yPosition);//B7
	glVertex2f(VALUE_FROM_PERSENT(-0.3435f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//E7
	glVertex2f(VALUE_FROM_PERSENT(-0.32f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//G7
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.32f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//G7
	glVertex2f(VALUE_FROM_PERSENT(-0.3435f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//E7
	glVertex2f(VALUE_FROM_PERSENT(-0.272f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//Q7
	glVertex2f(VALUE_FROM_PERSENT(-0.295f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//H7
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.295f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//H7
	glVertex2f(VALUE_FROM_PERSENT(-0.272f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//Q7
	glVertex2f(VALUE_FROM_PERSENT(-0.246f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.082f, persent)+PS_yPosition);//P7
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f, persent)+PS_yPosition);//I7
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f, persent)+PS_yPosition);//I7
	glVertex2f(VALUE_FROM_PERSENT(-0.246f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.082f, persent)+PS_yPosition);//P7
	glVertex2f(VALUE_FROM_PERSENT(-0.246f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.194f, persent)+PS_yPosition);//O7
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.178f, persent)+PS_yPosition);//J7
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.29f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.178f, persent)+PS_yPosition);//J7
	glVertex2f(VALUE_FROM_PERSENT(-0.246f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.194f, persent)+PS_yPosition);//O7
	glVertex2f(VALUE_FROM_PERSENT(-0.272f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//N7
	glVertex2f(VALUE_FROM_PERSENT(-0.294f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.182f, persent)+PS_yPosition);//K7
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.272f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//N7
	glVertex2f(VALUE_FROM_PERSENT(-0.294f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.182f, persent)+PS_yPosition);//K7
	glVertex2f(VALUE_FROM_PERSENT(-0.32f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.182f, persent)+PS_yPosition);//L7
	glVertex2f(VALUE_FROM_PERSENT(-0.3435f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//D7
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.32f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.182f, persent)+PS_yPosition);//L7
	glVertex2f(VALUE_FROM_PERSENT(-0.3435f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//D7
	glVertex2f(VALUE_FROM_PERSENT(-0.325f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.178f, persent)+PS_yPosition);//M7
	glVertex2f(VALUE_FROM_PERSENT(-0.368f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.194f, persent)+PS_yPosition);//C7
          glEnd();
          
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.368f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.082f, persent)+PS_yPosition);//B7
	glVertex2f(VALUE_FROM_PERSENT(-0.325f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f, persent)+PS_yPosition);//F7
	glVertex2f(VALUE_FROM_PERSENT(-0.325f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.178f, persent)+PS_yPosition);//M7
	glVertex2f(VALUE_FROM_PERSENT(-0.368f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.194f, persent)+PS_yPosition);//C7
          glEnd();


	// K

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.2345f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//U8
	glVertex2f(VALUE_FROM_PERSENT(-0.171f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//L8
	glVertex2f(VALUE_FROM_PERSENT(-0.171f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//K8
	glVertex2f(VALUE_FROM_PERSENT(-0.2345f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//T8
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.225f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//S8
	glVertex2f(VALUE_FROM_PERSENT(-0.18f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//J8
	glVertex2f(VALUE_FROM_PERSENT(-0.18f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//U7
	glVertex2f(VALUE_FROM_PERSENT(-0.225f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//R8
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.2345f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//Q8
	glVertex2f(VALUE_FROM_PERSENT(-0.1705f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//T7
	glVertex2f(VALUE_FROM_PERSENT(-0.1705f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//S7
	glVertex2f(VALUE_FROM_PERSENT(-0.2345f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//R7
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.18f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.115f, persent)+PS_yPosition);//I8
	glVertex2f(VALUE_FROM_PERSENT(-0.158f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//N8
	glVertex2f(VALUE_FROM_PERSENT(-0.0995f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//G8
	glVertex2f(VALUE_FROM_PERSENT(-0.18f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.175f, persent)+PS_yPosition);//V7
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.173f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.168f, persent)+PS_yPosition);//W7
	glVertex2f(VALUE_FROM_PERSENT(-0.143f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.138f, persent)+PS_yPosition);//F8
	glVertex2f(VALUE_FROM_PERSENT(-0.0995f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//E8
	glVertex2f(VALUE_FROM_PERSENT(-0.1575f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//Z7
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.162f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//A8
	glVertex2f(VALUE_FROM_PERSENT(-0.0855f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//D8
	glVertex2f(VALUE_FROM_PERSENT(-0.0855f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//C8
	glVertex2f(VALUE_FROM_PERSENT(-0.162f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//B8
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.162f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//O8
	glVertex2f(VALUE_FROM_PERSENT(-0.085f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//P8
	glVertex2f(VALUE_FROM_PERSENT(-0.085f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//H8
	glVertex2f(VALUE_FROM_PERSENT(-0.162f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//M8
          glEnd();


	// I

	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.078f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//T9
	glVertex2f(VALUE_FROM_PERSENT(-0.014f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//U9
	glVertex2f(VALUE_FROM_PERSENT(-0.014f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//R9
	glVertex2f(VALUE_FROM_PERSENT(-0.078f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//S9
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.067f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//O9
	glVertex2f(VALUE_FROM_PERSENT(-0.024f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.095f, persent)+PS_yPosition);//Q9
	glVertex2f(VALUE_FROM_PERSENT(-0.024f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//R9
	glVertex2f(VALUE_FROM_PERSENT(-0.067f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//S9
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.077f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//Z8
	glVertex2f(VALUE_FROM_PERSENT(-0.014f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//A9
	glVertex2f(VALUE_FROM_PERSENT(-0.014f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//W8
	glVertex2f(VALUE_FROM_PERSENT(-0.077f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//V8
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.024f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.116f, persent)+PS_yPosition);//V9
	glVertex2f(VALUE_FROM_PERSENT(0.009f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.116f, persent)+PS_yPosition);//W9
	glVertex2f(VALUE_FROM_PERSENT(0.009f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.155f, persent)+PS_yPosition);//A10
	glVertex2f(VALUE_FROM_PERSENT(-0.024f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.155f, persent)+PS_yPosition);//Z9
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.001f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//J9
	glVertex2f(VALUE_FROM_PERSENT(0.062f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//L9
	glVertex2f(VALUE_FROM_PERSENT(0.062f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//K9
	glVertex2f(VALUE_FROM_PERSENT(-0.001f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//I9
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.009f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//H9
	glVertex2f(VALUE_FROM_PERSENT(0.051f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//M9
	glVertex2f(VALUE_FROM_PERSENT(0.051f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//F9
	glVertex2f(VALUE_FROM_PERSENT(0.009f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//G9
          glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(-0.001f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//C9
	glVertex2f(VALUE_FROM_PERSENT(0.061f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//E9
	glVertex2f(VALUE_FROM_PERSENT(0.061f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//D9
	glVertex2f(VALUE_FROM_PERSENT(-0.001f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//B9
          glEnd();

	//A 

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.1122f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//B10
	glVertex2f(VALUE_FROM_PERSENT(0.1946,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//T10
	glVertex2f(VALUE_FROM_PERSENT(0.1946f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//S10
	glVertex2f(VALUE_FROM_PERSENT(0.1122f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//C10
          glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.12f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//d10
	glVertex2f(VALUE_FROM_PERSENT(0.1535,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.119f, persent)+PS_yPosition);//K10
	glVertex2f(VALUE_FROM_PERSENT(0.1875f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//R10
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.125f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.145f, persent)+PS_yPosition);//V10
	glVertex2f(VALUE_FROM_PERSENT(0.176f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.145f, persent)+PS_yPosition);//W10
	glVertex2f(VALUE_FROM_PERSENT(0.176f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.175f, persent)+PS_yPosition);//Z10
	glVertex2f(VALUE_FROM_PERSENT(0.125f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.175f, persent)+PS_yPosition);//U10
          glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.12f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//d10
	glVertex2f(VALUE_FROM_PERSENT(0.1535,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.119f, persent)+PS_yPosition);//K10
	glVertex2f(VALUE_FROM_PERSENT(0.124f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//J10
	glVertex2f(VALUE_FROM_PERSENT(0.0835f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//U10
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.1875f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//R10
	glVertex2f(VALUE_FROM_PERSENT(0.1535,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.119f, persent)+PS_yPosition);//K10
	glVertex2f(VALUE_FROM_PERSENT(0.1775f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//L10
	glVertex2f(VALUE_FROM_PERSENT(0.224f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//Q10
          glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.171f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//R10
	glVertex2f(VALUE_FROM_PERSENT(0.2335,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//K10
	glVertex2f(VALUE_FROM_PERSENT(0.2335f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//L10
	glVertex2f(VALUE_FROM_PERSENT(0.171f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//Q10
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.074f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//F10
	glVertex2f(VALUE_FROM_PERSENT(0.135,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//I10
	glVertex2f(VALUE_FROM_PERSENT(0.135f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//H10
	glVertex2f(VALUE_FROM_PERSENT(0.074f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//G10
          glEnd();
// L START HERE 
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.304,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//N11
	glVertex2f(VALUE_FROM_PERSENT(0.242f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0588f, persent)+PS_yPosition);//O11
	glVertex2f(VALUE_FROM_PERSENT(0.242f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//A11
	glVertex2f(VALUE_FROM_PERSENT(0.304f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//M11
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.252f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//B11
	glVertex2f(VALUE_FROM_PERSENT(0.294,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//L11
	glVertex2f(VALUE_FROM_PERSENT(0.294f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//K11
	glVertex2f(VALUE_FROM_PERSENT(0.252f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//C11
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.2405f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//D11
	glVertex2f(VALUE_FROM_PERSENT(0.324,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//J11
	glVertex2f(VALUE_FROM_PERSENT(0.324f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//I11
	glVertex2f(VALUE_FROM_PERSENT(0.2405f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//E11
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.324f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.173f, persent)+PS_yPosition);//H11
	glVertex2f(VALUE_FROM_PERSENT(0.3595,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.173f, persent)+PS_yPosition);//G11
	glVertex2f(VALUE_FROM_PERSENT(0.3595f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//F11
	glVertex2f(VALUE_FROM_PERSENT(0.324f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//I11
          glEnd();

// E START HERE 

          glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.369f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.058f, persent)+PS_yPosition);//A12
	glVertex2f(VALUE_FROM_PERSENT(0.45,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.058f, persent)+PS_yPosition);//D12
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//C12
	glVertex2f(VALUE_FROM_PERSENT(0.369f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//B12
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.058f, persent)+PS_yPosition);//D12
	glVertex2f(VALUE_FROM_PERSENT(0.488,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.058f, persent)+PS_yPosition);//Z11
	glVertex2f(VALUE_FROM_PERSENT(0.488f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1005f, persent)+PS_yPosition);//W11
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1005f, persent)+PS_yPosition);//E12
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.379f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//G12
	glVertex2f(VALUE_FROM_PERSENT(0.422f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.094f, persent)+PS_yPosition);//H12
	glVertex2f(VALUE_FROM_PERSENT(0.422f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//I12
	glVertex2f(VALUE_FROM_PERSENT(0.379f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//F12
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.422f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.12f, persent)+PS_yPosition);//L12
	glVertex2f(VALUE_FROM_PERSENT(0.43f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.12f, persent)+PS_yPosition);//M12
	glVertex2f(VALUE_FROM_PERSENT(0.43f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.155f, persent)+PS_yPosition);//K12
	glVertex2f(VALUE_FROM_PERSENT(0.422f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.155f, persent)+PS_yPosition);//J12
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.43f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.114f, persent)+PS_yPosition);//O12
	glVertex2f(VALUE_FROM_PERSENT(0.464f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.114f, persent)+PS_yPosition);//P12
	glVertex2f(VALUE_FROM_PERSENT(0.464f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.162f, persent)+PS_yPosition);//Q12
	glVertex2f(VALUE_FROM_PERSENT(0.43f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.162f, persent)+PS_yPosition);//N12
          glEnd();

	
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.369f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//V11
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//T11
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//U11
	glVertex2f(VALUE_FROM_PERSENT(0.369f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//P11
          glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//S11
	glVertex2f(VALUE_FROM_PERSENT(0.4875f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.183f, persent)+PS_yPosition);//R11
	glVertex2f(VALUE_FROM_PERSENT(0.4875f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//Q11
	glVertex2f(VALUE_FROM_PERSENT(0.45f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.219f, persent)+PS_yPosition);//U11
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