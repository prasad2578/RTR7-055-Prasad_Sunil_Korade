#include <GL/freeglut.h>

bool bIsFullScreen = false;
float xPosition;
float yPosition;
float width;
float height;


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

	glBegin(GL_QUADS);//E9,B9,C9,D9 MIDDLE SMALL MANDIR BACKGROUND 0.97, 0.69, 0

	glColor3f(1.0f, 0.79f, 0.05f);//YELLOW
          glVertex2f(0.368f+xPosition, 0.260f +yPosition);//U12
          glVertex2f(0.368f+xPosition, 0.53f+yPosition);//E5
          glVertex2f(0.678f+xPosition, 0.53f+yPosition);//V8
          glVertex2f(0.678f+xPosition, 0.260f+yPosition);//T12
          glEnd();

	glBegin(GL_QUADS);//C3,R12,I9,F9 background block for seventh middle stair

          glColor3f(0.5f, 0.17f, 0.11f);
          glVertex2f(0.38f+xPosition, 0.260f+yPosition);//C3
          glVertex2f(0.38f+xPosition, 0.288f+yPosition);//R12
          glVertex2f(0.668f+xPosition, 0.288f+yPosition);//I9
          glVertex2f(0.668f+xPosition, 0.260f+yPosition);//F9
	glEnd();

	glBegin(GL_QUADS);//C4,E5,F5,G3 MIDDLE SMALL MANDIR BACKGROUND RIGHT COMLUMN 

	glColor3f(0.03f, 0.58f, 0.62f);//BLUE
          glVertex2f(0.368f+xPosition, 0.308f+yPosition);//D4
          glVertex2f(0.368f+xPosition, 0.53f+yPosition);//E5
          glVertex2f(0.378f+xPosition, 0.53f+yPosition);//F5
          glVertex2f(0.378f+xPosition, 0.308f+yPosition);//G3
          glEnd();

	glBegin(GL_QUADS);//C4,E5,F5,G3 MIDDLE SMALL MANDIR BACKGROUND LEFT COLUMN

	glColor3f(0.03f, 0.58f, 0.62f);//BLUE
          glVertex2f(0.668f+xPosition, 0.308f+yPosition);//Z8
          glVertex2f(0.668f+xPosition, 0.53f+yPosition);//A9
          glVertex2f(0.678f+xPosition, 0.53f+yPosition);//V8
          glVertex2f(0.678f+xPosition, 0.308f+yPosition);//W8
          glEnd();
		
	glBegin(GL_QUADS);//HGJK mandir left side first payri 

          glColor3f(0.65f, 0.4f, 0.19f);
          glVertex2f(0.16f+xPosition, 0.155f+yPosition);//H
          glVertex2f(0.16f+xPosition, 0.2f+yPosition);//G
          glVertex2f(0.385f+xPosition, 0.2f+yPosition);//J
          glVertex2f(0.385f+xPosition, 0.155f+yPosition);//K
          
	glEnd();

	glBegin(GL_QUADS);//KJZL
	glColor3f(1.0f, 0.71f, 0.0f);
          glVertex2f(0.385f+xPosition, 0.155f+yPosition);//K
          glVertex2f(0.385f+xPosition, 0.2f+yPosition);//J
	glVertex2f(0.44f+xPosition, 0.2f+yPosition);//Z
          glVertex2f(0.44f+xPosition, 0.155f+yPosition);//L
          
	glEnd();


          glBegin(GL_QUADS);//POQR mindir right side first payri 
	
	glColor3f(0.65f, 0.4f, 0.19f);
          glVertex2f(0.655f+xPosition, 0.155f+yPosition);//P
          glVertex2f(0.655f+xPosition, 0.2f+yPosition);//O
          glVertex2f(0.8755f+xPosition, 0.2f+yPosition);//Q
          glVertex2f(0.875f+xPosition, 0.155f+yPosition);//R
          
	glEnd();

          glBegin(GL_QUADS);//MNOP mindir right side first payri 
	
	glColor3f(1.0f, 0.71f, 0.0f);
          glVertex2f(0.6f+xPosition, 0.155f+yPosition);//M
          glVertex2f(0.6f+xPosition, 0.2f+yPosition);//N
          glVertex2f(0.655f+xPosition, 0.2f+yPosition);//O
          glVertex2f(0.655f+xPosition, 0.155f+yPosition);//P
          
	glEnd();

	glBegin(GL_QUADS);//L,P12,Q12,M BOX IN BACKGROUND OF STAIRS FOR GIVING SHADOW TO THE STRAIRS 
	
	glColor3f(0.29f, 0.18f, 0.13f);
          glVertex2f(0.44f+xPosition, 0.155f+yPosition);//L
          glVertex2f(0.44f+xPosition, 0.266f+yPosition);//P12

	glColor3f(0.56f, 0.38f, 0.31f);
          glVertex2f(0.6f+xPosition, 0.266f+yPosition);//Q12
          glVertex2f(0.6f+xPosition, 0.155f+yPosition);//M
          
	glEnd();

	
	glBegin(GL_QUADS);//UVWZ LEFT PAYRI CHYA SHEJARCHA COLUMN 
	
	glColor3f(0.21f, 0.12f, 0.08f);//0.21, 0.12, 0.08 brown color 
          glVertex2f(0.41f+xPosition, 0.2f+yPosition);//U
          glVertex2f(0.43f+xPosition, 0.266f+yPosition);//V
          glVertex2f(0.46f+xPosition, 0.266f+yPosition);//W
          glVertex2f(0.44f+xPosition, 0.2f+yPosition);//Z
          glEnd();

	glBegin(GL_QUADS);//N,A1,B1,C1 RIGHT PAYRICHYA SHEJARCHA COLUMN
	
	glColor3f(0.21f, 0.12f, 0.08f);//0.21, 0.12, 0.08 brown color
          glVertex2f(0.6f+xPosition, 0.2f+yPosition);//N
          glVertex2f(0.574f+xPosition, 0.266f+yPosition);//A1
          glVertex2f(0.606f+xPosition, 0.266f+yPosition);//B1
          glVertex2f(0.632f+xPosition, 0.2f+yPosition);//C1
          glEnd();


          // from here we start middle stairs


	glBegin(GL_QUADS);//L,T1,U1,M middle first stair
	
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.44f+xPosition, 0.155f+yPosition);//L
          glVertex2f(0.44f+xPosition, 0.165f+yPosition);//T1
          glVertex2f(0.6f+xPosition, 0.165f+yPosition);//U1
          glVertex2f(0.6f+xPosition, 0.155f+yPosition);//M
          glEnd();

	glBegin(GL_QUADS);//L,T1,U1,M middle first stair
          
          glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.44f+xPosition, 0.155f+yPosition);//L
          glVertex2f(0.44f+xPosition, 0.165f+yPosition);//T1
          glVertex2f(0.6f+xPosition, 0.165f+yPosition);//U1
          glVertex2f(0.6f+xPosition, 0.155f+yPosition);//M
          glEnd();

	glBegin(GL_QUADS);//W1,V1,A2,Z1 middle SECOND stair
          
          glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.442f+xPosition, 0.17f+yPosition);//W1
          glVertex2f(0.442f+xPosition, 0.185f+yPosition);//V1
          glVertex2f(0.59f+xPosition, 0.185f+yPosition);//A2
          glVertex2f(0.59f+xPosition, 0.17f+yPosition);//Z1
          glEnd();

	glBegin(GL_QUADS);//C2,B2,D2,E2 middle THIRD stair
          
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.447f+xPosition, 0.192f+yPosition);//C2
          glVertex2f(0.447f+xPosition, 0.206f+yPosition);//B2
          glVertex2f(0.586f+xPosition, 0.206+yPosition);//D2
          glVertex2f(0.586f+xPosition, 0.192f+yPosition);//E2
          glEnd();

	glBegin(GL_QUADS);//I2,H2,F2,G2 middle FORTH stair
          
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.452f+xPosition, 0.212f+yPosition);//I2
          glVertex2f(0.452f+xPosition, 0.228f+yPosition);//H2
          glVertex2f(0.582f+xPosition, 0.228f+yPosition);//F2
          glVertex2f(0.582f+xPosition, 0.212f+yPosition);//G2
          glEnd();

	glBegin(GL_QUADS);//K2,J2,L2,M2 middle FIFTH stair
          
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.456f+xPosition, 0.234f+yPosition);//K2
          glVertex2f(0.456f+xPosition, 0.248f+yPosition);//J2
          glVertex2f(0.575f+xPosition, 0.248f+yPosition);//L2
          glVertex2f(0.575f+xPosition, 0.234f+yPosition);//M2
          glEnd();

	glBegin(GL_QUADS);//N2,W,A1,O2 middle SIXTH stair
          
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.46f+xPosition, 0.253f+yPosition);//N2
          glVertex2f(0.46f+xPosition, 0.266f+yPosition);//W
          glVertex2f(0.574f+xPosition, 0.266f+yPosition);//A1
          glVertex2f(0.574f+xPosition, 0.253f+yPosition);//O2
          glEnd();


	/*glBegin(GL_QUADS);//Q2,P2,R2,S2 middle SEVENTH stair
          
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.466f, 0.266f);//Q2
          glVertex2f(0.466f, 0.285f);//P2
          glVertex2f(0.568f, 0.285f);//R2
          glVertex2f(0.568f, 0.266f);//S2
          glEnd();*/


	// FROM HERE WE START THE LEFT SIDE STRAI FROM MIDDLE 

	glBegin(GL_QUADS);//stair1 S,T,G1,U
          
	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.19f+xPosition, 0.2f+yPosition);//S

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(0.19f+xPosition, 0.22f+yPosition);//T
          glVertex2f(0.415f+xPosition, 0.219f+yPosition);//G1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.41f+xPosition, 0.2f+yPosition);//U
          glEnd();

	glBegin(GL_QUADS);//stair2 I1,H1,J1,G1
          
          glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.209f+xPosition, 0.219f+yPosition);//I1

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(0.21f+xPosition, 0.24f+yPosition);//H1
          glVertex2f(0.422f+xPosition, 0.239f+yPosition);//J1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.415f+xPosition, 0.219f+yPosition);//G1
          glEnd();

	
	glBegin(GL_QUADS);//stair3 L1,K1,M1,J1
          
	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.225f+xPosition, 0.239f+yPosition);//L1

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(0.225f+xPosition, 0.26f+yPosition);//K1
          glVertex2f(0.428f+xPosition, 0.26f+yPosition);//M1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.422f+xPosition, 0.239f+yPosition);//J1
          glEnd();

	//FROM HERE WE START STAIR OF RIGHT SIDE OF THE MIDDLE 

          glBegin(GL_QUADS);//STAIR 1 C1,F1,D1,E1
          
	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.632f+xPosition, 0.2f+yPosition);//C1

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(0.624f+xPosition, 0.22f+yPosition);//F1
          glVertex2f(0.848f+xPosition, 0.22f+yPosition);//D1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.848f+xPosition, 0.2f+yPosition);//E1
          glEnd();

	
          glBegin(GL_QUADS);//STAIR 2 F1,P1,N1,O1
          
	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.624f+xPosition, 0.22f+yPosition);//F1

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(0.616f+xPosition, 0.24f+yPosition);//P1
          glVertex2f(0.83f+xPosition, 0.24f+yPosition);//N1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.830f+xPosition, 0.22f+yPosition);//O1
          glEnd();

          glBegin(GL_QUADS);//STAIR 3 P1,Q1,R1,S1
          
	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.616f+xPosition, 0.24f+yPosition);//P1

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(0.608f+xPosition, 0.260f+yPosition);//Q1
          glVertex2f(0.815f+xPosition, 0.26f+yPosition);//R1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(0.815f+xPosition, 0.24f+yPosition);//S1
          glEnd();

          /*glBegin(GL_TRIANGLES);//it was the last triangle 

	glColor3f(0.0f, 0.0f, 0.1f);
	glVertex2f(0.499f, 0.815f);
	glVertex2f(0.518f, 0.855f);
	glVertex2f(0.536f, 0.815f);
	glEnd();**/

	glBegin(GL_QUADS);//A3,Z2,B3,C3 LEFT SIDE SMALL MANDIR BASE 

	glColor3f(0.33f, 0.18f, 0.14f);
          glVertex2f(0.252f+xPosition, 0.260f+yPosition);//A3
          glVertex2f(0.252f+xPosition, 0.298f+yPosition);//Z2
          glVertex2f(0.38f+xPosition, 0.298f+yPosition);//B3
          glVertex2f(0.38f+xPosition, 0.260f+yPosition);//C3
          glEnd();

	
	glBegin(GL_QUADS);//F9,S12,G9,H9 RIGHT SIDE SMALL MANDIR BASE 

	glColor3f(0.33f, 0.18f, 0.14f);
          glVertex2f(0.668f+xPosition, 0.260f+yPosition);//F9
          glVertex2f(0.668f+xPosition, 0.298f+yPosition);//S12
          glVertex2f(0.785f+xPosition, 0.298f+yPosition);//V12
          glVertex2f(0.785f+xPosition, 0.260f+yPosition);//W12
          glEnd();


	glBegin(GL_QUADS);//u2,t2,w2,v2 left  SIDE SMALL MANDIR BASE upper box

	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.248f+xPosition, 0.298f+yPosition);//U2
          glVertex2f(0.248f+xPosition, 0.308f+yPosition);//T2
          glVertex2f(0.384f+xPosition, 0.308f+yPosition);//W2
          glVertex2f(0.384f+xPosition, 0.298f+yPosition);//V2
          glEnd();

	glBegin(GL_QUADS);//E9,B9,C9,D9 RIGHT  SIDE SMALL MANDIR BASE upper box

	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.66f+xPosition, 0.298f+yPosition);//E9
          glVertex2f(0.66f+xPosition, 0.308f+yPosition);//B9
          glVertex2f(0.79f+xPosition, 0.308f+yPosition);//C9
          glVertex2f(0.79f+xPosition, 0.298f+yPosition);//D9
          glEnd();

	glBegin(GL_QUADS);// W5,V5,E6,D6 middle mandir base 

	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(0.408f+xPosition, 0.288f+yPosition);//W5
          glVertex2f(0.408f+xPosition, 0.306f+yPosition);//V5
          glVertex2f(0.625f+xPosition, 0.306f+yPosition);//E6
          glVertex2f(0.625f+xPosition, 0.288f+yPosition);//D6
          glEnd();

	glBegin(GL_QUADS);// E3,D3,F3,G3 LEFT SIDE MANDIR BACKGROUND

          glColor3f(0.76f, 0.57f, 0.18f);
          glVertex2f(0.255f+xPosition, 0.308f+yPosition);//E3

          glColor3f(1.0f, 0.79f, 0.05f);//YELLOW 
          glVertex2f(0.255f+xPosition, 0.39f+yPosition);//D3
          glVertex2f(0.378f+xPosition, 0.39f+yPosition);//F3

          glColor3f(0.76f, 0.57f, 0.18f);
          glVertex2f(0.378f+xPosition, 0.308f+yPosition);//G3
          glEnd();

	glBegin(GL_QUADS);//Z8,Z12,L9,M9 RIGHT SIDE MANDIR BACKGROUND

	glColor3f(0.76f, 0.57f, 0.18f);
          glVertex2f(0.668f+xPosition, 0.308f+yPosition);//Z8

          glColor3f(1.0f, 0.79f, 0.05f);//YELLOW
          glVertex2f(0.668f+xPosition, 0.39f+yPosition);//Z12
          glVertex2f(0.78f+xPosition, 0.39f+yPosition);//L9

          glColor3f(0.76f, 0.57f, 0.18f);
          glVertex2f(0.78f+xPosition, 0.308f+yPosition);//M9
          glEnd();

          // from here  we star to build right side mandir
          // all things of right mandir is here 
           
	glBegin(GL_QUADS);//Z8,Z12,A13,W8 RIGHT SIDE MANDIR left side column 

	glColor3f(0.32f, 0.08f, 0.03f);
          glVertex2f(0.668f+xPosition, 0.308f+yPosition);//Z8
          glVertex2f(0.668f+xPosition, 0.39f+yPosition);//Z12
          glVertex2f(0.678f+xPosition, 0.39f+yPosition);//A13
          glVertex2f(0.678f+xPosition, 0.308f+yPosition);//W8
          glEnd();

	glBegin(GL_QUADS);//W8,A13,Z9,A10

	glColor3f(0.57f, 0.55f, 0.38f);
          glVertex2f(0.678f+xPosition, 0.308f+yPosition);//W8
          glVertex2f(0.678f+xPosition, 0.39f+yPosition);//A13
          glVertex2f(0.686f+xPosition, 0.39f+yPosition);//Z9
          glVertex2f(0.686f+xPosition, 0.308f+yPosition);//A10
          glEnd();

	
	glBegin(GL_QUADS);// RIGHT SIDE MANDIR RIGHT side column 

	glColor3f(0.57f, 0.55f, 0.38f);
          glVertex2f(0.766f+xPosition, 0.308f+yPosition);//E10
          glVertex2f(0.766f+xPosition, 0.39f+yPosition);//D10
          glVertex2f(0.772f+xPosition, 0.39f+yPosition);//B10
          glVertex2f(0.772f+xPosition, 0.308f+yPosition);//C10
          glEnd();

	glBegin(GL_QUADS);//C10,B10,L9,M9

	glColor3f(0.32f, 0.08f, 0.03f);
          glVertex2f(0.772f+xPosition, 0.308f+yPosition);//C10
          glVertex2f(0.772f+xPosition, 0.39f+yPosition);//B10
          glVertex2f(0.780f+xPosition, 0.39f+yPosition);//L9
          glVertex2f(0.780f+xPosition, 0.308f+yPosition);//M9
          glEnd();

         
          glBegin(GL_QUADS);//0.37, 0.34, 0.18 UPPER BOX J9,K9,O9,N9

	glColor3f(0.25f, 0.25f, 0.25f);
          glVertex2f(0.66f+xPosition, 0.39f+yPosition);//J9
          glVertex2f(0.66f+xPosition, 0.402f+yPosition);//K9
          glVertex2f(0.788f+xPosition, 0.402f+yPosition);//O9
          glVertex2f(0.788f+xPosition, 0.39f+yPosition);//N9
          glEnd();

          
          glBegin(GL_QUADS);//0.37, 0.34, 0.18 UPPER upper BOX P9,Q9,S9,R9
          
	glColor3f(0.07f, 0.04f, 0.0f);
          glVertex2f(0.65f+xPosition, 0.402f+yPosition);//P9
          glVertex2f(0.65f+xPosition, 0.414f+yPosition);//Q9
          glVertex2f(0.798f+xPosition, 0.414f+yPosition);//S9
          glVertex2f(0.798f+xPosition, 0.402f+yPosition);//R9
          glEnd();

          glBegin(GL_QUADS);//door BOX outer U11,W11,G12,T11
          
	glColor3f(0.51f, 0.26f, 0.19f);
          glVertex2f(0.697f+xPosition, 0.308f+yPosition);//U11
          glVertex2f(0.697f+xPosition, 0.372f+yPosition);//W11
          glVertex2f(0.754f+xPosition, 0.372f+yPosition);//G12
          glVertex2f(0.754f+xPosition, 0.308f+yPosition);//T11
          glEnd();

          
          glBegin(GL_QUADS);//door BOX inner V11,Z11,F12,R11
          
	glColor3f(0.25f, 0.05f, 0.0f);
          glVertex2f(0.701f+xPosition, 0.308f+yPosition);//V11
          glVertex2f(0.701f+xPosition, 0.366f+yPosition);//Z11
          glVertex2f(0.75f+xPosition, 0.366f+yPosition);//F12
          glVertex2f(0.75f+xPosition, 0.308f+yPosition);//R11
          glEnd();


           
          glBegin(GL_QUADS);//door upper H12,I12,K12,J12 
          
	glColor3f(0.6f, 0.5f, 0.44f);
          glVertex2f(0.692f+xPosition, 0.372f+yPosition);//H12
          glVertex2f(0.692f+xPosition, 0.376f+yPosition);//I12
          glVertex2f(0.758f+xPosition, 0.376f+yPosition);//K12
          glVertex2f(0.758f+xPosition, 0.372f+yPosition);//J12
          glEnd();

          glBegin(GL_QUADS);//door upper upper box I12,L12,M12,K12
          
	glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(0.692f+xPosition, 0.376f+yPosition);//I12

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(0.696f+xPosition, 0.378f+yPosition);//L12
          glVertex2f(0.754f+xPosition, 0.378f+yPosition);//M12
          
          glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(0.758f+xPosition, 0.376f+yPosition);//K12
          glEnd();

          //upper upper upper box of door 
          glBegin(GL_QUADS);//L12,N12,O12,M12
          
	glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(0.696f+xPosition, 0.378f+yPosition);//L12

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(0.696f+xPosition, 0.39f+yPosition);//N12
          glVertex2f(0.754f+xPosition, 0.39f+yPosition);//O12
          
          glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(0.754f+xPosition, 0.378f+yPosition);//M12
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
  /*float xPosition = 0.16f;
          float yPosition = 0.94f;
          float width = 0.72f;
          float height = 0.94f;*/
          