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
	// code p
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
          
          glBegin(GL_LINES);
          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(-0.9f, -0.5f); 
          glVertex2f(-0.9f, 0.5f);
          
          glVertex2f(-0.9f, 0.5f);
          glVertex2f(-0.65f, 0.5f);
          
          glVertex2f(-0.65f, 0.5f);
          glVertex2f(-0.65f, 0.0f);
          
          glVertex2f(-0.65f, 0.0f);
          glVertex2f(-0.9f, 0.0f);

          glEnd();

          //code R


          glBegin(GL_LINES);
          glColor3f(1.0f, 1.0f, 1.0f);

          glVertex2f(-0.55f, -0.5f); 
          glVertex2f(-0.55f, 0.5f);
          glVertex2f(-0.55f, 0.5f);  
          glVertex2f(-0.3f, 0.5f);
          glVertex2f(-0.3f, 0.5f);   
          glVertex2f(-0.3f, 0.0f);
          glVertex2f(-0.3f, 0.0f);  
          glVertex2f(-0.55f, 0.0f);
          glVertex2f(-0.55f, 0.0f);  
          glVertex2f(-0.3f, -0.5f);
          glEnd();

         // Letter A 1ST
         glBegin(GL_LINES);
          glColor3f(1.0f, 1.0f, 1.0f);

         glVertex2f(-0.2f, -0.5f);    
         glVertex2f(-0.075f, 0.5f);
         glVertex2f(-0.075f, 0.5f);   
         glVertex2f(0.05f, -0.5f);
         glVertex2f(-0.1375f, 0.0f);  
         glVertex2f(-0.0125f, 0.0f);
         glEnd();

// Letter S
         glBegin(GL_LINES);
          glColor3f(1.0f, 1.0f, 1.0f);

         glVertex2f(0.4f, 0.5f);   
         glVertex2f(0.15f, 0.5f);
         glVertex2f(0.15f, 0.5f);  
         glVertex2f(0.15f, 0.0f);
         glVertex2f(0.15f, 0.0f);  
         glVertex2f(0.4f, 0.0f);
         glVertex2f(0.4f, 0.0f);   
         glVertex2f(0.4f, -0.5f);
         glVertex2f(0.4f, -0.5f);  
         glVertex2f(0.15f, -0.5f);
         glEnd();

// Letter A 2ND
         glBegin(GL_LINES);
          glColor3f(1.0f, 1.0f, 1.0f);

         glVertex2f(0.5f, -0.5f);    
         glVertex2f(0.625f, 0.5f);
         glVertex2f(0.625f, 0.5f);   
         glVertex2f(0.75f, -0.5f);
         glVertex2f(0.5625f, 0.0f);  
         glVertex2f(0.6875f, 0.0f);
         glEnd();

// Letter D
         glBegin(GL_LINES);
         glColor3f(1.0f, 1.0f, 1.0f);

         glVertex2f(0.85f, -0.5f); 
         glVertex2f(0.85f, 0.5f);
         glVertex2f(0.85f, 0.5f); 
          glVertex2f(0.98f, 0.3f);
         glVertex2f(0.98f, 0.3f); 
          glVertex2f(0.98f, -0.3f);
         glVertex2f(0.98f, -0.3f); 
         glVertex2f(0.85f, -0.5f);
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