#include <GL/freeglut.h>

bool bIsFullScreen = false;
float PK_xPosition;
float PK_yPosition;
float PK_width;
float PK_height;
float percent = 100;


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

	glBegin(GL_QUADS);//E9,B9,C9,D9 MIDDLE SMALL MANDIR BACKGROUND 0.97, 0.69, 0

	glColor3f(1.0f, 0.79f, 0.05f);//YELLOW
          glVertex2f(VALUE_FROM_PERSENT(0.368f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.260f,percent)+PK_yPosition);//U12
          glVertex2f(VALUE_FROM_PERSENT(0.368f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.53f, percent)+PK_yPosition);//E5
          glVertex2f(VALUE_FROM_PERSENT(0.678f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.53f, percent)+PK_yPosition);//V8
          glVertex2f(VALUE_FROM_PERSENT(0.678f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.260f, percent)+PK_yPosition);//T12
          glEnd();

	glBegin(GL_QUADS);//C3,R12,I9,F9 background block for seventh middle stair

          glColor3f(0.5f, 0.17f, 0.11f);
          glVertex2f(VALUE_FROM_PERSENT(0.38f, percent)+PK_xPosition, VALUE_FROM_PERSENT( 0.260f, percent)+PK_yPosition);//C3
          glVertex2f(VALUE_FROM_PERSENT(0.38f, percent)+PK_xPosition, VALUE_FROM_PERSENT( 0.288f, percent)+PK_yPosition);//R12
          glVertex2f(VALUE_FROM_PERSENT(0.668f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.288f, percent)+PK_yPosition);//I9
          glVertex2f(VALUE_FROM_PERSENT(0.668f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.260f, percent)+PK_yPosition);//F9
	glEnd();

	glBegin(GL_QUADS);//C4,E5,F5,G3 MIDDLE SMALL MANDIR BACKGROUND RIGHT COMLUMN 

	glColor3f(0.03f, 0.58f, 0.62f);//BLUE
          glVertex2f(VALUE_FROM_PERSENT(0.368f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.308f,percent)+PK_yPosition);//D4
          glVertex2f(VALUE_FROM_PERSENT(0.368f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.53f,percent)+PK_yPosition);//E5
          glVertex2f(VALUE_FROM_PERSENT(0.378f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.53f,percent)+PK_yPosition);//F5
          glVertex2f(VALUE_FROM_PERSENT(0.378f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.308f,percent)+PK_yPosition);//G3
          glEnd();

	glBegin(GL_QUADS);//C4,E5,F5,G3 MIDDLE SMALL MANDIR BACKGROUND LEFT COLUMN

	glColor3f(0.03f, 0.58f, 0.62f);//BLUE
          glVertex2f(VALUE_FROM_PERSENT(0.668f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.308f,percent)+PK_yPosition);//Z8
          glVertex2f(VALUE_FROM_PERSENT(0.668f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.53f,percent)+PK_yPosition);//A9
          glVertex2f(VALUE_FROM_PERSENT(0.678f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.53f,percent)+PK_yPosition);//V8
          glVertex2f(VALUE_FROM_PERSENT(0.678f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.308f,percent)+PK_yPosition);//W8
          glEnd();
		
	glBegin(GL_QUADS);//HGJK mandir left side first payri 

          glColor3f(0.65f, 0.4f, 0.19f);
          glVertex2f(VALUE_FROM_PERSENT(0.16f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.155f,percent)+PK_yPosition);//H
          glVertex2f(VALUE_FROM_PERSENT(0.16f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.2f,percent)+PK_yPosition);//G
          glVertex2f(VALUE_FROM_PERSENT(0.385f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.2f,percent)+PK_yPosition);//J
          glVertex2f(VALUE_FROM_PERSENT(0.385f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.155f,percent)+PK_yPosition);//K
          
	glEnd();

	glBegin(GL_QUADS);//KJZL
	glColor3f(1.0f, 0.71f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.385f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.155f,percent)+PK_yPosition);//K
          glVertex2f(VALUE_FROM_PERSENT(0.385f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.2f,percent)+PK_yPosition);//J
	  glVertex2f(VALUE_FROM_PERSENT(0.44f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.2f,percent)+PK_yPosition);//Z
          glVertex2f(VALUE_FROM_PERSENT(0.44f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.155f,percent)+PK_yPosition);//L
          
	glEnd();


          glBegin(GL_QUADS);//POQR mindir right side first payri 
	
	glColor3f(0.65f, 0.4f, 0.19f);
          glVertex2f(VALUE_FROM_PERSENT(0.655f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.155f,percent)+PK_yPosition);//P
          glVertex2f(VALUE_FROM_PERSENT(0.655f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.2f,percent)+PK_yPosition);//O
          glVertex2f(VALUE_FROM_PERSENT(0.875f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.2f,percent)+PK_yPosition);//Q
          glVertex2f(VALUE_FROM_PERSENT(0.875f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.155f,percent)+PK_yPosition);//R
          
	glEnd();

          glBegin(GL_QUADS);//MNOP mindir right side first payri 
	
	glColor3f(1.0f, 0.71f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.6f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.155f,percent)+PK_yPosition);//M
          glVertex2f(VALUE_FROM_PERSENT(0.6f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.2f,percent)+PK_yPosition);//N
          glVertex2f(VALUE_FROM_PERSENT(0.655f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.2f,percent)+PK_yPosition);//O
          glVertex2f(VALUE_FROM_PERSENT(0.655f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.155f,percent)+PK_yPosition);//P
          
	glEnd();

	glBegin(GL_QUADS);//L,P12,Q12,M BOX IN BACKGROUND OF STAIRS FOR GIVING SHADOW TO THE STRAIRS 
	
	glColor3f(0.29f, 0.18f, 0.13f);
          glVertex2f(VALUE_FROM_PERSENT(0.44f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.155f,percent)+PK_yPosition);//L
          glVertex2f(VALUE_FROM_PERSENT(0.44f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.266f,percent)+PK_yPosition);//P12

	glColor3f(0.56f, 0.38f, 0.31f);
          glVertex2f(VALUE_FROM_PERSENT(0.6f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.266f,percent)+PK_yPosition);//Q12
          glVertex2f(VALUE_FROM_PERSENT(0.6f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.155f,percent)+PK_yPosition);//M
          
	glEnd();

	
	glBegin(GL_QUADS);//UVWZ LEFT PAYRI CHYA SHEJARCHA COLUMN 
	
	glColor3f(0.21f, 0.12f, 0.08f);//0.21, 0.12, 0.08 brown color 
          glVertex2f(VALUE_FROM_PERSENT(0.41f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.2f,percent)+PK_yPosition);//U
          glVertex2f(VALUE_FROM_PERSENT(0.43f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.266f,percent)+PK_yPosition);//V
          glVertex2f(VALUE_FROM_PERSENT(0.46f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.266f,percent)+PK_yPosition);//W
          glVertex2f(VALUE_FROM_PERSENT(0.44f, percent)+PK_xPosition, VALUE_FROM_PERSENT(0.2f,percent)+PK_yPosition);//Z
          glEnd();

	glBegin(GL_QUADS);//N,A1,B1,C1 RIGHT PAYRICHYA SHEJARCHA COLUMN
	
	glColor3f(0.21f, 0.12f, 0.08f);//0.21, 0.12, 0.08 brown color
          glVertex2f(VALUE_FROM_PERSENT(0.6f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.2f,percent)+PK_yPosition);//N
          glVertex2f(VALUE_FROM_PERSENT(0.574f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.266f,percent)+PK_yPosition);//A1
          glVertex2f(VALUE_FROM_PERSENT(0.606f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.266f,percent)+PK_yPosition);//B1
          glVertex2f(VALUE_FROM_PERSENT(0.632f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.2f,percent)+PK_yPosition);//C1
          glEnd();


          // from here we start middle stairs


	glBegin(GL_QUADS);//L,T1,U1,M middle first stair
	
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(VALUE_FROM_PERSENT(0.44f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.155f,percent)+PK_yPosition);//L
          glVertex2f(VALUE_FROM_PERSENT(0.44f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.165f,percent)+PK_yPosition);//T1
          glVertex2f(VALUE_FROM_PERSENT(0.6f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.165f,percent)+PK_yPosition);//U1
          glVertex2f(VALUE_FROM_PERSENT(0.6f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.155f,percent)+PK_yPosition);//M
          glEnd();

	glBegin(GL_QUADS);//L,T1,U1,M middle first stair
          
          glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(VALUE_FROM_PERSENT(0.44f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.155f,percent)+PK_yPosition);//L
          glVertex2f(VALUE_FROM_PERSENT(0.44f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.165f,percent)+PK_yPosition);//T1
          glVertex2f(VALUE_FROM_PERSENT(0.6f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.165f,percent)+PK_yPosition);//U1
          glVertex2f(VALUE_FROM_PERSENT(0.6f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.155f,percent)+PK_yPosition);//M
          glEnd();

	glBegin(GL_QUADS);//W1,V1,A2,Z1 middle SECOND stair
          
          glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(VALUE_FROM_PERSENT(0.442f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.17f,percent)+PK_yPosition);//W1
          glVertex2f(VALUE_FROM_PERSENT(0.442f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.185f,percent)+PK_yPosition);//V1
          glVertex2f(VALUE_FROM_PERSENT(0.59f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.185f,percent)+PK_yPosition);//A2
          glVertex2f(VALUE_FROM_PERSENT(0.59f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.17f,percent)+PK_yPosition);//Z1
          glEnd();

	glBegin(GL_QUADS);//C2,B2,D2,E2 middle THIRD stair
          
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(VALUE_FROM_PERSENT(0.447f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.192f,percent)+PK_yPosition);//C2
          glVertex2f(VALUE_FROM_PERSENT(0.447f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.206f,percent)+PK_yPosition);//B2
          glVertex2f(VALUE_FROM_PERSENT(0.586f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.206,percent)+PK_yPosition);//D2
          glVertex2f(VALUE_FROM_PERSENT(0.586f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.192f,percent)+PK_yPosition);//E2
          glEnd();

	glBegin(GL_QUADS);//I2,H2,F2,G2 middle FORTH stair
          
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(VALUE_FROM_PERSENT(0.452f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.212f,percent)+PK_yPosition);//I2
          glVertex2f(VALUE_FROM_PERSENT(0.452f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.228f,percent)+PK_yPosition);//H2
          glVertex2f(VALUE_FROM_PERSENT(0.582f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.228f,percent)+PK_yPosition);//F2
          glVertex2f(VALUE_FROM_PERSENT(0.582f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.212f,percent)+PK_yPosition);//G2
          glEnd();

	glBegin(GL_QUADS);//K2,J2,L2,M2 middle FIFTH stair
          
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(VALUE_FROM_PERSENT(0.456f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.234f,percent)+PK_yPosition);//K2
          glVertex2f(VALUE_FROM_PERSENT(0.456f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.248f,percent)+PK_yPosition);//J2
          glVertex2f(VALUE_FROM_PERSENT(0.575f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.248f,percent)+PK_yPosition);//L2
          glVertex2f(VALUE_FROM_PERSENT(0.575f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.234f,percent)+PK_yPosition);//M2
          glEnd();

	glBegin(GL_QUADS);//N2,W,A1,O2 middle SIXTH stair
          
	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(VALUE_FROM_PERSENT(0.46f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.253f,percent)+PK_yPosition);//N2
          glVertex2f(VALUE_FROM_PERSENT(0.46f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.266f,percent)+PK_yPosition);//W
          glVertex2f(VALUE_FROM_PERSENT(0.574, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.266f,percent)+PK_yPosition);//A1
          glVertex2f(VALUE_FROM_PERSENT(0.574f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.253f,percent)+PK_yPosition);//O2
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
          glVertex2f(VALUE_FROM_PERSENT(0.19f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.2f,percent)+PK_yPosition);//S

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(VALUE_FROM_PERSENT(0.19f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.22f,percent)+PK_yPosition);//T
          glVertex2f(VALUE_FROM_PERSENT(0.415f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.219f,percent)+PK_yPosition);//G1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.41f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.2f,percent)+PK_yPosition);//U
          glEnd();

	glBegin(GL_QUADS);//stair2 I1,H1,J1,G1
          
          glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.209f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.219f,percent)+PK_yPosition);//I1

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(VALUE_FROM_PERSENT(0.21f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.24f,percent)+PK_yPosition);//H1
          glVertex2f(VALUE_FROM_PERSENT(0.422f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.239f,percent)+PK_yPosition);//J1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.415f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.219f,percent)+PK_yPosition);//G1
          glEnd();

	
	glBegin(GL_QUADS);//stair3 L1,K1,M1,J1
          
	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.225f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.239f,percent)+PK_yPosition);//L1

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(VALUE_FROM_PERSENT(0.225f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.26f,percent)+PK_yPosition);//K1
          glVertex2f(VALUE_FROM_PERSENT(0.428f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.26f,percent)+PK_yPosition);//M1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.422f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.239f,percent)+PK_yPosition);//J1
          glEnd();

	//FROM HERE WE START STAIR OF RIGHT SIDE OF THE MIDDLE 

          glBegin(GL_QUADS);//STAIR 1 C1,F1,D1,E1
          
	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.632f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.2f,percent)+PK_yPosition);//C1

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(VALUE_FROM_PERSENT(0.624f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.22f,percent)+PK_yPosition);//F1
          glVertex2f(VALUE_FROM_PERSENT(0.848f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.22f,percent)+PK_yPosition);//D1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.848f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.2f,percent)+PK_yPosition);//E1
          glEnd();

	
          glBegin(GL_QUADS);//STAIR 2 F1,P1,N1,O1
          
	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.624f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.22f,percent)+PK_yPosition);//F1

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(VALUE_FROM_PERSENT(0.616f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.24f,percent)+PK_yPosition);//P1
          glVertex2f(VALUE_FROM_PERSENT(0.83f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.24f,percent)+PK_yPosition);//N1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.830f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.22f,percent)+PK_yPosition);//O1
          glEnd();

          glBegin(GL_QUADS);//STAIR 3 P1,Q1,R1,S1
          
	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.616f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.24f,percent)+PK_yPosition);//P1

	glColor3f(0.98f, 0.65f, 0.06f);
          glVertex2f(VALUE_FROM_PERSENT(0.608f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.260f,percent)+PK_yPosition);//Q1
          glVertex2f(VALUE_FROM_PERSENT(0.815f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.26f,percent)+PK_yPosition);//R1

	glColor3f(0.64f, 0.41f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.815f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.24f,percent)+PK_yPosition);//S1
          glEnd();

        
	glBegin(GL_QUADS);//A3,Z2,B3,C3 LEFT SIDE SMALL MANDIR BASE 

	glColor3f(0.33f, 0.18f, 0.14f);
          glVertex2f(VALUE_FROM_PERSENT(0.252f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.260f,percent)+PK_yPosition);//A3
          glVertex2f(VALUE_FROM_PERSENT(0.252f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.298f,percent)+PK_yPosition);//Z2
          glVertex2f(VALUE_FROM_PERSENT(0.38f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.298f,percent)+PK_yPosition);//B3
          glVertex2f(VALUE_FROM_PERSENT(0.38f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.260f,percent)+PK_yPosition);//C3
          glEnd();

	
	glBegin(GL_QUADS);//F9,S12,G9,H9 RIGHT SIDE SMALL MANDIR BASE 

	glColor3f(0.33f, 0.18f, 0.14f);
          glVertex2f(VALUE_FROM_PERSENT(0.668f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.260f,percent)+PK_yPosition);//F9
          glVertex2f(VALUE_FROM_PERSENT(0.668f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.298f,percent)+PK_yPosition);//S12
          glVertex2f(VALUE_FROM_PERSENT(0.785f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.298f,percent)+PK_yPosition);//V12
          glVertex2f(VALUE_FROM_PERSENT(0.785f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.260f,percent)+PK_yPosition);//W12
          glEnd();


	glBegin(GL_QUADS);//u2,t2,w2,v2 left  SIDE SMALL MANDIR BASE upper box

	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(VALUE_FROM_PERSENT(0.248f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.298f,percent)+PK_yPosition);//U2
          glVertex2f(VALUE_FROM_PERSENT(0.248f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//T2
          glVertex2f(VALUE_FROM_PERSENT(0.384f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//W2
          glVertex2f(VALUE_FROM_PERSENT(0.384f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.298f,percent)+PK_yPosition);//V2
          glEnd();

	glBegin(GL_QUADS);//E9,B9,C9,D9 RIGHT  SIDE SMALL MANDIR BASE upper box

	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(VALUE_FROM_PERSENT(0.66f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.298f,percent)+PK_yPosition);//E9
          glVertex2f(VALUE_FROM_PERSENT(0.66f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//B9
          glVertex2f(VALUE_FROM_PERSENT(0.79f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//C9
          glVertex2f(VALUE_FROM_PERSENT(0.79f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.298f,percent)+PK_yPosition);//D9
          glEnd();

	glBegin(GL_QUADS);// W5,V5,E6,D6 middle mandir base 

	glColor3f(0.91f, 0.67f, 0.41f);
          glVertex2f(VALUE_FROM_PERSENT(0.408f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.288f,percent)+PK_yPosition);//W5
          glVertex2f(VALUE_FROM_PERSENT(0.408f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//V5
          glVertex2f(VALUE_FROM_PERSENT(0.625f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//E6
          glVertex2f(VALUE_FROM_PERSENT(0.625f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.288f,percent)+PK_yPosition);//D6
          glEnd();

	glBegin(GL_QUADS);// E3,D3,F3,G3 LEFT SIDE MANDIR BACKGROUND

          glColor3f(0.76f, 0.57f, 0.18f);
          glVertex2f(VALUE_FROM_PERSENT(0.255f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//E3

          glColor3f(1.0f, 0.79f, 0.05f);//YELLOW 
          glVertex2f(VALUE_FROM_PERSENT(0.255f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//D3
          glVertex2f(VALUE_FROM_PERSENT(0.378f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//F3

          glColor3f(0.76f, 0.57f, 0.18f);
          glVertex2f(VALUE_FROM_PERSENT(0.378f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//G3
          glEnd();

	        glBegin(GL_QUADS);//Z8,Z12,L9,M9 RIGHT SIDE MANDIR BACKGROUND

glColor3f(0.76f, 0.57f, 0.18f);
          glVertex2f(VALUE_FROM_PERSENT(0.668f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//Z8

          glColor3f(1.0f, 0.79f, 0.05f);//YELLOW
          glVertex2f(VALUE_FROM_PERSENT(0.668f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//Z12
          glVertex2f(VALUE_FROM_PERSENT(0.78f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//L9

          glColor3f(0.76f, 0.57f, 0.18f);
          glVertex2f(VALUE_FROM_PERSENT(0.78f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//M9
          glEnd();

          // from here  we star to build right side mandir
          // all things of right mandir is here 
           
	glBegin(GL_QUADS);//Z8,Z12,A13,W8 RIGHT SIDE MANDIR left side column 

	glColor3f(0.32f, 0.08f, 0.03f);
          glVertex2f(VALUE_FROM_PERSENT(0.668f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//Z8
          glVertex2f(VALUE_FROM_PERSENT(0.668f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//Z12
          glVertex2f(VALUE_FROM_PERSENT(0.678f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//A13
          glVertex2f(VALUE_FROM_PERSENT(0.678f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//W8
          glEnd();

	glBegin(GL_QUADS);//W8,A13,Z9,A10

	glColor3f(0.57f, 0.55f, 0.38f);
          glVertex2f(VALUE_FROM_PERSENT(0.678f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//W8
          glVertex2f(VALUE_FROM_PERSENT(0.678f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//A13
          glVertex2f(VALUE_FROM_PERSENT(0.686f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//Z9
          glVertex2f(VALUE_FROM_PERSENT(0.686f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//A10
          glEnd();

	
	glBegin(GL_QUADS);// RIGHT SIDE MANDIR RIGHT side column 

	glColor3f(0.57f, 0.55f, 0.38f);
          glVertex2f(VALUE_FROM_PERSENT(0.766f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//E10
          glVertex2f(VALUE_FROM_PERSENT(0.766f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//D10
          glVertex2f(VALUE_FROM_PERSENT(0.772f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//B10
          glVertex2f(VALUE_FROM_PERSENT(0.772f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//C10
          glEnd();

	glBegin(GL_QUADS);//C10,B10,L9,M9

	glColor3f(0.32f, 0.08f, 0.03f);
          glVertex2f(VALUE_FROM_PERSENT(0.772f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//C10
          glVertex2f(VALUE_FROM_PERSENT(0.772f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//B10
          glVertex2f(VALUE_FROM_PERSENT(0.780f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//L9
          glVertex2f(VALUE_FROM_PERSENT(0.780f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//M9
          glEnd();

         
          glBegin(GL_QUADS);//0.37, 0.34, 0.18 UPPER BOX J9,K9,O9,N9

	glColor3f(0.25f, 0.25f, 0.25f);
          glVertex2f(VALUE_FROM_PERSENT(0.66f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//J9
          glVertex2f(VALUE_FROM_PERSENT(0.66f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.402f,percent)+PK_yPosition);//K9
          glVertex2f(VALUE_FROM_PERSENT(0.788f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.402f,percent)+PK_yPosition);//O9
          glVertex2f(VALUE_FROM_PERSENT(0.788f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//N9
          glEnd();

          
          glBegin(GL_QUADS);//0.37, 0.34, 0.18 UPPER upper BOX P9,Q9,S9,R9
          
	glColor3f(0.07f, 0.04f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.65f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.402f,percent)+PK_yPosition);//P9
          glVertex2f(VALUE_FROM_PERSENT(0.65f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.414f,percent)+PK_yPosition);//Q9
          glVertex2f(VALUE_FROM_PERSENT(0.798f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.414f,percent)+PK_yPosition);//S9
          glVertex2f(VALUE_FROM_PERSENT(0.798f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.402f,percent)+PK_yPosition);//R9
          glEnd();

          glBegin(GL_QUADS);//door BOX outer U11,W11,G12,T11
          
	glColor3f(0.51f, 0.26f, 0.19f);
          glVertex2f(VALUE_FROM_PERSENT(0.697f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//U11
          glVertex2f(VALUE_FROM_PERSENT(0.697f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.372f,percent)+PK_yPosition);//W11
          glVertex2f(VALUE_FROM_PERSENT(0.754f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.372f,percent)+PK_yPosition);//G12
          glVertex2f(VALUE_FROM_PERSENT(0.754f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//T11
          glEnd();

          
          glBegin(GL_QUADS);//door BOX inner V11,Z11,F12,R11
          
	glColor3f(0.25f, 0.05f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.701f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//V11
          glVertex2f(VALUE_FROM_PERSENT(0.701f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.366f,percent)+PK_yPosition);//Z11
          glVertex2f(VALUE_FROM_PERSENT(0.75f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.366f,percent)+PK_yPosition);//F12
          glVertex2f(VALUE_FROM_PERSENT(0.75f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//R11
          glEnd();


           
          glBegin(GL_QUADS);//door upper H12,I12,K12,J12 
          
	glColor3f(0.6f, 0.5f, 0.44f);
          glVertex2f(VALUE_FROM_PERSENT(0.692f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.372f,percent)+PK_yPosition);//H12
          glVertex2f(VALUE_FROM_PERSENT(0.692f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.376f,percent)+PK_yPosition);//I12
          glVertex2f(VALUE_FROM_PERSENT(0.758f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.376f,percent)+PK_yPosition);//K12
          glVertex2f(VALUE_FROM_PERSENT(0.758f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.372f,percent)+PK_yPosition);//J12
          glEnd();

          glBegin(GL_QUADS);//door upper upper box I12,L12,M12,K12
          
	glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.692f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.376f,percent)+PK_yPosition);//I12

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.696f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.378f,percent)+PK_yPosition);//L12
          glVertex2f(VALUE_FROM_PERSENT(0.754f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.378f,percent)+PK_yPosition);//M12
          
          glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.758f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.376f,percent)+PK_yPosition);//K12
          glEnd();

          //upper upper upper box of door 
          glBegin(GL_QUADS);//L12,N12,O12,M12
          
	glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.696f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.378f,percent)+PK_yPosition);//L12

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.696f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//N12
          glVertex2f(VALUE_FROM_PERSENT(0.754f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//O12
          
          glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.754f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.378f,percent)+PK_yPosition);//M12
          glEnd(); 
            
          glBegin(GL_QUADS);//door upper H12,I12,K12,J12 
          
	glColor3f(1.0f, 0.82f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.65f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.414f,percent)+PK_yPosition);//H12

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.67f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.435f,percent)+PK_yPosition);//T9
          glVertex2f(VALUE_FROM_PERSENT(0.772f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.435f,percent)+PK_yPosition);//G10

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.798f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.414f,percent)+PK_yPosition);//S9
          glEnd();  
          

          glBegin(GL_QUADS);//T9,U9,F10,G10 mandir kalas box first
          
	glColor3f(0.18f, 0.12f, 0.01f);
          glVertex2f(VALUE_FROM_PERSENT(0.67f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.435f,percent)+PK_yPosition);//T9
          glVertex2f(VALUE_FROM_PERSENT(0.67f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.44f,percent)+PK_yPosition);//U9
          glVertex2f(VALUE_FROM_PERSENT(0.772f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.44f,percent)+PK_yPosition);//F10
          glVertex2f(VALUE_FROM_PERSENT(0.772f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.435f,percent)+PK_yPosition);//G10
          glEnd();


           glBegin(GL_QUADS);//J10,K10,L10,M10 mandir kalas box second
          
	glColor3f(1.0f, 0.9f, 0.48f);
          glVertex2f(VALUE_FROM_PERSENT(0.681f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.44f,percent)+PK_yPosition);//J10
          glVertex2f(VALUE_FROM_PERSENT(0.681f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.46f,percent)+PK_yPosition);//K10
          glVertex2f(VALUE_FROM_PERSENT(0.763f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.46f,percent)+PK_yPosition);//L10
          glVertex2f(VALUE_FROM_PERSENT(0.763f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.44f,percent)+PK_yPosition);//M10
          glEnd();

          glBegin(GL_QUADS);//N10,O10,P10,Q10 mandir kalas box second
          
	glColor3f(0.18f, 0.12f, 0.01);
          glVertex2f(VALUE_FROM_PERSENT(0.675f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.46f,percent)+PK_yPosition);//N10
          glVertex2f(VALUE_FROM_PERSENT(0.675f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.47f,percent)+PK_yPosition);//O10
          glVertex2f(VALUE_FROM_PERSENT(0.768f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.47f,percent)+PK_yPosition);//P10
          glVertex2f(VALUE_FROM_PERSENT(0.768f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.46f,percent)+PK_yPosition);//Q10
          glEnd();
          
          glBegin(GL_QUADS);//O10,U10,Z10,P10 mandir kalas box second
          
	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 
          glVertex2f(VALUE_FROM_PERSENT(0.675f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.47f,percent)+PK_yPosition);//O10

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.708f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.515f,percent)+PK_yPosition);//V10
          glVertex2f(VALUE_FROM_PERSENT(0.735f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.515f,percent)+PK_yPosition);//Z10

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.768f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.47f,percent)+PK_yPosition);//P10
          glEnd();
        
        
          glBegin(GL_QUADS);//V10,W10,A11,Z10 mandir kalas box second
          
	glColor3f(0.18f, 0.12f, 0.01f);
          glVertex2f(VALUE_FROM_PERSENT(0.708f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.515f,percent)+PK_yPosition);//V10
          glVertex2f(VALUE_FROM_PERSENT(0.708f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.525f,percent)+PK_yPosition);//W10
          glVertex2f(VALUE_FROM_PERSENT(0.735f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.525f,percent)+PK_yPosition);//A11
          glVertex2f(VALUE_FROM_PERSENT(0.735f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.515f,percent)+PK_yPosition);//Z10
          glEnd(); 

          // flag code start from here 

          glBegin(GL_QUADS);
          
	glColor3f(1.0f, 0.9f, 0.48f);
          glVertex2f(VALUE_FROM_PERSENT(0.72f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.515f,percent)+PK_yPosition);//B11
          glVertex2f(VALUE_FROM_PERSENT(0.72f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.575f,percent)+PK_yPosition);//C11
          glVertex2f(VALUE_FROM_PERSENT(0.722f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.575f,percent)+PK_yPosition);//D11
          glVertex2f(VALUE_FROM_PERSENT(0.722f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.525f,percent)+PK_yPosition);//E11
          glEnd(); 


          glBegin(GL_TRIANGLES);
          
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.722f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.575f,percent)+PK_yPosition);//D11
          glVertex2f(VALUE_FROM_PERSENT(0.738f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.575f,percent)+PK_yPosition);//F11
          glVertex2f(VALUE_FROM_PERSENT(0.722f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.56f,percent)+PK_yPosition);//G11
  
          glEnd(); 
          
          
          glBegin(GL_TRIANGLES);
          
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.722f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.56f,percent)+PK_yPosition);//G11
          glVertex2f(VALUE_FROM_PERSENT(0.738f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.545f,percent)+PK_yPosition);//H11
          glVertex2f(VALUE_FROM_PERSENT(0.722f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.545f,percent)+PK_yPosition);//I11
  
          glEnd(); 

          
          

// from here  we star to build LEFT side mandir
          // all things of LEFT mandir is here 
           
	        glBegin(GL_QUADS);//E3,D3,F4,G4  LEFT SIDE MANDIR left side column 

	glColor3f(0.32f, 0.08f, 0.03f);
          glVertex2f(VALUE_FROM_PERSENT(0.255f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//E3
          glVertex2f(VALUE_FROM_PERSENT(0.255f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//D3
          glVertex2f(VALUE_FROM_PERSENT(0.261f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//F4
          glVertex2f(VALUE_FROM_PERSENT(0.261f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//G4
          glEnd();

	        glBegin(GL_QUADS);//W8,A13,Z9,A10

	glColor3f(0.57f, 0.55f, 0.38f);
          glVertex2f(VALUE_FROM_PERSENT(0.261f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//G4
          glVertex2f(VALUE_FROM_PERSENT(0.261f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//F4
          glVertex2f(VALUE_FROM_PERSENT(0.269f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//E4
          glVertex2f(VALUE_FROM_PERSENT(0.269f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//H4
          glEnd();

	
	       glBegin(GL_QUADS);// LEFT SIDE MANDIR RIGHT side column 

	glColor3f(0.57f, 0.55f, 0.38f);
          glVertex2f(VALUE_FROM_PERSENT(0.36f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//C4
          glVertex2f(VALUE_FROM_PERSENT(0.36f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//A4
          glVertex2f(VALUE_FROM_PERSENT(0.368f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//B4
          glVertex2f(VALUE_FROM_PERSENT(0.368f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//D4
          glEnd();

	glBegin(GL_QUADS);//C10,B10,L9,M9

	glColor3f(0.32f, 0.08f, 0.03f);
          glVertex2f(VALUE_FROM_PERSENT(0.368f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//D4
          glVertex2f(VALUE_FROM_PERSENT(0.368f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//B4
          glVertex2f(VALUE_FROM_PERSENT(0.378f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//F3
          glVertex2f(VALUE_FROM_PERSENT(0.378f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//G3
          glEnd();

         
          glBegin(GL_QUADS);//0.37, 0.34, 0.18 UPPER BOX J9,K9,O9,N9

	glColor3f(0.25f, 0.25f, 0.25f);
          glVertex2f(VALUE_FROM_PERSENT(0.248f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//J4
          glVertex2f(VALUE_FROM_PERSENT(0.248f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.402f,percent)+PK_yPosition);//I4
          glVertex2f(VALUE_FROM_PERSENT(0.385f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.402f,percent)+PK_yPosition);//L4
          glVertex2f(VALUE_FROM_PERSENT(0.385f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//K4
          glEnd();

          
          glBegin(GL_QUADS);//0.37, 0.34, 0.18 UPPER upper BOX P9,Q9,S9,R9
          
	glColor3f(0.07f, 0.04f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.238f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.402f,percent)+PK_yPosition);//M4
          glVertex2f(VALUE_FROM_PERSENT(0.238f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.414f,percent)+PK_yPosition);//N4
          glVertex2f(VALUE_FROM_PERSENT(0.395f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.414f,percent)+PK_yPosition);//P4
          glVertex2f(VALUE_FROM_PERSENT(0.395f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.402f,percent)+PK_yPosition);//O4
          glEnd();

          glBegin(GL_QUADS);//LEFT MANDIR door BOX outer 
          
	glColor3f(0.51f, 0.26f, 0.19f);
          glVertex2f(VALUE_FROM_PERSENT(0.288f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//Q3
          glVertex2f(VALUE_FROM_PERSENT(0.288f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.372f,percent)+PK_yPosition);//P3
          glVertex2f(VALUE_FROM_PERSENT(0.340f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.372f,percent)+PK_yPosition);//R3
          glVertex2f(VALUE_FROM_PERSENT(0.340f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//S3
          glEnd();

          
          glBegin(GL_QUADS);//LEFT MANDIR door BOX inner 
          
	glColor3f(0.25f, 0.05f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.293f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//V3
          glVertex2f(VALUE_FROM_PERSENT(0.293f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.366f,percent)+PK_yPosition);//U3
          glVertex2f(VALUE_FROM_PERSENT(0.335f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.366f,percent)+PK_yPosition);//Z3
          glVertex2f(VALUE_FROM_PERSENT(0.335f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.308f,percent)+PK_yPosition);//W3
          glEnd();


           
          glBegin(GL_QUADS);//door upper H12,I12,K12,J12 
          
	glColor3f(0.6f, 0.5f, 0.44f);
          glVertex2f(VALUE_FROM_PERSENT(0.283f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.372f,percent)+PK_yPosition);//N3
          glVertex2f(VALUE_FROM_PERSENT(0.283f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.376f,percent)+PK_yPosition);//L3
          glVertex2f(VALUE_FROM_PERSENT(0.346f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.376f,percent)+PK_yPosition);//M3
          glVertex2f(VALUE_FROM_PERSENT(0.346f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.372f,percent)+PK_yPosition);//O3
          glEnd();

          glBegin(GL_QUADS);//door upper upper box 
          
	glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.283f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.376f,percent)+PK_yPosition);//L3

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.287f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.378f,percent)+PK_yPosition);//I3
          glVertex2f(VALUE_FROM_PERSENT(0.342f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.378f,percent)+PK_yPosition);//K3
          
          glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.346f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.376f,percent)+PK_yPosition);//M3
          glEnd();

          //upper upper upper box of door 
          glBegin(GL_QUADS);//L12,N12,O12,M12
          
	glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.287f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.378f,percent)+PK_yPosition);//I3

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.287f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//H3
          glVertex2f(VALUE_FROM_PERSENT(0.342f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.39f,percent)+PK_yPosition);//J3
          
          glColor3f(0.31f, 0.11f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.342f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.378f,percent)+PK_yPosition);//K3
          glEnd(); 
            
          glBegin(GL_QUADS);//door upper H12,I12,K12,J12 
          
	glColor3f(1.0f, 0.82f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.238f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.414f,percent)+PK_yPosition);//N4

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.252f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.435f,percent)+PK_yPosition);//Q4
          glVertex2f(VALUE_FROM_PERSENT(0.376f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.435f,percent)+PK_yPosition);//R4

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.395f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.414f,percent)+PK_yPosition);//P4
          glEnd();  
          

          glBegin(GL_QUADS);//T9,U9,F10,G10 mandir kalas box first
          
	glColor3f(0.18f, 0.12f, 0.01f);
          glVertex2f(VALUE_FROM_PERSENT(0.252f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.435f,percent)+PK_yPosition);//Q4
          glVertex2f(VALUE_FROM_PERSENT(0.252f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.44f,percent)+PK_yPosition);//S4
          glVertex2f(VALUE_FROM_PERSENT(0.376f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.44f,percent)+PK_yPosition);//T4
          glVertex2f(VALUE_FROM_PERSENT(0.376f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.435f,percent)+PK_yPosition);//R4
          glEnd();


          glBegin(GL_QUADS);// mandir kalas box second
          
	glColor3f(1.0f, 0.9f, 0.48f);
          glVertex2f(VALUE_FROM_PERSENT(0.26f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.44f,percent)+PK_yPosition);//V4
          glVertex2f(VALUE_FROM_PERSENT(0.26f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.46f,percent)+PK_yPosition);//U4
          glVertex2f(VALUE_FROM_PERSENT(0.366f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.46f,percent)+PK_yPosition);//H10
          glVertex2f(VALUE_FROM_PERSENT(0.366f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.44f,percent)+PK_yPosition);//I10
          glEnd();

          glBegin(GL_QUADS);//
          
	glColor3f(0.18f, 0.12f, 0.01);
          glVertex2f(VALUE_FROM_PERSENT(0.256f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.46f,percent)+PK_yPosition);//z4
          glVertex2f(VALUE_FROM_PERSENT(0.256f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.47f,percent)+PK_yPosition);//a5
          glVertex2f(VALUE_FROM_PERSENT(0.37f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.47f,percent)+PK_yPosition);//b5
          glVertex2f(VALUE_FROM_PERSENT(0.37f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.46f,percent)+PK_yPosition);//c5
          glEnd();
          
          glBegin(GL_QUADS);
          
	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 
          glVertex2f(VALUE_FROM_PERSENT(0.256f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.47f,percent)+PK_yPosition);//A5

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.298f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.515f,percent)+PK_yPosition);//R10
          glVertex2f(VALUE_FROM_PERSENT(0.33f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.515f,percent)+PK_yPosition);//T10

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.37f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.47f,percent)+PK_yPosition);//B5
          glEnd();
        
        
          glBegin(GL_QUADS);
          
	glColor3f(0.18f, 0.12f, 0.01f);
          glVertex2f(VALUE_FROM_PERSENT(0.298f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.515f,percent)+PK_yPosition);//R10
          glVertex2f(VALUE_FROM_PERSENT(0.298f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.525f,percent)+PK_yPosition);//S10
          glVertex2f(VALUE_FROM_PERSENT(0.33f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.525f,percent)+PK_yPosition);//U10
          glVertex2f(VALUE_FROM_PERSENT(0.33f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.515f,percent)+PK_yPosition);//T10
          glEnd(); 

          // flag code start from here 

          glBegin(GL_QUADS);
          
	glColor3f(1.0f, 0.9f, 0.48f);
          glVertex2f(VALUE_FROM_PERSENT(0.312f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.525f,percent)+PK_yPosition);//J11
          glVertex2f(VALUE_FROM_PERSENT(0.312f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.575f,percent)+PK_yPosition);//K11
          glVertex2f(VALUE_FROM_PERSENT(0.314f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.575f,percent)+PK_yPosition);//M11
          glVertex2f(VALUE_FROM_PERSENT(0.314f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.525f,percent)+PK_yPosition);//L11
          glEnd(); 


          glBegin(GL_TRIANGLES);
          
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.314f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.575f,percent)+PK_yPosition);//M11
          glVertex2f(VALUE_FROM_PERSENT(0.328f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.575f,percent)+PK_yPosition);//N11
          glVertex2f(VALUE_FROM_PERSENT(0.314f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.56f,percent)+PK_yPosition);//O11
  
          glEnd(); 
          
          
          glBegin(GL_TRIANGLES);
          
	glColor3f(1.0f, 0.0f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.314f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.56f,percent)+PK_yPosition);//O11
          glVertex2f(VALUE_FROM_PERSENT(0.328f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.545f,percent)+PK_yPosition);//P11
          glVertex2f(VALUE_FROM_PERSENT(0.314f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.545f,percent)+PK_yPosition);//Q11
  
          glEnd(); 
         
         
          //FROM HERE WE STARTED MIDDLE MANDIR 
        
        
          glBegin(GL_QUADS);//OUTER BOX OF DOOR 
          
	glColor3f(0.51f, 0.26f, 0.19f);
          glVertex2f(VALUE_FROM_PERSENT(0.474f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.288f,percent)+PK_yPosition);//Z5
          glVertex2f(VALUE_FROM_PERSENT(0.474f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//A6
          glVertex2f(VALUE_FROM_PERSENT(0.562f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//B6
          glVertex2f(VALUE_FROM_PERSENT(0.562f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.288f,percent)+PK_yPosition);//C6
          glEnd(); 

         glBegin(GL_QUADS);//MIDDLE MANDIR door BOX inner 
          
	glColor3f(0.25f, 0.05f, 0.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.49f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//S6
          glVertex2f(VALUE_FROM_PERSENT(0.49f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.4f,percent)+PK_yPosition);//R6
          glVertex2f(VALUE_FROM_PERSENT(0.55f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.4f,percent)+PK_yPosition);//U6
          glVertex2f(VALUE_FROM_PERSENT(0.55f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//T6
          glEnd();


          glBegin(GL_QUADS);//MIDDLE MANDIR LEFT SIDE COLUMN 

	glColor3f(0.32f, 0.08f, 0.03f);//Q5,P5,S5,R5
          glVertex2f(VALUE_FROM_PERSENT(0.427f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//Q5
          glVertex2f(VALUE_FROM_PERSENT(0.427f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//P5
          glVertex2f(VALUE_FROM_PERSENT(0.436f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//S5
          glVertex2f(VALUE_FROM_PERSENT(0.436f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//R5
          glEnd();

        	glBegin(GL_QUADS);//W8,A13,Z9,A10

	glColor3f(0.57f, 0.55f, 0.38f);
          glVertex2f(VALUE_FROM_PERSENT(0.436f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//R5
          glVertex2f(VALUE_FROM_PERSENT(0.436f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//S5
          glVertex2f(VALUE_FROM_PERSENT(0.444f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//T5
          glVertex2f(VALUE_FROM_PERSENT(0.444f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//U6
          glEnd();


           glBegin(GL_QUADS);//MIDDLE MANDIR RIGHT SIDE COLUMN 

	glColor3f(0.57f, 0.55f, 0.38f);//G6,F6,J6,K6
          glVertex2f(VALUE_FROM_PERSENT(0.592f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//G6
          glVertex2f(VALUE_FROM_PERSENT(0.592f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//F6
          glVertex2f(VALUE_FROM_PERSENT(0.601f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//J6
          glVertex2f(VALUE_FROM_PERSENT(0.601f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//K6
          glEnd();

        	glBegin(GL_QUADS);//W8,A13,Z9,A10

	glColor3f(0.32f, 0.08f, 0.03f);

          glVertex2f(VALUE_FROM_PERSENT(0.601f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//K6
          glVertex2f(VALUE_FROM_PERSENT(0.601f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//J6
          glVertex2f(VALUE_FROM_PERSENT(0.609f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//I6
          glVertex2f(VALUE_FROM_PERSENT(0.609f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.306f,percent)+PK_yPosition);//H6
          glEnd();


          glBegin(GL_QUADS);//N5,M5,W9,V9

	glColor3f(0.32f, 0.08f, 0.03f);//BOX ABOVE THE MIDDLE DOOR

          glVertex2f(VALUE_FROM_PERSENT(0.409f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//N5
          glVertex2f(VALUE_FROM_PERSENT(0.409f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.438f,percent)+PK_yPosition);//M5
          glVertex2f(VALUE_FROM_PERSENT(0.625f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.438f,percent)+PK_yPosition);//W9
          glVertex2f(VALUE_FROM_PERSENT(0.625f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.424f,percent)+PK_yPosition);//V9
          glEnd();

	
          glBegin(GL_QUADS);//K5,G5,I5,L5

	glColor3f(0.32f, 0.08f, 0.03f);// UPPER UPPER BOX

          glVertex2f(VALUE_FROM_PERSENT(0.396f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.438f,percent)+PK_yPosition);//K5
          glVertex2f(VALUE_FROM_PERSENT(0.38f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.452f,percent)+PK_yPosition);//G5
          glVertex2f(VALUE_FROM_PERSENT(0.666f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.452,percent)+PK_yPosition);//I5
          glVertex2f(VALUE_FROM_PERSENT(0.65f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.438f,percent)+PK_yPosition);//L5
          glEnd();

          
          glBegin(GL_QUADS);//N5,M5,W9,V9

	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 

          glVertex2f(VALUE_FROM_PERSENT(0.38f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.452f,percent)+PK_yPosition);//G5

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.402f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.478f,percent)+PK_yPosition);//H5
          glVertex2f(VALUE_FROM_PERSENT(0.644f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.478f,percent)+PK_yPosition);//J5

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.666f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.452f,percent)+PK_yPosition);//I5
          glEnd();


           glBegin(GL_QUADS);//K5,G5,I5,L5

	glColor3f(0.32f, 0.08f, 0.03f);// UPPER UPPER BOX

          glVertex2f(VALUE_FROM_PERSENT(0.402f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.478f,percent)+PK_yPosition);//H5
          glVertex2f(VALUE_FROM_PERSENT(0.402, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.488f,percent)+PK_yPosition);//L6
          glVertex2f(VALUE_FROM_PERSENT(0.644f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.488,percent)+PK_yPosition);//M6
          glVertex2f(VALUE_FROM_PERSENT(0.644f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.478f,percent)+PK_yPosition);//J5
          glEnd();

          glBegin(GL_QUADS);//

	glColor3f(1.0f, 0.9f, 0.48f);

          glVertex2f(VALUE_FROM_PERSENT(0.425f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.488f,percent)+PK_yPosition);//O6
          glVertex2f(VALUE_FROM_PERSENT(0.425, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.516f,percent)+PK_yPosition);//N6
          glVertex2f(VALUE_FROM_PERSENT(0.62f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.516,percent)+PK_yPosition);//P6
          glVertex2f(VALUE_FROM_PERSENT(0.62f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.488f,percent)+PK_yPosition);//Q6
          glEnd();
        
          
        //from here we start the middle mandir background kalash 

          glBegin(GL_QUADS);

	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 

          glVertex2f(VALUE_FROM_PERSENT(0.35f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.53f,percent)+PK_yPosition);//V6

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.35f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.55f,percent)+PK_yPosition);//Z6
          glVertex2f(VALUE_FROM_PERSENT(0.688f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.55,percent)+PK_yPosition);//A7

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.688f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.53f,percent)+PK_yPosition);//W6
          glEnd();

           glBegin(GL_QUADS);//

	glColor3f(0.32f, 0.08f, 0.03f);// UPPER UPPER BOX

          glVertex2f(VALUE_FROM_PERSENT(0.371f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.55f,percent)+PK_yPosition);//D7
          glVertex2f(VALUE_FROM_PERSENT(0.371f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.57f,percent)+PK_yPosition);//C7
          glVertex2f(VALUE_FROM_PERSENT(0.661f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.57,percent)+PK_yPosition);//F7
          glVertex2f(VALUE_FROM_PERSENT(0.661f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.55f,percent)+PK_yPosition);//E7
          glEnd();


          glBegin(GL_QUADS);

	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 

          glVertex2f(VALUE_FROM_PERSENT(0.366f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.57f,percent)+PK_yPosition);//G7

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.378f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.59f,percent)+PK_yPosition);//H7
          glVertex2f(VALUE_FROM_PERSENT(0.66f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.59,percent)+PK_yPosition);//J7

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.672f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.57f,percent)+PK_yPosition);//I7
          glEnd();
          
          
          
          glBegin(GL_QUADS);
  glColor3f(0.32f, 0.08f, 0.03f);// UPPER UPPER BOX


          glVertex2f(VALUE_FROM_PERSENT(0.385f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.59f,percent)+PK_yPosition);//K7
          glVertex2f(VALUE_FROM_PERSENT(0.385f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.61f,percent)+PK_yPosition);//L7
          glVertex2f(VALUE_FROM_PERSENT(0.655f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.61,percent)+PK_yPosition);//N7
          glVertex2f(VALUE_FROM_PERSENT(0.655f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.59f,percent)+PK_yPosition);//M7
          glEnd();

          glBegin(GL_QUADS);

	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 

          glVertex2f(VALUE_FROM_PERSENT(0.38f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.61f,percent)+PK_yPosition);//O7

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.39, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.625f,percent)+PK_yPosition);//P7
          glVertex2f(VALUE_FROM_PERSENT(0.65f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.625,percent)+PK_yPosition);//R7

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.66f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.61f,percent)+PK_yPosition);//Q7
          glEnd();

          glBegin(GL_QUADS);
  	glColor3f(0.32f, 0.08f, 0.03f);// UPPER UPPER BOX


          glVertex2f(VALUE_FROM_PERSENT(0.4f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.625f,percent)+PK_yPosition);//S7
          glVertex2f(VALUE_FROM_PERSENT(0.4f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.64f,percent)+PK_yPosition);//T7
          glVertex2f(VALUE_FROM_PERSENT(0.632f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.64,percent)+PK_yPosition);//V7
          glVertex2f(VALUE_FROM_PERSENT(0.632f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.625f,percent)+PK_yPosition);//U7
          glEnd();

          glBegin(GL_QUADS);

	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 

          glVertex2f(VALUE_FROM_PERSENT(0.396f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.64f,percent)+PK_yPosition);//W7

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.404, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.655f,percent)+PK_yPosition);//Z7
          glVertex2f(VALUE_FROM_PERSENT(0.628f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.655,percent)+PK_yPosition);//B8

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.638f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.64f,percent)+PK_yPosition);//A8
          glEnd();
          
          
          glBegin(GL_QUADS);

  	glColor3f(0.32f, 0.08f, 0.03f);// UPPER UPPER BOX

          glVertex2f(VALUE_FROM_PERSENT(0.42f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.655f,percent)+PK_yPosition);//C8
          glVertex2f(VALUE_FROM_PERSENT(0.42f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.67f,percent)+PK_yPosition);//D8
          glVertex2f(VALUE_FROM_PERSENT(0.615f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.67f,percent)+PK_yPosition);//F8
          glVertex2f(VALUE_FROM_PERSENT(0.615f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.655f,percent)+PK_yPosition);//E8
          glEnd();


          glBegin(GL_QUADS);

	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 

          glVertex2f(VALUE_FROM_PERSENT(0.42f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.67f,percent)+PK_yPosition);//D8

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.496, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.765f,percent)+PK_yPosition);//G8
          glVertex2f(VALUE_FROM_PERSENT(0.54f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.765,percent)+PK_yPosition);//H8

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.615f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.67f,percent)+PK_yPosition);//F8
          glEnd();
//TOP
         glBegin(GL_QUADS);

	glColor3f(0.32f, 0.08f, 0.03f);// UPPER UPPER BOX 

          glVertex2f(VALUE_FROM_PERSENT(0.496, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.765f,percent)+PK_yPosition);//G8
          glVertex2f(VALUE_FROM_PERSENT(0.496, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.785f,percent)+PK_yPosition);//I8
          glVertex2f(VALUE_FROM_PERSENT(0.54f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.785,percent)+PK_yPosition);//J8
          glVertex2f(VALUE_FROM_PERSENT(0.54f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.765,percent)+PK_yPosition);//H8
          glEnd();

          glBegin(GL_QUADS);

	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 

          glVertex2f(VALUE_FROM_PERSENT(0.502f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.785f,percent)+PK_yPosition);//K8

          glColor3f(0.62f, 0.36f, 0.2f);

          glVertex2f(VALUE_FROM_PERSENT(0.504, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.795f,percent)+PK_yPosition);//L8
          glVertex2f(VALUE_FROM_PERSENT(0.532f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.795,percent)+PK_yPosition);//N8

	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 
          glVertex2f(VALUE_FROM_PERSENT(0.534f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.785f,percent)+PK_yPosition);//M8
          glEnd();
          
          
          glBegin(GL_QUADS);

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.504, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.795f,percent)+PK_yPosition);//L8

          glColor3f(1.0f, 1.0f, 1.0f);
          glVertex2f(VALUE_FROM_PERSENT(0.496, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.81f,percent)+PK_yPosition);//P8
          glVertex2f(VALUE_FROM_PERSENT(0.54f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.81,percent)+PK_yPosition);//O8

          glColor3f(0.62f, 0.36f, 0.2f);
          glVertex2f(VALUE_FROM_PERSENT(0.532f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.795,percent)+PK_yPosition);//N8
          glEnd();


          glBegin(GL_QUADS);

	glColor3f(0.32f, 0.08f, 0.03f);// UPPER UPPER BOX 

          glVertex2f(VALUE_FROM_PERSENT(0.496, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.81f,percent)+PK_yPosition);//P8
          glVertex2f(VALUE_FROM_PERSENT(0.496, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.815f,percent)+PK_yPosition);//Q8
          glVertex2f(VALUE_FROM_PERSENT(0.54f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.815,percent)+PK_yPosition);//R8
          glVertex2f(VALUE_FROM_PERSENT(0.54f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.81,percent)+PK_yPosition);//O8
          glEnd();

          glBegin(GL_TRIANGLES);//it was the last triangle 

	glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 
	        glVertex2f(VALUE_FROM_PERSENT(0.499f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.815f,percent)+PK_yPosition);
	        glVertex2f(VALUE_FROM_PERSENT(0.518f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.855f,percent)+PK_yPosition);
	        glVertex2f(VALUE_FROM_PERSENT(0.536f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.815f,percent)+PK_yPosition);
	        glEnd();

          glBegin(GL_TRIANGLES);
          
	glColor3f(0.77f, 0.53f, 0.12f);//kalsh top 
          glVertex2f(VALUE_FROM_PERSENT(0.425, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.516f,percent)+PK_yPosition);//N6

          glColor3f(1.0f, 0.82f, 0.0f);//kalsh top 
          glVertex2f(VALUE_FROM_PERSENT(0.518f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.67f,percent)+PK_yPosition);//B7

          glColor3f(0.77f, 0.53f, 0.12f);//kalsh top
          glVertex2f(VALUE_FROM_PERSENT(0.62f, percent)+PK_xPosition,VALUE_FROM_PERSENT( 0.516,percent)+PK_yPosition);//P6
  
          glEnd(); //middle mandir top triangle kalash 

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







/*float PK_xPosition = 0.16f;
float PK_yPosition = 0.94f;
float width = 0.72f;
float height = 0.94f;*/
