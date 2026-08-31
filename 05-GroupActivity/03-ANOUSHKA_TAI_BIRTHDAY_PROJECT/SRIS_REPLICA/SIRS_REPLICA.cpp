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

void display(void)
{
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	
	glBegin(GL_POLYGON);
	glColor3f(0.42f, 0.26f, 0.2f);
	glVertex2f(VALUE_FROM_PERSENT(0.182f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.249f , persent)+PS_yPosition);//R1
	glVertex2f(VALUE_FROM_PERSENT(0.197f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.189f , persent)+PS_yPosition);//W1
	glVertex2f(VALUE_FROM_PERSENT(0.237f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.269f, persent)+PS_yPosition);//U1
	glVertex2f(VALUE_FROM_PERSENT(0.252f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.276f, persent)+PS_yPosition);//V1
	glVertex2f(VALUE_FROM_PERSENT(0.296f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.358f, persent)+PS_yPosition);//Q1
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.48f, 0.3f, 0.24f);;//	glColor3f(0.48f, 0.3f, 0.24f);

	glVertex2f(VALUE_FROM_PERSENT(0.296f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.358f, persent)+PS_yPosition);//Q1
	glVertex2f(VALUE_FROM_PERSENT(0.252f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.276f, persent)+PS_yPosition);//V1
	glVertex2f(VALUE_FROM_PERSENT(0.406f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.355f, persent)+PS_yPosition);//T1
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.41f, 0.27f, 0.23f);
	glVertex2f(VALUE_FROM_PERSENT(0.237f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.269f , persent)+PS_yPosition);//u1
	glVertex2f(VALUE_FROM_PERSENT(0.252f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.276f , persent)+PS_yPosition);//v1
	glVertex2f(VALUE_FROM_PERSENT(0.406f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.355f, persent)+PS_yPosition);//t1
	glVertex2f(VALUE_FROM_PERSENT(0.404f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.267f, persent)+PS_yPosition);//`b3
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.49f, 0.36f, 0.31f);
	glVertex2f(VALUE_FROM_PERSENT(0.406f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.355f, persent)+PS_yPosition);//t1
	glVertex2f(VALUE_FROM_PERSENT(0.548f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.229f, persent)+PS_yPosition);//c3
	glVertex2f(VALUE_FROM_PERSENT(0.404f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.267f, persent)+PS_yPosition);//`b3
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.73f, 0.45f, 0.32f);
	glVertex2f(VALUE_FROM_PERSENT(0.197f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.189f , persent)+PS_yPosition);//W1
	glVertex2f(VALUE_FROM_PERSENT(0.293f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.213f , persent)+PS_yPosition);//z1
	glVertex2f(VALUE_FROM_PERSENT(0.404f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.267f, persent)+PS_yPosition);//`b3
	glVertex2f(VALUE_FROM_PERSENT(0.237f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.269f , persent)+PS_yPosition);//u1
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.86f, 0.57f, 0.4f);
	glVertex2f(VALUE_FROM_PERSENT(0.293f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.213f , persent)+PS_yPosition);//z1
	glVertex2f(VALUE_FROM_PERSENT(0.404f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.267f, persent)+PS_yPosition);//`b3
	glVertex2f(VALUE_FROM_PERSENT(0.426f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.197f, persent)+PS_yPosition);//c2
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.79f, 0.5f, 0.36f);
	glVertex2f(VALUE_FROM_PERSENT(0.426f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.197f, persent)+PS_yPosition);//c2
	glVertex2f(VALUE_FROM_PERSENT(0.404f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.267f, persent)+PS_yPosition);//`b3
	glVertex2f(VALUE_FROM_PERSENT(0.520f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.236f, persent)+PS_yPosition);//p7
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.73f, 0.45f, 0.32f);
	glVertex2f(VALUE_FROM_PERSENT(0.426f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.197f, persent)+PS_yPosition);//c2
	glVertex2f(VALUE_FROM_PERSENT(0.514f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.118f , persent)+PS_yPosition);//h5
	glVertex2f(VALUE_FROM_PERSENT(0.562f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.161f, persent)+PS_yPosition);//`q7
	glVertex2f(VALUE_FROM_PERSENT(0.548f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.229f, persent)+PS_yPosition);//c3
	glVertex2f(VALUE_FROM_PERSENT(0.520f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.236f, persent)+PS_yPosition);//p7
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.89f, 0.61f, 0.43f);
	glVertex2f(VALUE_FROM_PERSENT(0.514f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.118f , persent)+PS_yPosition);//h5
	glVertex2f(VALUE_FROM_PERSENT(0.562f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.161f, persent)+PS_yPosition);//`q7
	glVertex2f(VALUE_FROM_PERSENT(0.599f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.014f, persent)+PS_yPosition);//i5
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.93f, 0.64f, 0.48f);
	glVertex2f(VALUE_FROM_PERSENT(0.548f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.229f, persent)+PS_yPosition);//c3
	glVertex2f(VALUE_FROM_PERSENT(0.562f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.161f, persent)+PS_yPosition);//`q7
	glVertex2f(VALUE_FROM_PERSENT(0.599f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.014f, persent)+PS_yPosition);//i5
	glVertex2f(VALUE_FROM_PERSENT(0.676f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.129f, persent)+PS_yPosition);//e3
	glEnd();

	
	glBegin(GL_POLYGON);
	glColor3f(0.95f, 0.71f, 0.52f);
	glVertex2f(VALUE_FROM_PERSENT(0.599f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.014f, persent)+PS_yPosition);//i5
	glVertex2f(VALUE_FROM_PERSENT(0.707f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.016f, persent)+PS_yPosition);//j5
	glVertex2f(VALUE_FROM_PERSENT(0.707f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.024f, persent)+PS_yPosition);//j3
	glVertex2f(VALUE_FROM_PERSENT(0.683f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.115f, persent)+PS_yPosition);//g3
	glVertex2f(VALUE_FROM_PERSENT(0.676f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.129f, persent)+PS_yPosition);//e3
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.97f, 0.75f, 0.6f);
	glVertex2f(VALUE_FROM_PERSENT(0.514f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.118f , persent)+PS_yPosition);//h5
	glVertex2f(VALUE_FROM_PERSENT(0.509f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.108f, persent)+PS_yPosition);//f2
	glVertex2f(VALUE_FROM_PERSENT(0.513f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.002f, persent)+PS_yPosition);//g2
	glVertex2f(VALUE_FROM_PERSENT(0.599f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.014f, persent)+PS_yPosition);//i5
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.63f, 0.44f);
	glVertex2f(VALUE_FROM_PERSENT(0.426f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.197f , persent)+PS_yPosition);//c2
	glVertex2f(VALUE_FROM_PERSENT(0.451f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f , persent)+PS_yPosition);//d2
	glVertex2f(VALUE_FROM_PERSENT(0.469f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.044f, persent)+PS_yPosition);//e2
	glVertex2f(VALUE_FROM_PERSENT(0.509f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.108f, persent)+PS_yPosition);//f2
	glVertex2f(VALUE_FROM_PERSENT(0.514f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.118f, persent)+PS_yPosition);//h5
	glEnd();

	
          glBegin(GL_TRIANGLES);
	glColor3f(0.89f, 0.61f, 0.43f);
	glVertex2f(VALUE_FROM_PERSENT(0.473f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.051f , persent)+PS_yPosition);//N2
	glVertex2f(VALUE_FROM_PERSENT(0.496f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0525f, persent)+PS_yPosition);//O2
	glVertex2f(VALUE_FROM_PERSENT(0.509f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.108f, persent)+PS_yPosition);//f2
	glEnd();


	
	glBegin(GL_POLYGON);
	glColor3f(0.71f, 0.42f, 0.29f);
	glVertex2f(VALUE_FROM_PERSENT(0.496f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0525f, persent)+PS_yPosition);//O2
	glVertex2f(VALUE_FROM_PERSENT(0.508f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.022f, persent)+PS_yPosition);//P2
	glVertex2f(VALUE_FROM_PERSENT(0.512f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.023f, persent)+PS_yPosition);//p7
	glVertex2f(VALUE_FROM_PERSENT(0.509f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.108f, persent)+PS_yPosition);//f2s
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.71f, 0.42f, 0.29f);
	glVertex2f(VALUE_FROM_PERSENT(0.494f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.001f, persent)+PS_yPosition);//q2
	glVertex2f(VALUE_FROM_PERSENT(0.513f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.002f, persent)+PS_yPosition);//g2
	glVertex2f(VALUE_FROM_PERSENT(0.512f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.023f, persent)+PS_yPosition);//p7
	glVertex2f(VALUE_FROM_PERSENT(0.508f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.022f, persent)+PS_yPosition);//P2
	glEnd();



	//mustach

	glBegin(GL_POLYGON);
	glColor3f(0.16f, 0.13f, 0.14f);
	glVertex2f(VALUE_FROM_PERSENT(0.494f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.001f, persent)+PS_yPosition);//q2
	glVertex2f(VALUE_FROM_PERSENT(0.508f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.022f, persent)+PS_yPosition);//P2
	glVertex2f(VALUE_FROM_PERSENT(0.496f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.0525f, persent)+PS_yPosition);//O2
	glVertex2f(VALUE_FROM_PERSENT(0.473f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.051f , persent)+PS_yPosition);//N2
	glVertex2f(VALUE_FROM_PERSENT(0.469f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.044f , persent)+PS_yPosition);//e2
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.16f, 0.13f, 0.14f);
	glVertex2f(VALUE_FROM_PERSENT(0.442f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.011f, persent)+PS_yPosition);//m2
	glVertex2f(VALUE_FROM_PERSENT(0.494f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.001f, persent)+PS_yPosition);//q2
	glVertex2f(VALUE_FROM_PERSENT(0.469f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.044f , persent)+PS_yPosition);//e2
	glVertex2f(VALUE_FROM_PERSENT(0.439f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.005f, persent)+PS_yPosition);//l2

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.16f, 0.13f, 0.14f);
	glVertex2f(VALUE_FROM_PERSENT(0.439f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.005f, persent)+PS_yPosition);//l2
	glVertex2f(VALUE_FROM_PERSENT(0.469f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.044f , persent)+PS_yPosition);//e2
	glVertex2f(VALUE_FROM_PERSENT(0.46f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.05f, persent)+PS_yPosition);//d2
	glVertex2f(VALUE_FROM_PERSENT(0.431f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.020f , persent)+PS_yPosition);//k2
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.16f, 0.13f, 0.14f);
	glVertex2f(VALUE_FROM_PERSENT(0.439f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.031f , persent)+PS_yPosition);//q7
	glVertex2f(VALUE_FROM_PERSENT(0.46f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.05f, persent)+PS_yPosition);//d2
	glVertex2f(VALUE_FROM_PERSENT(0.403f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f, persent)+PS_yPosition);//r7
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.16f, 0.13f, 0.14f);
	glVertex2f(VALUE_FROM_PERSENT(0.418f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.030f , persent)+PS_yPosition);//j2
	glVertex2f(VALUE_FROM_PERSENT(0.431f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.020f , persent)+PS_yPosition);//k2
	glVertex2f(VALUE_FROM_PERSENT(0.439f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.031f , persent)+PS_yPosition);//q7
	glEnd();


	
	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.34f, 0.35f);
	glVertex2f(VALUE_FROM_PERSENT(0.442f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.011f, persent)+PS_yPosition);//m2
	glVertex2f(VALUE_FROM_PERSENT(0.439f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.005f, persent)+PS_yPosition);//l2
	glVertex2f(VALUE_FROM_PERSENT(0.431f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.020f , persent)+PS_yPosition);//k2
	glVertex2f(VALUE_FROM_PERSENT(0.418f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.030f , persent)+PS_yPosition);//j2
	glVertex2f(VALUE_FROM_PERSENT(0.364f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.031f , persent)+PS_yPosition);//h2
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.4f, 0.34f, 0.35f);
	glVertex2f(VALUE_FROM_PERSENT(0.364f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.031f , persent)+PS_yPosition);//h2
	glVertex2f(VALUE_FROM_PERSENT(0.418f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.030f , persent)+PS_yPosition);//j2
	glVertex2f(VALUE_FROM_PERSENT(0.348f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.019f , persent)+PS_yPosition);//i2
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.21f, 0.17f, 0.17f);
	glVertex2f(VALUE_FROM_PERSENT(0.3f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.035f, persent)+PS_yPosition);//u2
	glVertex2f(VALUE_FROM_PERSENT(0.364f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.031f , persent)+PS_yPosition);//h2
	glVertex2f(VALUE_FROM_PERSENT(0.348f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.019f , persent)+PS_yPosition);//i2
	glVertex2f(VALUE_FROM_PERSENT(0.34f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f , persent)+PS_yPosition);//r2
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.21f, 0.17f, 0.17f);
	glVertex2f(VALUE_FROM_PERSENT(0.3f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.035f, persent)+PS_yPosition);//u2
	glVertex2f(VALUE_FROM_PERSENT(0.34f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f , persent)+PS_yPosition);//r2
	glVertex2f(VALUE_FROM_PERSENT(0.323f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.024f , persent)+PS_yPosition);//u7
	glVertex2f(VALUE_FROM_PERSENT(0.318f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.025f , persent)+PS_yPosition);//s2
	glVertex2f(VALUE_FROM_PERSENT(0.297f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.005f , persent)+PS_yPosition);//t2
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.27f, 0.22f, 0.23f);
	glVertex2f(VALUE_FROM_PERSENT(0.278f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.030f, persent)+PS_yPosition);//z2
	glVertex2f(VALUE_FROM_PERSENT(0.290f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.033f , persent)+PS_yPosition);//v5
	glVertex2f(VALUE_FROM_PERSENT(0.3f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.035f , persent)+PS_yPosition);//u2
	glVertex2f(VALUE_FROM_PERSENT(0.297f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.005f , persent)+PS_yPosition);//t2
	glEnd();

	
	glBegin(GL_QUADS);
	glColor3f(0.27f, 0.22f, 0.23f);
	glVertex2f(VALUE_FROM_PERSENT(0.277f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.0377f , persent)+PS_yPosition);//z2
	glVertex2f(VALUE_FROM_PERSENT(0.297f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.005f , persent)+PS_yPosition);//t2
	glVertex2f(VALUE_FROM_PERSENT(0.304f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.004f , persent)+PS_yPosition);//v2
	glVertex2f(VALUE_FROM_PERSENT(0.261f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.008f , persent)+PS_yPosition);//w2
	glEnd();


	
	glBegin(GL_QUADS);
	glColor3f(0.14f, 0.11f, 0.12f);
	glVertex2f(VALUE_FROM_PERSENT(0.227f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.036f, persent)+PS_yPosition);//l4
	glVertex2f(VALUE_FROM_PERSENT(0.277f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.0377f , persent)+PS_yPosition);//z2
	glVertex2f(VALUE_FROM_PERSENT(0.261f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.008f , persent)+PS_yPosition);//w2
	glVertex2f(VALUE_FROM_PERSENT(0.209f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.004f , persent)+PS_yPosition);//m4
	glEnd();
	
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.14f, 0.11f, 0.12f);
	glVertex2f(VALUE_FROM_PERSENT(0.209f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.004f , persent)+PS_yPosition);//m4
	glVertex2f(VALUE_FROM_PERSENT(0.261f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.008f , persent)+PS_yPosition);//w2
	glVertex2f(VALUE_FROM_PERSENT(0.205f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.013f , persent)+PS_yPosition);//n4
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.2f, 0.15f, 0.16f);
	glVertex2f(VALUE_FROM_PERSENT(0.176f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.029f, persent)+PS_yPosition);//j4
	glVertex2f(VALUE_FROM_PERSENT(0.213f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.036f , persent)+PS_yPosition);//k4
	glVertex2f(VALUE_FROM_PERSENT(0.227f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.036f, persent)+PS_yPosition);//l4
	glVertex2f(VALUE_FROM_PERSENT(0.209f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.004f , persent)+PS_yPosition);//m4
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.15f, 0.16f);
	glVertex2f(VALUE_FROM_PERSENT(0.176f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.029f, persent)+PS_yPosition);//j4
	glVertex2f(VALUE_FROM_PERSENT(0.209f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.004f , persent)+PS_yPosition);//m4
	glVertex2f(VALUE_FROM_PERSENT(0.205f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.013f , persent)+PS_yPosition);//n4
	glVertex2f(VALUE_FROM_PERSENT(0.182f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.015f , persent)+PS_yPosition);//h4
	glVertex2f(VALUE_FROM_PERSENT(0.169f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.005f , persent)+PS_yPosition);//i4
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.09f, 0.07f, 0.09f);
	glVertex2f(VALUE_FROM_PERSENT(0.127f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.018f, persent)+PS_yPosition);//o4
	glVertex2f(VALUE_FROM_PERSENT(0.139f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.021f , persent)+PS_yPosition);//s4
	glVertex2f(VALUE_FROM_PERSENT(0.176f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.029f, persent)+PS_yPosition);//j4
	glVertex2f(VALUE_FROM_PERSENT(0.169f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.005f , persent)+PS_yPosition);//i4
	glVertex2f(VALUE_FROM_PERSENT(0.113f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.023f , persent)+PS_yPosition);//t3
	glEnd();


	
	glBegin(GL_POLYGON);
	glColor3f(0.09f, 0.07f, 0.09f);
	glVertex2f(VALUE_FROM_PERSENT(0.113f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.023f, persent)+PS_yPosition);//t3
	glVertex2f(VALUE_FROM_PERSENT(0.169f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.005f , persent)+PS_yPosition);//i4
	glVertex2f(VALUE_FROM_PERSENT(0.182f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.015f, persent)+PS_yPosition);//h4
	glVertex2f(VALUE_FROM_PERSENT(0.177f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.040f , persent)+PS_yPosition);//v3
	glVertex2f(VALUE_FROM_PERSENT(0.170f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f , persent)+PS_yPosition);//n3
	glVertex2f(VALUE_FROM_PERSENT(0.153f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.056f , persent)+PS_yPosition);//u3

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.14f, 0.11f, 0.12f);
	glVertex2f(VALUE_FROM_PERSENT(0.182f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.015f, persent)+PS_yPosition);//h4
	glVertex2f(VALUE_FROM_PERSENT(0.219f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.042f , persent)+PS_yPosition);//d4
	glVertex2f(VALUE_FROM_PERSENT(0.177f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.040f , persent)+PS_yPosition);//v3
	glEnd();


	//lips

	glBegin(GL_POLYGON);
	glColor3f(0.61f, 0.28f, 0.21f);
	glVertex2f(VALUE_FROM_PERSENT(0.182f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.015f, persent)+PS_yPosition);//h4
	glVertex2f(VALUE_FROM_PERSENT(0.261f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.008f , persent)+PS_yPosition);//w2
	glVertex2f(VALUE_FROM_PERSENT(0.283f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.027f, persent)+PS_yPosition);//v7
	glVertex2f(VALUE_FROM_PERSENT(0.281f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.046f , persent)+PS_yPosition);//w3
	glVertex2f(VALUE_FROM_PERSENT(0.219f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.042f , persent)+PS_yPosition);//d4
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.85f, 0.42f, 0.31f);
	glVertex2f(VALUE_FROM_PERSENT(0.261f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.008f , persent)+PS_yPosition);//w2
	glVertex2f(VALUE_FROM_PERSENT(0.304f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.004f , persent)+PS_yPosition);//v2
	glVertex2f(VALUE_FROM_PERSENT(0.318f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.025f, persent)+PS_yPosition);//s2
	glVertex2f(VALUE_FROM_PERSENT(0.305f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.032f , persent)+PS_yPosition);//w7
	glVertex2f(VALUE_FROM_PERSENT(0.283f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.027f, persent)+PS_yPosition);//v7
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.62f, 0.29f, 0.22f);
	glVertex2f(VALUE_FROM_PERSENT(0.283f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.027f, persent)+PS_yPosition);//v7
	glVertex2f(VALUE_FROM_PERSENT(0.305f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.032f , persent)+PS_yPosition);//w7
	glVertex2f(VALUE_FROM_PERSENT(0.311f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f, persent)+PS_yPosition);//z3
	glVertex2f(VALUE_FROM_PERSENT(0.281f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.046f , persent)+PS_yPosition);//w3
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.62f, 0.29f, 0.22f);
	glVertex2f(VALUE_FROM_PERSENT(0.305f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.032f , persent)+PS_yPosition);//w7
	glVertex2f(VALUE_FROM_PERSENT(0.318f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.025f, persent)+PS_yPosition);//s2
	glVertex2f(VALUE_FROM_PERSENT(0.323f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.024f , persent)+PS_yPosition);//u7
	glVertex2f(VALUE_FROM_PERSENT(0.336f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.037f , persent)+PS_yPosition);//t7
	glVertex2f(VALUE_FROM_PERSENT(0.311f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f, persent)+PS_yPosition);//z3
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.62f, 0.29f, 0.22f);
	glVertex2f(VALUE_FROM_PERSENT(0.336f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.037f , persent)+PS_yPosition);//t7
	glVertex2f(VALUE_FROM_PERSENT(0.439f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.031f , persent)+PS_yPosition);//q7
	glVertex2f(VALUE_FROM_PERSENT(0.403f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f, persent)+PS_yPosition);//r7
	glVertex2f(VALUE_FROM_PERSENT(0.311f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f, persent)+PS_yPosition);//z3
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.89f, 0.55f, 0.4f);
	glVertex2f(VALUE_FROM_PERSENT(0.323f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.024f , persent)+PS_yPosition);//u7
	glVertex2f(VALUE_FROM_PERSENT(0.34f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.02f , persent)+PS_yPosition);//r2
	glVertex2f(VALUE_FROM_PERSENT(0.348f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.019f , persent)+PS_yPosition);//i2
	glVertex2f(VALUE_FROM_PERSENT(0.418f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.030f , persent)+PS_yPosition);//j2
	glVertex2f(VALUE_FROM_PERSENT(0.336f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.037f , persent)+PS_yPosition);//t7
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.89f, 0.55f, 0.4f);
	glVertex2f(VALUE_FROM_PERSENT(0.336f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.037f , persent)+PS_yPosition);//t7
	glVertex2f(VALUE_FROM_PERSENT(0.418f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.030f , persent)+PS_yPosition);//j2
	glVertex2f(VALUE_FROM_PERSENT(0.439f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.031f , persent)+PS_yPosition);//q7
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.64f, 0.33f, 0.24f);
	glVertex2f(VALUE_FROM_PERSENT(0.177f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.040f , persent)+PS_yPosition);//v3
	glVertex2f(VALUE_FROM_PERSENT(0.219f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.042f , persent)+PS_yPosition);//d4
	glVertex2f(VALUE_FROM_PERSENT(0.26f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f , persent)+PS_yPosition);//c4
	glVertex2f(VALUE_FROM_PERSENT(0.234f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.096f , persent)+PS_yPosition);//b4
	glVertex2f(VALUE_FROM_PERSENT(0.204f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.072f , persent)+PS_yPosition);//a4
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.81f, 0.42f, 0.31f);
	glVertex2f(VALUE_FROM_PERSENT(0.219f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.042f , persent)+PS_yPosition);//d4
	glVertex2f(VALUE_FROM_PERSENT(0.281f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.046f , persent)+PS_yPosition);//w3
	glVertex2f(VALUE_FROM_PERSENT(0.26f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f , persent)+PS_yPosition);//c4
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.91f, 0.53f, 0.37f);
	glVertex2f(VALUE_FROM_PERSENT(0.26f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f , persent)+PS_yPosition);//c4
	glVertex2f(VALUE_FROM_PERSENT(0.281f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.046f , persent)+PS_yPosition);//w3
	glVertex2f(VALUE_FROM_PERSENT(0.311f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f, persent)+PS_yPosition);//z3
	glVertex2f(VALUE_FROM_PERSENT(0.327f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.086f , persent)+PS_yPosition);//f4
	glVertex2f(VALUE_FROM_PERSENT(0.335f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.107f , persent)+PS_yPosition);//e4
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.97f, 0.69f, 0.56f);
	glVertex2f(VALUE_FROM_PERSENT(0.311f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f, persent)+PS_yPosition);//z3
	glVertex2f(VALUE_FROM_PERSENT(0.382f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f , persent)+PS_yPosition);//g4
	glVertex2f(VALUE_FROM_PERSENT(0.327f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.086f , persent)+PS_yPosition);//f4
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.95f, 0.59f, 0.4f);
	glVertex2f(VALUE_FROM_PERSENT(0.327f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.086f , persent)+PS_yPosition);//f4
	glVertex2f(VALUE_FROM_PERSENT(0.382f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f , persent)+PS_yPosition);//g4
	glVertex2f(VALUE_FROM_PERSENT(0.403f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f, persent)+PS_yPosition);//r7
	glVertex2f(VALUE_FROM_PERSENT(0.451f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f , persent)+PS_yPosition);//d2
	glVertex2f(VALUE_FROM_PERSENT(0.335f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.107f , persent)+PS_yPosition);//e4
	glEnd();

	
	glBegin(GL_POLYGON);
	glColor3f(0.95f, 0.7f, 0.54f);
	glVertex2f(VALUE_FROM_PERSENT(0.335f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.107f , persent)+PS_yPosition);//e4
	glVertex2f(VALUE_FROM_PERSENT(0.451f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f , persent)+PS_yPosition);//d2
	glVertex2f(VALUE_FROM_PERSENT(0.426f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.197f, persent)+PS_yPosition);//c2
	glVertex2f(VALUE_FROM_PERSENT(0.374f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.164f , persent)+PS_yPosition);//f5
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.91f, 0.56f, 0.4f);
	glVertex2f(VALUE_FROM_PERSENT(0.285f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.128f , persent)+PS_yPosition);//a2
	glVertex2f(VALUE_FROM_PERSENT(0.374f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.164f , persent)+PS_yPosition);//f5
	glVertex2f(VALUE_FROM_PERSENT(0.335f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.107f , persent)+PS_yPosition);//e4
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.77f, 0.47f, 0.33f);
	glVertex2f(VALUE_FROM_PERSENT(0.26f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f , persent)+PS_yPosition);//c4
	glVertex2f(VALUE_FROM_PERSENT(0.335f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.107f , persent)+PS_yPosition);//e4
	glVertex2f(VALUE_FROM_PERSENT(0.287f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.135f, persent)+PS_yPosition);//a2

	glEnd();

	
	glBegin(GL_QUADS);
	glColor3f(0.89f, 0.58f, 0.41f);
	glVertex2f(VALUE_FROM_PERSENT(0.197f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.189f , persent)+PS_yPosition);//w1
	glVertex2f(VALUE_FROM_PERSENT(0.196f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.179f , persent)+PS_yPosition);//b2
	glVertex2f(VALUE_FROM_PERSENT(0.285f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.128f , persent)+PS_yPosition);//a2
	glVertex2f(VALUE_FROM_PERSENT(0.293f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.213f , persent)+PS_yPosition);//z1
	glEnd();

	
	glBegin(GL_QUADS);
	glColor3f(0.95f, 0.68f, 0.54f);
	glVertex2f(VALUE_FROM_PERSENT(0.293f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.213f , persent)+PS_yPosition);//z1
	glVertex2f(VALUE_FROM_PERSENT(0.285f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.128f , persent)+PS_yPosition);//a2
	glVertex2f(VALUE_FROM_PERSENT(0.374f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.164f , persent)+PS_yPosition);//f5
	glVertex2f(VALUE_FROM_PERSENT(0.426f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.197f, persent)+PS_yPosition);//c2
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.79f, 0.48f, 0.33f);
	glVertex2f(VALUE_FROM_PERSENT(0.170f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f , persent)+PS_yPosition);//N3
	glVertex2f(VALUE_FROM_PERSENT(0.177f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.040f , persent)+PS_yPosition);//V3
	glVertex2f(VALUE_FROM_PERSENT(0.204f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.072f, persent)+PS_yPosition);//A4
	glVertex2f(VALUE_FROM_PERSENT(0.234f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.096f , persent)+PS_yPosition);//B4
	glVertex2f(VALUE_FROM_PERSENT(0.196f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.179f , persent)+PS_yPosition);//B2
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.79f, 0.48f, 0.33f);
	glVertex2f(VALUE_FROM_PERSENT(0.196f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.179f , persent)+PS_yPosition);//b2
	glVertex2f(VALUE_FROM_PERSENT(0.234f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.096f , persent)+PS_yPosition);//b4
	glVertex2f(VALUE_FROM_PERSENT(0.26f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.1f , persent)+PS_yPosition);//c4
	glVertex2f(VALUE_FROM_PERSENT(0.287f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.135f, persent)+PS_yPosition);//a2
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.59f, 0.34f, 0.25f);
	glVertex2f(VALUE_FROM_PERSENT(0.106f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.078f , persent)+PS_yPosition);//m3
	glVertex2f(VALUE_FROM_PERSENT(0.170f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.048f , persent)+PS_yPosition);//n3
	glVertex2f(VALUE_FROM_PERSENT(0.196f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.179f, persent)+PS_yPosition);//b2
	glVertex2f(VALUE_FROM_PERSENT(0.197f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.189f , persent)+PS_yPosition);//w1
	glVertex2f(VALUE_FROM_PERSENT(0.144f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.207f , persent)+PS_yPosition);//l3
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.48f, 0.28f, 0.23f);
	glVertex2f(VALUE_FROM_PERSENT(0.144f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.207f , persent)+PS_yPosition);//l3
	glVertex2f(VALUE_FROM_PERSENT(0.197f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.189f , persent)+PS_yPosition);//w1
	glVertex2f(VALUE_FROM_PERSENT(0.182f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.249f , persent)+PS_yPosition);//R1
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.48f, 0.29f, 0.19f);
	glVertex2f(VALUE_FROM_PERSENT(0.079f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.090f , persent)+PS_yPosition);//o3
	glVertex2f(VALUE_FROM_PERSENT(0.106f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.078f , persent)+PS_yPosition);//m3
	glVertex2f(VALUE_FROM_PERSENT(0.144f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.207f , persent)+PS_yPosition);//l3
	glVertex2f(VALUE_FROM_PERSENT(0.124f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.182f, persent)+PS_yPosition);//p3
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.45f, 0.33f);
	glVertex2f(VALUE_FROM_PERSENT(0.106f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.078f , persent)+PS_yPosition);//m3
	glVertex2f(VALUE_FROM_PERSENT(0.153f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.056f , persent)+PS_yPosition);//u3
	glVertex2f(VALUE_FROM_PERSENT(0.113f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.023f, persent)+PS_yPosition);//t3
	glVertex2f(VALUE_FROM_PERSENT(0.092f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.015f , persent)+PS_yPosition);//s3
	glEnd();

          glBegin(GL_TRIANGLES);
	glColor3f(0.75f, 0.45f, 0.33f);
	glVertex2f(VALUE_FROM_PERSENT(0.092f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.015f , persent)+PS_yPosition);//s3
	glVertex2f(VALUE_FROM_PERSENT(0.113f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.023f, persent)+PS_yPosition);//t3
	glVertex2f(VALUE_FROM_PERSENT(0.127f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.018f , persent)+PS_yPosition);//o4
          glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.56f, 0.32f, 0.22f);
	glVertex2f(VALUE_FROM_PERSENT(0.079f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.090f , persent)+PS_yPosition);//o3
	glVertex2f(VALUE_FROM_PERSENT(0.106f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.078f , persent)+PS_yPosition);//m3
	glVertex2f(VALUE_FROM_PERSENT(0.092f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.015f , persent)+PS_yPosition);//s3
	glVertex2f(VALUE_FROM_PERSENT(0.078f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.003f , persent)+PS_yPosition);//r3
	glVertex2f(VALUE_FROM_PERSENT(0.056f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.010f , persent)+PS_yPosition);//q3
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.75f, 0.45f, 0.33f);
	glVertex2f(VALUE_FROM_PERSENT(0.092f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.015f , persent)+PS_yPosition);//s3
	glVertex2f(VALUE_FROM_PERSENT(0.127f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.018f , persent)+PS_yPosition);//o4
	glVertex2f(VALUE_FROM_PERSENT(0.078f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.003f , persent)+PS_yPosition);//r3
          glEnd();


	
	glBegin(GL_QUADS);
	glColor3f(0.71f, 0.42f, 0.3f);
	glVertex2f(VALUE_FROM_PERSENT(0.078f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.003f , persent)+PS_yPosition);//r3
	glVertex2f(VALUE_FROM_PERSENT(0.127f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.018f , persent)+PS_yPosition);//o4
	glVertex2f(VALUE_FROM_PERSENT(0.090f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.054f , persent)+PS_yPosition);//u4
	glVertex2f(VALUE_FROM_PERSENT(0.080f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.063f, persent)+PS_yPosition);//p4
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.74f, 0.45f, 0.32f);
	glVertex2f(VALUE_FROM_PERSENT(0.056f,persent)+PS_xPosition, VALUE_FROM_PERSENT(-0.010f , persent)+PS_yPosition);//q3
	glVertex2f(VALUE_FROM_PERSENT(0.078f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.003f , persent)+PS_yPosition);//r3
	glVertex2f(VALUE_FROM_PERSENT(0.080f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.063f, persent)+PS_yPosition);//p4
	glVertex2f(VALUE_FROM_PERSENT(0.038f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.129f, persent)+PS_yPosition);//q4
	glVertex2f(VALUE_FROM_PERSENT(0.04f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.1f, persent)+PS_yPosition);//r4
	glEnd();



	//from here we started the the nose 

	glBegin(GL_QUADS);
	glColor3f(0.13f, 0.09f, 0.1f);
	glVertex2f(VALUE_FROM_PERSENT(0.3f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.04f , persent)+PS_yPosition);//p5
	glVertex2f(VALUE_FROM_PERSENT(0.355f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.066f , persent)+PS_yPosition);//o5
	glVertex2f(VALUE_FROM_PERSENT(0.380f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.062f , persent)+PS_yPosition);//r5
	glVertex2f(VALUE_FROM_PERSENT(0.373f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.049f, persent)+PS_yPosition);//q5
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.72f, 0.35f, 0.28f);
	glVertex2f(VALUE_FROM_PERSENT(0.3f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.035f , persent)+PS_yPosition);//u2
	glVertex2f(VALUE_FROM_PERSENT(0.3f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.04f , persent)+PS_yPosition);//p5
	glVertex2f(VALUE_FROM_PERSENT(0.373f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.049f , persent)+PS_yPosition);//q5
	glVertex2f(VALUE_FROM_PERSENT(0.364f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.031f, persent)+PS_yPosition);//h2
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.87f, 0.44f, 0.29f);
	glVertex2f(VALUE_FROM_PERSENT(0.364f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.031f, persent)+PS_yPosition);//h2
	glVertex2f(VALUE_FROM_PERSENT(0.399f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.048f , persent)+PS_yPosition);//w7
	glVertex2f(VALUE_FROM_PERSENT(0.4f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.06f, persent)+PS_yPosition);//n5
	glVertex2f(VALUE_FROM_PERSENT(0.380f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.062f , persent)+PS_yPosition);//r5
	glVertex2f(VALUE_FROM_PERSENT(0.373f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.049f , persent)+PS_yPosition);//q5
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.88f, 0.49f, 0.35f);
	glVertex2f(VALUE_FROM_PERSENT(0.090f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.054f , persent)+PS_yPosition);//u4
	glVertex2f(VALUE_FROM_PERSENT(0.198f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.110f , persent)+PS_yPosition);//t4
	glVertex2f(VALUE_FROM_PERSENT(0.139f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.021f , persent)+PS_yPosition);//s4
	glVertex2f(VALUE_FROM_PERSENT(0.127f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.018f, persent)+PS_yPosition);//o4
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.61f, 0.33f, 0.24f);
	glVertex2f(VALUE_FROM_PERSENT(0.176f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.029f, persent)+PS_yPosition);//j4
	glVertex2f(VALUE_FROM_PERSENT(0.199f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.068f , persent)+PS_yPosition);//s5
	glVertex2f(VALUE_FROM_PERSENT(0.210f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.070f , persent)+PS_yPosition);//u5
	glVertex2f(VALUE_FROM_PERSENT(0.213f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.036f , persent)+PS_yPosition);//k4
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.61f, 0.33f, 0.24f);
	glVertex2f(VALUE_FROM_PERSENT(0.139f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.021f , persent)+PS_yPosition);//s4
	glVertex2f(VALUE_FROM_PERSENT(0.198f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.110f , persent)+PS_yPosition);//t4
	glVertex2f(VALUE_FROM_PERSENT(0.199f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.068f , persent)+PS_yPosition);//s5
	glVertex2f(VALUE_FROM_PERSENT(0.176f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.029f, persent)+PS_yPosition);//j4
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.36f, 0.2f, 0.16f);
	glVertex2f(VALUE_FROM_PERSENT(0.213f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.036f , persent)+PS_yPosition);//k4
	glVertex2f(VALUE_FROM_PERSENT(0.210f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.070f , persent)+PS_yPosition);//u5
	glVertex2f(VALUE_FROM_PERSENT(0.243f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.075f, persent)+PS_yPosition);//t5
	glVertex2f(VALUE_FROM_PERSENT(0.290f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.033f , persent)+PS_yPosition);//v5
	glVertex2f(VALUE_FROM_PERSENT(0.277f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.0377f , persent)+PS_yPosition);//z2
	glVertex2f(VALUE_FROM_PERSENT(0.228f,persent)+PS_xPosition, VALUE_FROM_PERSENT(0.035f, persent)+PS_yPosition);//l4

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