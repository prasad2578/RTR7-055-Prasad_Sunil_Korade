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
	
// Set shape color to BLACK
glColor3f(1.0f, 1.0f, 1.0f);

glBegin(GL_TRIANGLES);

// ================= LETTER P =================
// Vertical stem
glVertex2f(-0.90f, -0.5f); glVertex2f(-0.82f, -0.5f); glVertex2f(-0.82f,  0.5f);
glVertex2f(-0.90f, -0.5f); glVertex2f(-0.82f,  0.5f); glVertex2f(-0.90f,  0.5f);
// Top horizontal bar
glVertex2f(-0.82f,  0.42f); glVertex2f(-0.65f,  0.42f); glVertex2f(-0.65f,  0.5f);
glVertex2f(-0.82f,  0.42f); glVertex2f(-0.65f,  0.5f);  glVertex2f(-0.82f,  0.5f);
// Middle horizontal bar
glVertex2f(-0.82f,  0.0f);  glVertex2f(-0.65f,  0.0f);  glVertex2f(-0.65f,  0.08f);
glVertex2f(-0.82f,  0.0f);  glVertex2f(-0.65f,  0.08f); glVertex2f(-0.82f,  0.08f);
// Right vertical closure
glVertex2f(-0.73f,  0.08f); glVertex2f(-0.65f,  0.08f); glVertex2f(-0.65f,  0.42f);
glVertex2f(-0.73f,  0.08f); glVertex2f(-0.65f,  0.42f); glVertex2f(-0.73f,  0.42f);

// ================= LETTER R =================
// Vertical stem
glVertex2f(-0.55f, -0.5f); glVertex2f(-0.47f, -0.5f); glVertex2f(-0.47f,  0.5f);
glVertex2f(-0.55f, -0.5f); glVertex2f(-0.47f,  0.5f); glVertex2f(-0.55f,  0.5f);
// Top horizontal bar
glVertex2f(-0.47f,  0.42f); glVertex2f(-0.30f,  0.42f); glVertex2f(-0.30f,  0.5f);
glVertex2f(-0.47f,  0.42f); glVertex2f(-0.30f,  0.5f);  glVertex2f(-0.47f,  0.5f);
// Middle horizontal bar
glVertex2f(-0.47f,  0.0f);  glVertex2f(-0.30f,  0.0f);  glVertex2f(-0.30f,  0.08f);
glVertex2f(-0.47f,  0.0f);  glVertex2f(-0.30f,  0.08f); glVertex2f(-0.47f,  0.08f);
// Right upper vertical closure
glVertex2f(-0.38f,  0.08f); glVertex2f(-0.30f,  0.08f); glVertex2f(-0.30f,  0.42f);
glVertex2f(-0.38f,  0.08f); glVertex2f(-0.30f,  0.42f); glVertex2f(-0.38f,  0.42f);
// Diagonal leg
glVertex2f(-0.47f,  0.0f);  glVertex2f(-0.38f,  0.0f);  glVertex2f(-0.30f, -0.5f);
glVertex2f(-0.47f,  0.0f);  glVertex2f(-0.30f, -0.5f); glVertex2f(-0.39f, -0.5f);

// ================= LETTER A (First) =================
// Left leg
glVertex2f(-0.20f, -0.5f); glVertex2f(-0.12f, -0.5f); glVertex2f(-0.035f, 0.5f);
glVertex2f(-0.20f, -0.5f); glVertex2f(-0.035f, 0.5f); glVertex2f(-0.115f, 0.5f);
// Right leg
glVertex2f(-0.035f, 0.5f); glVertex2f(0.045f,  0.5f); glVertex2f(0.05f,  -0.5f);
glVertex2f(-0.035f, 0.5f); glVertex2f(0.05f,  -0.5f); glVertex2f(-0.03f, -0.5f);
// Middle crossbar
glVertex2f(-0.12f, -0.04f); glVertex2f(0.0f,  -0.04f); glVertex2f(0.0f,   0.04f);
glVertex2f(-0.12f, -0.04f); glVertex2f(0.0f,   0.04f); glVertex2f(-0.12f,  0.04f);

