#include <GL/freeglut.h>

bool bIsFullScreen = false;
float AMC_xPosition;
float AMC_yPosition;
float PK_width;
float PK_height;
float percent = 100;


#define VALUE_FROM_PERCENT(complete_value,percent)(complete_value*percent/100)

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
	glutCreateWindow("MY GROUP PROJECT");

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

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERCENT(-1.0f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(1.0f,percent)+AMC_yPosition);//D
          glVertex2f(VALUE_FROM_PERCENT(-0.894f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(0.0545f, percent)+AMC_yPosition);//M
          glVertex2f(VALUE_FROM_PERCENT(-0.894f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(-0.118f, percent)+AMC_yPosition);//G
          glVertex2f(VALUE_FROM_PERCENT(-1.0f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(-1.0f, percent)+AMC_yPosition);//A
          glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERCENT(-0.894f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(0.0545f, percent)+AMC_yPosition);//M
          glVertex2f(VALUE_FROM_PERCENT(-0.8755f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(0.0545f, percent)+AMC_yPosition);//Z
          glVertex2f(VALUE_FROM_PERCENT(-0.894f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(-0.018f, percent)+AMC_yPosition);//W
          glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERCENT(-0.845f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(0.03f, percent)+AMC_yPosition);//J1
          glVertex2f(VALUE_FROM_PERCENT(-0.82f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(0.03f, percent)+AMC_yPosition);//K1
          glVertex2f(VALUE_FROM_PERCENT(-0.8076f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(-0.018f, percent)+AMC_yPosition);//L1
	glVertex2f(VALUE_FROM_PERCENT(-0.8076f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(-0.032f, percent)+AMC_yPosition);//H1
	glVertex2f(VALUE_FROM_PERCENT(-0.8572f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(-0.032f, percent)+AMC_yPosition);//G1
	glVertex2f(VALUE_FROM_PERCENT(-0.8572f, percent)+AMC_xPosition, VALUE_FROM_PERCENT(-0.018f, percent)+AMC_yPosition);//I1
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







/*float AMC_xPosition = 0.16f;
float AMC_yPosition = 0.94f;
float width = 0.72f;
float height = 0.94f;*/