// ================= LETTER S =================
// Top bar
glVertex2f(0.15f,  0.42f); glVertex2f(0.40f,  0.42f); glVertex2f(0.40f,  0.5f);
glVertex2f(0.15f,  0.42f); glVertex2f(0.40f,  0.5f);  glVertex2f(0.15f,  0.5f);
// Top-left vertical
glVertex2f(0.15f,  0.0f);  glVertex2f(0.23f,  0.0f);  glVertex2f(0.23f,  0.42f);
glVertex2f(0.15f,  0.0f);  glVertex2f(0.23f,  0.42f); glVertex2f(0.15f,  0.42f);
// Middle bar
glVertex2f(0.15f,  0.0f);  glVertex2f(0.40f,  0.0f);  glVertex2f(0.40f,  0.08f);
glVertex2f(0.15f,  0.0f);  glVertex2f(0.40f,  0.08f); glVertex2f(0.15f,  0.08f);
// Bottom-right vertical
glVertex2f(0.32f, -0.42f); glVertex2f(0.40f, -0.42f); glVertex2f(0.40f,  0.0f);
glVertex2f(0.32f, -0.42f); glVertex2f(0.40f,  0.0f);  glVertex2f(0.32f,  0.0f);
// Bottom bar
glVertex2f(0.15f, -0.5f);  glVertex2f(0.40f, -0.5f);  glVertex2f(0.40f, -0.42f);
glVertex2f(0.15f, -0.5f);  glVertex2f(0.40f, -0.42f); glVertex2f(0.15f, -0.42f);

// ================= LETTER A (Second) =================
// Left leg
glVertex2f(0.50f, -0.5f);  glVertex2f(0.58f, -0.5f);  glVertex2f(0.665f, 0.5f);
glVertex2f(0.50f, -0.5f);  glVertex2f(0.665f, 0.5f);  glVertex2f(0.585f, 0.5f);
// Right leg
glVertex2f(0.665f, 0.5f);  glVertex2f(0.745f, 0.5f);  glVertex2f(0.75f, -0.5f);
glVertex2f(0.665f, 0.5f);  glVertex2f(0.75f, -0.5f);  glVertex2f(0.67f, -0.5f);
// Middle crossbar
glVertex2f(0.58f, -0.04f); glVertex2f(0.70f, -0.04f); glVertex2f(0.70f,  0.04f);
glVertex2f(0.58f, -0.04f); glVertex2f(0.70f,  0.04f); glVertex2f(0.58f,  0.04f);

// ================= LETTER D =================
// Vertical stem
glVertex2f(0.85f, -0.5f); glVertex2f(0.92f, -0.5f); glVertex2f(0.92f,  0.5f);
glVertex2f(0.85f, -0.5f); glVertex2f(0.92f,  0.5f); glVertex2f(0.85f,  0.5f);
// Top slant
glVertex2f(0.92f,  0.42f); glVertex2f(0.98f,  0.22f); glVertex2f(0.98f,  0.3f);
glVertex2f(0.92f,  0.42f); glVertex2f(0.98f,  0.3f);  glVertex2f(0.92f,  0.5f);
// Right vertical side
glVertex2f(0.91f, -0.22f); glVertex2f(0.98f, -0.22f); glVertex2f(0.98f,  0.22f);
glVertex2f(0.91f, -0.22f); glVertex2f(0.98f,  0.22f); glVertex2f(0.91f,  0.22f);
// Bottom slant
glVertex2f(0.92f, -0.5f);  glVertex2f(0.98f, -0.3f);  glVertex2f(0.98f, -0.22f);
glVertex2f(0.92f, -0.5f);  glVertex2f(0.98f, -0.22f); glVertex2f(0.92f, -0.42f);

glEnd();
glFlush();
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