#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI 3.14159265358979323846
#include <iostream>

using namespace std;

//Project Details and Instructions is given in Command Prompt window

GLfloat position = 0.0f;
GLfloat speed = 0.05f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.01f;
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.03f;
GLfloat position3 = -2.0f;
GLfloat speed3 = 0.0f;
float _rain = 0.0;
bool rainday = false;
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.01f;


//animation
void update(int value) {

    if(position <-2.0)
        position = 2.0f;

    position -= speed;

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}
void update1(int value) {

    if(position1 >2.0)
        position1 = -2.0f;

    position1 += speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}
void update2(int value) {

    if(position2 >2.0)
        position2 = -2.0f;

    position2 += speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void update3(int value) {

    if(position3 >2.0)
        position3 = -2.0f;

    position3 += speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

void update4(int value) {

    if(position4 >2.0)
        position4 = -2.0f;

    position4 += speed4;

    glutPostRedisplay();

    glutTimerFunc(1, update4, 0);
}
void circle(GLfloat x, GLfloat y, GLfloat r)
{
    int tc=100;

    GLfloat tpi=2.0f *3.141592653589793238;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);

    for(int i=0; i<=tc; i++)
    {
        glVertex2f(x+ (r*cos( (i*tpi)/tc)), y+ (r*sin( (i*tpi)/tc)));
    }
    glEnd();
}
void sound()
{

    PlaySound("b.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound2()
{

    PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);

}
void sound3()
{

    PlaySound("night.wav", NULL, SND_ASYNC|SND_FILENAME);

}

void sound4()
{

    PlaySound("rain.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void sound5()
{

    PlaySound("day.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}


void Rain(int value){
glPushMatrix();
glTranslatef(0,-position4,0);
if(rainday){

    _rain += 1.0f;


    glBegin(GL_POINTS);
    for(value=1;value<=1000;value++)
    {


      glBegin(GL_LINES);
    glColor3ub(204, 204, 179);


    glVertex2f(0.17,0.6);
    glVertex2f(0.15,0.5);

    glVertex2f(-0.17,0.7);
    glVertex2f(-0.15,0.8);

    glVertex2f(-0.27,0.5);
    glVertex2f(-0.25,0.6);

     glVertex2f(-0.37,0.6);
    glVertex2f(-0.35,0.7);

     glVertex2f(-0.47,0.4);
    glVertex2f(-0.45,0.5);


    glVertex2f(-0.57,0.3);
    glVertex2f(-0.55,0.4);


     glVertex2f(-0.67,0.8);
    glVertex2f(-0.65,0.9);


     glVertex2f(-0.77,0.8);
    glVertex2f(-0.75,0.9);


     glVertex2f(-0.87,0.1);
    glVertex2f(-0.85,0.2);


     glVertex2f(-0.97,0.1);
    glVertex2f(-0.95,0.2);


    glVertex2f(-0.5,0.1);
    glVertex2f(-0.48,0.2);


     glVertex2f(0.5,0.1);
    glVertex2f(0.52,0.2);


     glVertex2f(0.6,0.2);
    glVertex2f(0.62,0.3);


     glVertex2f(0.7,0.3);
    glVertex2f(0.72,0.4);


    glVertex2f(0.8,0.4);
    glVertex2f(0.82,0.5);


     glVertex2f(0.9,0.3);
    glVertex2f(0.92,0.4);


     glVertex2f(0.6,0.8);
    glVertex2f(0.62,0.9);


     glVertex2f(0.1,0.5);
    glVertex2f(0.12,0.6);


     glVertex2f(0.1,0.8);
    glVertex2f(0.12,0.9);

    glVertex2f(0.2,0.6);
    glVertex2f(0.22,0.7);

     glVertex2f(0.2,0.4);
    glVertex2f(0.22,0.5);

    glVertex2f(0.3,0.1);
    glVertex2f(0.32,0.2);

     glVertex2f(0.4,0.3);
    glVertex2f(0.42,0.4);

    glVertex2f(0.9,-0.3);
    glVertex2f(0.92,-0.2);


      glVertex2f(0.1,-0.3);
    glVertex2f(0.12,-0.2);


     glVertex2f(0.1,0);
    glVertex2f(0.12,0.1);


     glVertex2f(0.1,0.15);
    glVertex2f(0.12,0.25);


    glVertex2f(-0.1,0.15);
    glVertex2f(-0.08,0.25);


    glVertex2f(-0.2,0.1);
    glVertex2f(-0.18,0.2);


     glVertex2f(-0.2,-0.3);
    glVertex2f(-0.18,-0.2);

     glVertex2f(-0.3,-0.5);
    glVertex2f(-0.28,-0.4);


    glVertex2f(-0.8,-0.9);
    glVertex2f(-0.78,-0.8);


    glVertex2f(-0.9,-0.7);
    glVertex2f(-0.88,-0.6);


    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.88,-0.4);


    glVertex2f(-0.9,-1.0);
    glVertex2f(-0.88,-0.9);


    glVertex2f(0.9,-0.5);
    glVertex2f(0.92,-0.4);


     glVertex2f(0.9,-0.9);
    glVertex2f(0.92,-0.8);


    glVertex2f(0.7,-0.9);
    glVertex2f(0.72,-0.8);


    glVertex2f(0.7,-0.3);
    glVertex2f(0.72,-0.2);


    glVertex2f(0.4,-0.3);
    glVertex2f(0.42,-0.2);


    glVertex2f(0.4,-0.6);
    glVertex2f(0.42,-0.5);


    glVertex2f(0.5,-0.3);
    glVertex2f(0.52,-0.2);


    glVertex2f(0.5,-0.7);
    glVertex2f(0.52,-0.6);


    glVertex2f(0.1,-0.7);
    glVertex2f(0.12,-0.6);

    glVertex2f(-0.1,-0.8);
    glVertex2f(-0.08,-0.7);


    glVertex2f(-0.2,-0.8);
    glVertex2f(-0.18,-0.7);



     glVertex2f(-0.3,-0.6);
    glVertex2f(-0.28,-0.5);


    glVertex2f(0.0,-0.6);
    glVertex2f(0.02,-0.5);

    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.38,-0.6);


    glVertex2f(-0.5,-0.9);
    glVertex2f(-0.48,-0.8);


    glVertex2f(-0.6,-0.4);
    glVertex2f(-0.58,-0.3);

    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.68,-0.1);

    glVertex2f(-0.5,-0.3);
    glVertex2f(-0.48,-0.2);
        glEnd();
    }

    glPopMatrix();
    glLoadIdentity();

    //glutPostRedisplay();
    glutTimerFunc(0, Rain, 0);
    glFlush();
}
}
void day() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5.5);
    int i;

    GLfloat a=.4f;
    GLfloat b=-0.37f;
    GLfloat c=.62f;
    GLfloat d=-0.37f;
    GLfloat e=-0.03f;
    GLfloat f=-0.37f;
    GLfloat g=0.16f;
    GLfloat h=-0.37f;

    GLfloat o=-0.43f;
    GLfloat p=-0.37f;
    GLfloat q=-0.24f;
    GLfloat r=-0.37f;

    GLfloat u=-0.73f;
    GLfloat v=-0.68f;
    GLfloat z=-0.57f;

     GLfloat u1=0.27f;
    GLfloat v1=-0.82f;
    GLfloat z1=0.4f;

    GLfloat o1=-0.62f;
    GLfloat p1=-0.37f;
    GLfloat q1=-0.78f;


    GLfloat radius1 =.03f;
    GLfloat radius2 =.031f; //for car
	int j;
	int k;
	int l;
	int m;
	int n;
	int t;
	int a1;
	int b1;
	int c1;
	int d1;
	int e1;
    int j1;

	int lineAmount1 = 100;


    glBegin(GL_QUADS);   //sky
    glColor3ub(3, 219, 252);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(1.0f, 1.0f);
    glEnd();


    int s;             //bird1
    GLfloat mm=0.182f;
    GLfloat nn=.801f;
    GLfloat radiusmm =.01f;
    int triangleAmount2 = 20;
	GLfloat twicePi2 = 2.0f * PI;


    glPushMatrix();
    glTranslatef(position2,0,0);
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mm, nn); // center of circle
		for(s = 0; s <= triangleAmount2;s++) {
			glVertex2f(
		            mm + (radiusmm * cos(s *  twicePi2 / triangleAmount2)),
			    nn + (radiusmm * sin(s * twicePi2 / triangleAmount2))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();

    //bird2
	GLfloat mmm=0.062f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;
	int triangleAmount3 = 20;
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmm, nnn); // center of circle
		for(s = 0; s <= triangleAmount3;s++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(s *  twicePi3 / triangleAmount3)),
			    nnn + (radiusmmm * sin(s * twicePi3 / triangleAmount3))
			);
		}
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();
     glPopMatrix();


    glBegin(GL_QUADS);  //field
    glColor3ub(230, 184, 0);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();

    /*glBegin(GL_LINES); //axis

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(0.0f, -1.0f);


    glEnd();*/

    GLfloat x=-.8f,y=.8f;   //sun
    GLfloat radius =0.15f;
    int triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,0);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++)
            {
            glVertex2f
            (
                x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
            }
    glEnd();
    glPushMatrix();
    glTranslatef(position1,0,0);



    glColor3ub(255, 255, 255); //cloud2

    circle(-1.0f, 0.7f, 0.05f);
    circle(-0.9f, 0.7f, 0.05f);
    circle(-0.95f, 0.73f, 0.05f);
    circle(-0.95f, 0.68f, 0.05f);

    glColor3ub(255, 255, 255); //cloud2

    circle(-0.7f, 0.7f, 0.05f);
    circle(-0.6f, 0.7f, 0.05f);
    circle(-0.65f, 0.73f, 0.05f);
    circle(-0.65f, 0.68f, 0.05f);

    glColor3ub(255, 255, 255); //cloud3

    circle(-0.4f, 0.8f, 0.05f);
    circle(-0.3f, 0.8f, 0.05f);
    circle(-0.35f, 0.83f, 0.05f);
    circle(-0.35f, 0.78f, 0.05f);

    glColor3ub(255, 255, 255); //cloud4

    circle(0.1f, 0.6f, 0.05f);
    circle(0.2f, 0.6f, 0.05f);
    circle(0.15f, 0.63f, 0.05f);
    circle(0.15f, 0.58f, 0.05f);



    glPopMatrix();
    glLoadIdentity();

    glBegin(GL_TRIANGLES); //hill1
    glColor3ub(0, 102, 0);

    glVertex2f(1.0, 0.4);
    glVertex2f(0.8, 0.6);
    glVertex2f(0.6, 0.4);

    glVertex2f(0.6, 0.4);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.2, 0.4);

    glVertex2f(0.5, 0.4);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.6, 0.5);

    glEnd();

    glBegin(GL_TRIANGLES); //hill2
    glColor3ub(0, 179, 0);

    glVertex2f(1.05, 0.35);
    glVertex2f(0.85, 0.55);
    glVertex2f(0.65, 0.35);

    glVertex2f(0.65, 0.35);
    glVertex2f(0.45, 0.55);
    glVertex2f(0.25, 0.35);

    glVertex2f(0.55, 0.35);
    glVertex2f(0.75, 0.35);
    glVertex2f(0.65, 0.45);

    glEnd();


    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 102, 0);

    glVertex2f(-1.0, 0.4);
    glVertex2f(-0.8, 0.6);
    glVertex2f(-0.6, 0.4);

    glVertex2f(-0.6, 0.4);
    glVertex2f(-0.4, 0.6);
    glVertex2f(-0.2, 0.4);

    glVertex2f(-0.5, 0.4);
    glVertex2f(-0.7, 0.4);
    glVertex2f(-0.6, 0.5);

    glEnd();

    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 179, 0);

    glVertex2f(-1.05, 0.35);
    glVertex2f(-0.85, 0.55);
    glVertex2f(-0.65, 0.35);

    glVertex2f(-0.65, 0.35);
    glVertex2f(-0.45, 0.55);
    glVertex2f(-0.25, 0.35);

    glVertex2f(-0.55, 0.35);
    glVertex2f(-0.75, 0.35);
    glVertex2f(-0.65, 0.45);

    glEnd();

    glTranslatef(-0.65f,0.0f,0.0f);
    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 102, 0);

    glVertex2f(1.0, 0.4);
    glVertex2f(0.8, 0.6);
    glVertex2f(0.6, 0.4);

    glVertex2f(0.6, 0.4);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.2, 0.4);

    glVertex2f(0.5, 0.4);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.6, 0.5);

    glEnd();
    glLoadIdentity();


    glTranslatef(-0.64f,0.0f,0.0f);
    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 179, 0);

    glVertex2f(1.0, 0.35);
    glVertex2f(0.8, 0.55);
    glVertex2f(0.6, 0.35);

    glVertex2f(0.6, 0.35);
    glVertex2f(0.4, 0.55);
    glVertex2f(0.2, 0.35);

    glVertex2f(0.5, 0.35);
    glVertex2f(0.7, 0.35);
    glVertex2f(0.6, 0.45);

    glEnd();
    glLoadIdentity();




    glBegin(GL_QUADS);   //tea garden
    glColor3ub(0, 179, 60);
    glVertex2f(-0.98f, .28f);
    glVertex2f(-0.98f, .05f);
    glVertex2f(-.5f, .05f);
    glVertex2f(-.5f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, .28f);
    glVertex2f(-0.98f, .21f);
    glVertex2f(-.5f, .21f);
    glVertex2f(-.5f, .28f);
    glEnd();


    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, .19f);
    glVertex2f(-0.98f, .13f);
    glVertex2f(-.5f, .13f);
    glVertex2f(-.5f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, .11f);
    glVertex2f(-0.98f, .05f);
    glVertex2f(-.5f, .05f);
    glVertex2f(-.5f, .11f);

    glEnd();

     glBegin(GL_QUADS);   //tea garden5
    glColor3ub(0, 179, 60);
    glVertex2f(-0.98f, -.28f);
    glVertex2f(-0.98f, -.02f);
    glVertex2f(-.5f, -.02f);
    glVertex2f(-.5f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, -.28f);
    glVertex2f(-0.98f, -.21f);
    glVertex2f(-.5f, -.21f);
    glVertex2f(-.5f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, -.19f);
    glVertex2f(-0.98f, -.13f);
    glVertex2f(-.5f, -.13f);
    glVertex2f(-.5f, -.19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, -.11f);
    glVertex2f(-0.98f, -.05f);
    glVertex2f(-.5f, -.05f);
    glVertex2f(-.5f, -.11f);

    glEnd();


    glBegin(GL_QUADS);   //tea garden2
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-0.03f, .05f);
    glVertex2f(-0.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .21f);
    glVertex2f(-.03f, .21f);
    glVertex2f(-.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .19f);
    glVertex2f(-0.48f, .13f);
    glVertex2f(-.03f, .13f);
    glVertex2f(-.03f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .11f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-.03f, .05f);
    glVertex2f(-.03f, .11f);

    glEnd();

     glBegin(GL_QUADS);   //tea garden6
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.02f);
    glVertex2f(-0.03f, -.02f);
    glVertex2f(-0.03f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.21f);
    glVertex2f(-.03f, -.21f);
    glVertex2f(-.03f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.19f);
    glVertex2f(-0.48f, -.13f);
    glVertex2f(-.03f, -.13f);
    glVertex2f(-.03f, -.19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.11f);
    glVertex2f(-0.48f, -.05f);
    glVertex2f(-.03f, -.05f);
    glVertex2f(-.03f, -.11f);

    glEnd();

    glTranslatef(.5f,0.0f,0.0f);
    glBegin(GL_QUADS);   //tea garden3
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-0.03f, .05f);
    glVertex2f(-0.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .21f);
    glVertex2f(-.03f, .21f);
    glVertex2f(-.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .19f);
    glVertex2f(-0.48f, .13f);
    glVertex2f(-.03f, .13f);
    glVertex2f(-.03f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .11f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-.03f, .05f);
    glVertex2f(-.03f, .11f);

    glEnd();

     glBegin(GL_QUADS);   //tea garden7
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.02f);
    glVertex2f(-0.03f, -.02f);
    glVertex2f(-0.03f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.21f);
    glVertex2f(-.03f, -.21f);
    glVertex2f(-.03f,-.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.19f);
    glVertex2f(-0.48f, -.13f);
    glVertex2f(-.03f, -.13f);
    glVertex2f(-.03f, -.19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.11f);
    glVertex2f(-0.48f, -.05f);
    glVertex2f(-.03f, -.05f);
    glVertex2f(-.03f, -.11f);

    glEnd();



    glTranslatef(.48f,0.0f,0.0f);
    glBegin(GL_QUADS);   //tea garden4
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-0.03f, .05f);
    glVertex2f(-0.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .21f);
    glVertex2f(-.03f, .21f);
    glVertex2f(-.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .19f);
    glVertex2f(-0.48f, .13f);
    glVertex2f(-.03f, .13f);
    glVertex2f(-.03f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .11f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-.03f, .05f);
    glVertex2f(-.03f, .11f);

    glEnd();
    glLoadIdentity();

    glBegin(GL_LINES); //tree1
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();

    glTranslatef(0.8f,0.0f,0.0f);
    glBegin(GL_LINES); //tree2
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(-0.1f,0.08f,0.0f);
    glBegin(GL_LINES); //tree3
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-0.2f,0.01f,0.0f);
    glBegin(GL_LINES); //tree4
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.5f,0.08f,0.0f);
    glBegin(GL_LINES); //tree5
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6f,0.03f,0.0f);
    glBegin(GL_LINES); //tree6
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.3f,0.01f,0.0f);
    glBegin(GL_LINES); //tree7
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.9f,0.08f,0.0f);
    glBegin(GL_LINES); //tree8
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0f,0.06f,0.0f);
    glBegin(GL_LINES); //tree9
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.3f,0.08f,0.0f);
    glBegin(GL_LINES); //tree10
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.4f,0.05f,0.0f);
    glBegin(GL_LINES); //tree11
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.6f,0.05f,0.0f);
    glBegin(GL_LINES); //tree12
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8f,-0.2f,0.0f);
    glBegin(GL_LINES); //tree13
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.9f,-0.4f,0.0f);
    glBegin(GL_LINES); //tree14
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.95f,-0.2f,0.0f);
    glBegin(GL_LINES); //tree14
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.5f,-0.2f,0.0f);
    glBegin(GL_LINES); //tree15
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.3f,-0.25f,0.0f);
    glBegin(GL_LINES); //tree16
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.04f,-0.35f,0.0f);
    glBegin(GL_LINES); //tree17
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.17f,-0.29f,0.0f);
    glBegin(GL_LINES); //tree18
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-0.1f,-0.3f,0.0f);
    glBegin(GL_LINES); //tree19
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glBegin(GL_LINES); //gatebar
    glColor3ub(0,0,0);
    glVertex2f(-0.05f,-0.18f);
    glVertex2f(-0.05f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.35f,-0.18f);
    glVertex2f(-0.35f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.5f,-0.18f);
    glVertex2f(-0.5f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.65f,-0.18f);
    glVertex2f(-0.65f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.8f,-0.18f);
    glVertex2f(-0.8f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.95f,-0.18f);
    glVertex2f(-0.95f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.18f,-0.18f);
    glVertex2f(-0.18f,-0.3f);
    glEnd();

     glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(0.13f,-0.18f);
    glVertex2f(0.13f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bat
    glColor3ub(0,0,0);
    glVertex2f(0.35f,-0.18f);
    glVertex2f(0.35f,-0.3f);
    glEnd();



    glBegin(GL_LINES); //gate_line

    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(0.55f, -0.25f);

    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES); //main gate stand_1
    glColor3ub(0,0,0);
    glVertex2f(0.55f,-0.3f);
    glVertex2f(0.55f,-0.12);
    glEnd();

    glBegin(GL_LINES); //main gate stand_2
    glColor3ub(0,0,0);
    glVertex2f(0.85f,-0.3f);
    glVertex2f(0.85f,-0.12);
    glEnd();

    glBegin(GL_QUADS); //banner
    glColor3ub(255,255,255);
    glVertex2f(0.55f,-0.05f);
    glVertex2f(0.55f,-0.13f);
    glVertex2f(0.85f,-0.13f);
    glVertex2f(0.85f,-0.05f);
    glEnd();

    glBegin(GL_LINES); //gate1

    glColor3ub(0, 0, 0);
    glVertex2f(0.55f, -0.25f);
    glVertex2f(0.65f, -0.18f);

    glBegin(GL_LINES); //gate

    glColor3ub(0, 0, 0);
    glVertex2f(0.65f, -0.13f);
    glVertex2f(0.65f, -0.19f);


    glBegin(GL_LINES); //gate2

    glColor3ub(0, 0, 0);
    glVertex2f(0.55f, -0.2f);
    glVertex2f(0.65f, -0.13f);



    glBegin(GL_LINES); //gate3

    glColor3ub(0, 0, 0);
    glVertex2f(0.85f, -0.25f);
    glVertex2f(0.75f, -0.18f);

    glBegin(GL_LINES); //gate

    glColor3ub(0, 0, 0);
    glVertex2f(0.75f, -0.13f);
    glVertex2f(0.75f, -0.19f);


    glBegin(GL_LINES); //gate4

    glColor3ub(0, 0, 0);
    glVertex2f(0.85f, -0.2f);
    glVertex2f(0.75f, -0.13f);



    glBegin(GL_LINES); //gate_line

    glColor3ub(0, 0, 0);
    glVertex2f(0.85f, -0.2f);
    glVertex2f(1.0f, -0.2f);

    glColor3ub(0, 0, 0);
    glVertex2f(0.85f, -0.25f);
    glVertex2f(1.0f, -0.25f);
    glEnd();



    /////train start
     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.87f, -0.32f);
    glVertex2f(0.87f, -0.42f);
    glVertex2f(0.9f, -0.42f);
    glVertex2f(0.9f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.77f, -0.32f);
    glVertex2f(0.77f, -0.42f);
    glVertex2f(0.8f, -0.42f);
    glVertex2f(0.8f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.67f, -0.32f);
    glVertex2f(0.67f, -0.42f);
    glVertex2f(0.7f, -0.42f);
    glVertex2f(0.7f, -0.32f);
    glEnd();


     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.57f, -0.32f);
    glVertex2f(0.57f, -0.42f);
    glVertex2f(0.6f, -0.42f);
    glVertex2f(0.6f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //field
    glColor3ub(191, 128, 64);
    glVertex2f(0.47f, -0.32f);
    glVertex2f(0.47f, -0.42f);
    glVertex2f(0.5f, -0.42f);
    glVertex2f(0.5f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.37f, -0.32f);
    glVertex2f(0.37f, -0.42f);
    glVertex2f(0.4f, -0.42f);
    glVertex2f(0.4f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.27f, -0.32f);
    glVertex2f(0.27f, -0.42f);
    glVertex2f(0.3f, -0.42f);
    glVertex2f(0.3f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.17f, -0.32f);
    glVertex2f(0.17f, -0.42f);
    glVertex2f(0.2f, -0.42f);
    glVertex2f(0.2f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.07f, -0.32f);
    glVertex2f(0.07f, -0.42f);
    glVertex2f(0.1f, -0.42f);
    glVertex2f(0.1f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.03f, -0.32f);
    glVertex2f(-0.03f, -0.42f);
    glVertex2f(0.0f, -0.42f);
    glVertex2f(0.0f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.13f, -0.32f);
    glVertex2f(-0.13f, -0.42f);
    glVertex2f(-0.1f, -0.42f);
    glVertex2f(-0.1f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.23f, -0.32f);
    glVertex2f(-0.23f, -0.42f);
    glVertex2f(-0.2f, -0.42f);
    glVertex2f(-0.2f, -0.32f);
    glEnd();


     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.33f, -0.32f);
    glVertex2f(-0.33f, -0.42f);
    glVertex2f(-0.3f, -0.42f);
    glVertex2f(-0.3f, -0.32f);
    glEnd();


     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.43f, -0.32f);
    glVertex2f(-0.43f, -0.42f);
    glVertex2f(-0.4f, -0.42f);
    glVertex2f(-0.4f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.53f, -0.32f);
    glVertex2f(-0.53f, -0.42f);
    glVertex2f(-0.5f, -0.42f);
    glVertex2f(-0.5f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.63f, -0.32f);
    glVertex2f(-0.63f, -0.42f);
    glVertex2f(-0.6f, -0.42f);
    glVertex2f(-0.6f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.73f, -0.32f);
    glVertex2f(-0.73f, -0.42f);
    glVertex2f(-0.7f, -0.42f);
    glVertex2f(-0.7f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.83f, -0.32f);
    glVertex2f(-0.83f, -0.42f);
    glVertex2f(-0.8f, -0.42f);
    glVertex2f(-0.8f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.93f, -0.32f);
    glVertex2f(-0.93f, -0.42f);
    glVertex2f(-0.9f, -0.42f);
    glVertex2f(-0.9f, -0.32f);
    glEnd();



    glBegin(GL_LINES); //rail_line

    glColor3ub(102, 26, 0);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(1.0f, -0.35f);

    glColor3ub(102, 26, 0);
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(1.0f, -0.4f);


    glEnd();
    glPushMatrix();
    glTranslatef(position3,0,0);

    glBegin(GL_TRIANGLE_FAN);   //train  tair 1
		for(j = 0; j <= lineAmount1;j++) {
			glVertex2f(
			    a + (radius1 * cos(j *  twicePi / lineAmount1)),
			    b + (radius1 * sin(j * twicePi / lineAmount1))
			);
		}
	glEnd();


    glBegin(GL_TRIANGLE_FAN);   //train  tair 2
		for(k = 0; k <= lineAmount1;k++) {
			glVertex2f(
			    c + (radius1 * cos(k *  twicePi / lineAmount1)),
			    d + (radius1 * sin(k * twicePi / lineAmount1))
			);
		}
	glEnd();

	 glBegin(GL_TRIANGLE_FAN);   //train  tair 3
		for(l = 0; l <= lineAmount1;l++) {
			glVertex2f(
			    g + (radius1 * cos(l *  twicePi / lineAmount1)),
			    h + (radius1 * sin(l * twicePi / lineAmount1))
			);
		}
	glEnd();

	 glBegin(GL_TRIANGLE_FAN);   //train  tair 4
		for(m = 0; m <= lineAmount1;m++) {
			glVertex2f(
			    e + (radius1 * cos(m *  twicePi / lineAmount1)),
			    f + (radius1 * sin(m * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);   //train  tair 5
		for(n = 0; n <= lineAmount1;n++) {
			glVertex2f(
			    o + (radius1 * cos(n *  twicePi / lineAmount1)),
			    p + (radius1 * sin(n * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);   //train  tair 5
		for(t = 0; t <= lineAmount1;t++) {
			glVertex2f(
			    q + (radius1 * cos(t *  twicePi / lineAmount1)),
			    r + (radius1 * sin(t * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);   //train  tair 6
        for(e1 = 0; e1 <= lineAmount1;e1++) {
            glVertex2f(
                o1 + (radius1 * cos(e1 *  twicePi / lineAmount1)),
                p1 + (radius1 * sin(e1 * twicePi / lineAmount1))
            );
        }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);   //train  tair 7
        for(j1 = 0; j1 <= lineAmount1;j1++) {
            glVertex2f(
                q1 + (radius1 * cos(j1 *  twicePi / lineAmount1)),
                p1 + (radius1 * sin(j1 * twicePi / lineAmount1))
            );
        }
    glEnd();


    glBegin(GL_QUADS);  //train 1 body
    glColor3ub(255, 255, 255);
    glVertex2f(0.3f, -0.15);
    glVertex2f(0.3f, -0.35f);
    glVertex2f(0.6f, -0.35f);
    glVertex2f(0.6f, -0.15);
    glEnd();

    glBegin(GL_QUADS);  //train 1 body side
    glColor3ub(230, 57, 0);
    glVertex2f(0.6f, -0.25);
    glVertex2f(0.6f, -0.35f);
    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.7f, -0.25);
    glEnd();

     glBegin(GL_QUADS);  //train 1 bash
    glColor3ub(51, 153, 102);
    glVertex2f(0.65f, -0.2);
    glVertex2f(0.65f, -0.25f);
    glVertex2f(0.68f, -0.25f);
    glVertex2f(0.68f, -0.2);
    glEnd();

     glBegin(GL_QUADS);  //train 1 window
    glColor3ub(0, 153, 0);
    glVertex2f(0.4f, -0.2);
    glVertex2f(0.4f, -0.25f);
    glVertex2f(0.55f, -0.25f);
    glVertex2f(0.55f, -0.2);
    glEnd();




    glBegin(GL_QUADS);  //train 1 and 2 connection
    glColor3ub(77, 77, 51);
    glVertex2f(0.25f, -0.32);
    glVertex2f(0.25f, -0.35f);
    glVertex2f(0.3f, -0.35f);
    glVertex2f(0.3f, -0.32);
    glEnd();
// train 2nd bogi

     glBegin(GL_QUADS);  //train 2 body
    glColor3ub(255, 255,255);
    glVertex2f(-0.1f, -0.15);
    glVertex2f(-0.1f, -0.35f);
    glVertex2f(0.25f, -0.35f);
    glVertex2f(0.25f, -0.15);
    glEnd();

     glBegin(GL_QUADS);  //train 2 window
    glColor3ub(0, 153, 0);
    glVertex2f(-0.05f, -0.2);
    glVertex2f(-0.05f, -0.25f);
    glVertex2f(0.1f, -0.25f);
    glVertex2f(0.1f, -0.2);
    glEnd();

    glBegin(GL_QUADS);  //train 2 and 3 connection
    glColor3ub(77, 77, 51);
    glVertex2f(-0.15f, -0.32);
    glVertex2f(-0.15f, -0.35f);
    glVertex2f(-0.1f, -0.35f);
    glVertex2f(-0.1f, -0.32);
    glEnd();

    // train 3rd bogi start

     glBegin(GL_QUADS);  //train 3 body
    glColor3ub(255,255,255);
    glVertex2f(-0.5f, -0.15);
    glVertex2f(-0.5f, -0.35f);
    glVertex2f(-0.15f, -0.35f);
    glVertex2f(-0.15f, -0.15);
    glEnd();


    glBegin(GL_QUADS);  //train 3  window
    glPushMatrix();
    glTranslatef(position2,0,0);
    glColor3ub(0,153,0);
    glVertex2f(-0.49f, -0.2);
    glVertex2f(-0.49f, -0.25f);
    glVertex2f(-0.37f, -0.25f);
    glVertex2f(-0.37f, -0.2);
    glEnd();

     //4th bogi start

     glBegin(GL_QUADS);  //train 3 and 4 connection
    glColor3ub(77, 77, 51);
    glVertex2f(-0.5f, -0.32);
    glVertex2f(-0.5f, -0.35f);
    glVertex2f(-0.55f, -0.35f);
    glVertex2f(-0.55f, -0.32);
    glEnd();


     glBegin(GL_QUADS);  //train 4 body
    glColor3ub(255,255,255);
    glVertex2f(-0.55f, -0.15);
    glVertex2f(-0.55f, -0.35f);
    glVertex2f(-0.85f, -0.35f);
    glVertex2f(-0.85f, -0.15);
    glEnd();


    glBegin(GL_QUADS);  //train 4 window
    glTranslatef(position2,0,0);
    glColor3ub(0,153,0);
    glVertex2f(-0.6f, -0.2);
    glVertex2f(-0.6f, -0.25f);
    glVertex2f(-0.7f, -0.25f);
    glVertex2f(-0.7f, -0.2);
    glEnd();

    glPopMatrix();
    glLoadIdentity();



    glBegin(GL_QUADS);   //road_bit
    glColor3ub(102, 102, 102);
    glVertex2f(1.0f, -0.99f);
    glVertex2f(1.0f, -0.43f);
    glVertex2f(-1.0f, -0.43f);
    glVertex2f(-1.0f, -0.99f);
    glEnd();



     //light start


    glTranslatef(0.1,0.5,0); //light3
    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);
    glEnd();

    glLoadIdentity();

    glTranslatef(1.4,0.5,0); //light4
    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);
    glEnd();
    glLoadIdentity();


//light end

    glBegin(GL_QUADS);   //road
    glColor3ub(64, 64, 64);
    glVertex2f(1.0f, -0.9f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f, -0.9f);
    glEnd();


     glBegin(GL_QUADS);  //road bar
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f, -0.7);
    glVertex2f(-0.8f, -0.72f);
    glVertex2f(-0.5f, -0.72f);
    glVertex2f(-0.5f, -0.7);
    glEnd();

     glBegin(GL_QUADS);  //road bar 2
    glColor3ub(255, 255, 255);
    glVertex2f(0.1f, -0.7);
    glVertex2f(0.1f, -0.72f);
    glVertex2f(-0.2, -0.72f);
    glVertex2f(-0.2, -0.7);
    glEnd();

     glBegin(GL_QUADS);  //road bar 3
    glColor3ub(255, 255, 255);
    glVertex2f(0.9f, -0.7);
    glVertex2f(0.9f, -0.72f);
    glVertex2f(0.6, -0.72f);
    glVertex2f(0.6, -0.7);
    glEnd();




//car  start left

    glPushMatrix();
    glTranslatef(position,0,0);
    glBegin(GL_QUADS);   //left car up
    glColor3ub(153, 204, 255);
    glVertex2f(-0.7f, -0.55f);
    glVertex2f(-0.73f, -0.6f);
    glVertex2f(-0.57f, -0.6f);
    glVertex2f(-0.6f, -0.55f);
    glEnd();

    glBegin(GL_QUADS);   //left car down
    glColor3ub(204, 51, 0);
    glVertex2f(-0.77f, -0.6f);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.53f, -0.68f);
    glVertex2f(-0.53f, -0.6f);
    glEnd();

glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //left car tire 1
		for(a1 = 0; a1 <= lineAmount1;a1++) {
			glVertex2f(
			    u + (radius2 * cos(a1 *  twicePi / lineAmount1)),
			    v + (radius2 * sin(a1 * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //left car tire 2
		for(b1 = 0; b1 <= lineAmount1;b1++) {
			glVertex2f(
			    z + (radius2 * cos(b1 *  twicePi / lineAmount1)),
			    v + (radius2 * sin(b1 * twicePi / lineAmount1))
			);
		}
	glEnd();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position2,0,0);

	//right car


	 glBegin(GL_QUADS);   //right car up
    glColor3ub(153, 204, 255);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.27f, -0.75f);
     glVertex2f(0.4f, -0.75f);
    glVertex2f(0.37f, -0.7f);

    glEnd();

     glBegin(GL_QUADS);   //right car down
    glColor3ub(102, 0, 255);
    glVertex2f(0.23f, -0.75f);
    glVertex2f(0.23f, -0.82f);
    glVertex2f(0.44f, -0.82f);
    glVertex2f(0.44f, -0.75f);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //right car tair 1
		for(c1 = 0; c1 <= lineAmount1;c1++) {
			glVertex2f(
			    u1 + (radius2 * cos(c1 *  twicePi / lineAmount1)),
			    v1 + (radius2 * sin(c1 * twicePi / lineAmount1))
			);
		}
	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //right car tair 2
		for(d1 = 0; d1 <= lineAmount1;d1++) {
			glVertex2f(
			    z1 + (radius2 * cos(d1 *  twicePi / lineAmount1)),
			    v1 + (radius2 * sin(d1 * twicePi / lineAmount1))
			);
		}
	glEnd();
	glPopMatrix();
    glLoadIdentity();

     glBegin(GL_QUADS);   //light1
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
     glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);

    glEnd();


    glTranslatef(1.3,0.0,0); //light2
    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);

    glEnd();

    glLoadIdentity();
    glFlush();

}
void rainyday() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5.5);
    int i;

    GLfloat a=.4f;
    GLfloat b=-0.37f;
    GLfloat c=.62f;
    GLfloat d=-0.37f;
    GLfloat e=-0.03f;
    GLfloat f=-0.37f;
    GLfloat g=0.16f;
    GLfloat h=-0.37f;

    GLfloat o=-0.43f;
    GLfloat p=-0.37f;
    GLfloat q=-0.24f;
    GLfloat r=-0.37f;

    GLfloat u=-0.73f;
    GLfloat v=-0.68f;
    GLfloat z=-0.57f;

    GLfloat u1=0.27f;
    GLfloat v1=-0.82f;
    GLfloat z1=0.4f;

    GLfloat o1=-0.62f;
    GLfloat p1=-0.37f;
    GLfloat q1=-0.78f;


    GLfloat radius1 =.03f;
    GLfloat radius2 =.031f; //for car
	int j;
	int k;
	int l;
	int m;
	int n;
	int t;
	int a1;
	int b1;
	int c1;
	int d1;
	int e1;
    int j1;

	int lineAmount1 = 100;


    glBegin(GL_QUADS);   //sky
    glColor3ub(102, 102, 102);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(1.0f, 1.0f);
    glEnd();


    glBegin(GL_QUADS);  //field
    glColor3ub(204, 163, 0);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();

    /*glBegin(GL_LINES); //axis

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(0.0f, -1.0f);


    glEnd();*/

    GLfloat x=-.8f,y=.8f;   //sun
    GLfloat radius =0.15f;
    int triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;


    glColor3ub(153, 153, 153); //cloud1

    circle(-1.0f, 0.7f, 0.05f);
    circle(-0.9f, 0.7f, 0.05f);
    circle(-0.95f, 0.73f, 0.05f);
    circle(-0.95f, 0.68f, 0.05f);

    glColor3ub(153, 153, 153); //cloud2

    circle(-0.7f, 0.7f, 0.05f);
    circle(-0.6f, 0.7f, 0.05f);
    circle(-0.65f, 0.73f, 0.05f);
    circle(-0.65f, 0.68f, 0.05f);

    glColor3ub(153, 153, 153); //cloud3

    circle(-0.4f, 0.8f, 0.05f);
    circle(-0.3f, 0.8f, 0.05f);
    circle(-0.35f, 0.83f, 0.05f);
    circle(-0.35f, 0.78f, 0.05f);

    glColor3ub(153, 153, 153); //cloud4

    circle(0.1f, 0.6f, 0.05f);
    circle(0.2f, 0.6f, 0.05f);
    circle(0.15f, 0.63f, 0.05f);
    circle(0.15f, 0.58f, 0.05f);

    glColor3ub(153, 153, 153); //cloud5

    circle(0.7f, 0.7f, 0.05f);
    circle(0.6f, 0.7f, 0.05f);
    circle(0.65f, 0.73f, 0.05f);
    circle(0.65f, 0.68f, 0.05f);



    //glPopMatrix();
    glLoadIdentity();

    glBegin(GL_TRIANGLES); //hill1
    glColor3ub(0, 102, 0);

    glVertex2f(1.0, 0.4);
    glVertex2f(0.8, 0.6);
    glVertex2f(0.6, 0.4);

    glVertex2f(0.6, 0.4);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.2, 0.4);

    glVertex2f(0.5, 0.4);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.6, 0.5);

    glEnd();

    glBegin(GL_TRIANGLES); //hill2
    glColor3ub(0, 179, 0);

    glVertex2f(1.05, 0.35);
    glVertex2f(0.85, 0.55);
    glVertex2f(0.65, 0.35);

    glVertex2f(0.65, 0.35);
    glVertex2f(0.45, 0.55);
    glVertex2f(0.25, 0.35);

    glVertex2f(0.55, 0.35);
    glVertex2f(0.75, 0.35);
    glVertex2f(0.65, 0.45);

    glEnd();


    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 102, 0);

    glVertex2f(-1.0, 0.4);
    glVertex2f(-0.8, 0.6);
    glVertex2f(-0.6, 0.4);

    glVertex2f(-0.6, 0.4);
    glVertex2f(-0.4, 0.6);
    glVertex2f(-0.2, 0.4);

    glVertex2f(-0.5, 0.4);
    glVertex2f(-0.7, 0.4);
    glVertex2f(-0.6, 0.5);

    glEnd();

    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 179, 0);

    glVertex2f(-1.05, 0.35);
    glVertex2f(-0.85, 0.55);
    glVertex2f(-0.65, 0.35);

    glVertex2f(-0.65, 0.35);
    glVertex2f(-0.45, 0.55);
    glVertex2f(-0.25, 0.35);

    glVertex2f(-0.55, 0.35);
    glVertex2f(-0.75, 0.35);
    glVertex2f(-0.65, 0.45);

    glEnd();

    glTranslatef(-0.65f,0.0f,0.0f);
    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 102, 0);

    glVertex2f(1.0, 0.4);
    glVertex2f(0.8, 0.6);
    glVertex2f(0.6, 0.4);

    glVertex2f(0.6, 0.4);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.2, 0.4);

    glVertex2f(0.5, 0.4);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.6, 0.5);

    glEnd();
    glLoadIdentity();


    glTranslatef(-0.64f,0.0f,0.0f);
    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 179, 0);

    glVertex2f(1.0, 0.35);
    glVertex2f(0.8, 0.55);
    glVertex2f(0.6, 0.35);

    glVertex2f(0.6, 0.35);
    glVertex2f(0.4, 0.55);
    glVertex2f(0.2, 0.35);

    glVertex2f(0.5, 0.35);
    glVertex2f(0.7, 0.35);
    glVertex2f(0.6, 0.45);

    glEnd();
    glLoadIdentity();




    glBegin(GL_QUADS);   //tea garden
    glColor3ub(0, 179, 60);
    glVertex2f(-0.98f, .28f);
    glVertex2f(-0.98f, .05f);
    glVertex2f(-.5f, .05f);
    glVertex2f(-.5f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, .28f);
    glVertex2f(-0.98f, .21f);
    glVertex2f(-.5f, .21f);
    glVertex2f(-.5f, .28f);
    glEnd();


    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, .19f);
    glVertex2f(-0.98f, .13f);
    glVertex2f(-.5f, .13f);
    glVertex2f(-.5f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, .11f);
    glVertex2f(-0.98f, .05f);
    glVertex2f(-.5f, .05f);
    glVertex2f(-.5f, .11f);

    glEnd();

     glBegin(GL_QUADS);   //tea garden5
    glColor3ub(0, 179, 60);
    glVertex2f(-0.98f, -.28f);
    glVertex2f(-0.98f, -.02f);
    glVertex2f(-.5f, -.02f);
    glVertex2f(-.5f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, -.28f);
    glVertex2f(-0.98f, -.21f);
    glVertex2f(-.5f, -.21f);
    glVertex2f(-.5f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, -.19f);
    glVertex2f(-0.98f, -.13f);
    glVertex2f(-.5f, -.13f);
    glVertex2f(-.5f, -.19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, -.11f);
    glVertex2f(-0.98f, -.05f);
    glVertex2f(-.5f, -.05f);
    glVertex2f(-.5f, -.11f);

    glEnd();


    glBegin(GL_QUADS);   //tea garden2
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-0.03f, .05f);
    glVertex2f(-0.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .21f);
    glVertex2f(-.03f, .21f);
    glVertex2f(-.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .19f);
    glVertex2f(-0.48f, .13f);
    glVertex2f(-.03f, .13f);
    glVertex2f(-.03f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .11f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-.03f, .05f);
    glVertex2f(-.03f, .11f);

    glEnd();

     glBegin(GL_QUADS);   //tea garden6
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.02f);
    glVertex2f(-0.03f, -.02f);
    glVertex2f(-0.03f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.21f);
    glVertex2f(-.03f, -.21f);
    glVertex2f(-.03f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.19f);
    glVertex2f(-0.48f, -.13f);
    glVertex2f(-.03f, -.13f);
    glVertex2f(-.03f, -.19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.11f);
    glVertex2f(-0.48f, -.05f);
    glVertex2f(-.03f, -.05f);
    glVertex2f(-.03f, -.11f);

    glEnd();

    glTranslatef(.5f,0.0f,0.0f);
    glBegin(GL_QUADS);   //tea garden3
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-0.03f, .05f);
    glVertex2f(-0.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .21f);
    glVertex2f(-.03f, .21f);
    glVertex2f(-.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .19f);
    glVertex2f(-0.48f, .13f);
    glVertex2f(-.03f, .13f);
    glVertex2f(-.03f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .11f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-.03f, .05f);
    glVertex2f(-.03f, .11f);

    glEnd();

     glBegin(GL_QUADS);   //tea garden7
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.02f);
    glVertex2f(-0.03f, -.02f);
    glVertex2f(-0.03f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.21f);
    glVertex2f(-.03f, -.21f);
    glVertex2f(-.03f,-.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.19f);
    glVertex2f(-0.48f, -.13f);
    glVertex2f(-.03f, -.13f);
    glVertex2f(-.03f, -.19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.11f);
    glVertex2f(-0.48f, -.05f);
    glVertex2f(-.03f, -.05f);
    glVertex2f(-.03f, -.11f);

    glEnd();



    glTranslatef(.48f,0.0f,0.0f);
    glBegin(GL_QUADS);   //tea garden4
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-0.03f, .05f);
    glVertex2f(-0.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .21f);
    glVertex2f(-.03f, .21f);
    glVertex2f(-.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .19f);
    glVertex2f(-0.48f, .13f);
    glVertex2f(-.03f, .13f);
    glVertex2f(-.03f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .11f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-.03f, .05f);
    glVertex2f(-.03f, .11f);

    glEnd();
    glLoadIdentity();

    glBegin(GL_LINES); //tree1
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();

    glTranslatef(0.8f,0.0f,0.0f);
    glBegin(GL_LINES); //tree2
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(-0.1f,0.08f,0.0f);
    glBegin(GL_LINES); //tree3
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-0.2f,0.01f,0.0f);
    glBegin(GL_LINES); //tree4
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.5f,0.08f,0.0f);
    glBegin(GL_LINES); //tree5
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6f,0.03f,0.0f);
    glBegin(GL_LINES); //tree6
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.3f,0.01f,0.0f);
    glBegin(GL_LINES); //tree7
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.9f,0.08f,0.0f);
    glBegin(GL_LINES); //tree8
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0f,0.06f,0.0f);
    glBegin(GL_LINES); //tree9
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.3f,0.08f,0.0f);
    glBegin(GL_LINES); //tree10
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.4f,0.05f,0.0f);
    glBegin(GL_LINES); //tree11
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.6f,0.05f,0.0f);
    glBegin(GL_LINES); //tree12
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8f,-0.2f,0.0f);
    glBegin(GL_LINES); //tree13
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.9f,-0.4f,0.0f);
    glBegin(GL_LINES); //tree14
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.95f,-0.2f,0.0f);
    glBegin(GL_LINES); //tree14
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.5f,-0.2f,0.0f);
    glBegin(GL_LINES); //tree15
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.3f,-0.25f,0.0f);
    glBegin(GL_LINES); //tree16
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.04f,-0.35f,0.0f);
    glBegin(GL_LINES); //tree17
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.17f,-0.29f,0.0f);
    glBegin(GL_LINES); //tree18
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-0.1f,-0.3f,0.0f);
    glBegin(GL_LINES); //tree19
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glBegin(GL_LINES); //gatebar
    glColor3ub(0,0,0);
    glVertex2f(-0.05f,-0.18f);
    glVertex2f(-0.05f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.35f,-0.18f);
    glVertex2f(-0.35f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.5f,-0.18f);
    glVertex2f(-0.5f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.65f,-0.18f);
    glVertex2f(-0.65f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.8f,-0.18f);
    glVertex2f(-0.8f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.95f,-0.18f);
    glVertex2f(-0.95f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.18f,-0.18f);
    glVertex2f(-0.18f,-0.3f);
    glEnd();

     glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(0.13f,-0.18f);
    glVertex2f(0.13f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bat
    glColor3ub(0,0,0);
    glVertex2f(0.35f,-0.18f);
    glVertex2f(0.35f,-0.3f);
    glEnd();



    glBegin(GL_LINES); //gate_line

    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(0.55f, -0.25f);

    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES); //main gate stand_1
    glColor3ub(0,0,0);
    glVertex2f(0.55f,-0.3f);
    glVertex2f(0.55f,-0.12);
    glEnd();

    glBegin(GL_LINES); //main gate stand_2
    glColor3ub(0,0,0);
    glVertex2f(0.85f,-0.3f);
    glVertex2f(0.85f,-0.12);
    glEnd();

    glBegin(GL_QUADS); //banner
    glColor3ub(255,255,255);
    glVertex2f(0.55f,-0.05f);
    glVertex2f(0.55f,-0.13f);
    glVertex2f(0.85f,-0.13f);
    glVertex2f(0.85f,-0.05f);
    glEnd();

    glBegin(GL_LINES); //gate1

    glColor3ub(0, 0, 0);
    glVertex2f(0.55f, -0.25f);
    glVertex2f(0.65f, -0.18f);

    glBegin(GL_LINES); //gate

    glColor3ub(0, 0, 0);
    glVertex2f(0.65f, -0.13f);
    glVertex2f(0.65f, -0.19f);


    glBegin(GL_LINES); //gate2

    glColor3ub(0, 0, 0);
    glVertex2f(0.55f, -0.2f);
    glVertex2f(0.65f, -0.13f);



    glBegin(GL_LINES); //gate3

    glColor3ub(0, 0, 0);
    glVertex2f(0.85f, -0.25f);
    glVertex2f(0.75f, -0.18f);

    glBegin(GL_LINES); //gate

    glColor3ub(0, 0, 0);
    glVertex2f(0.75f, -0.13f);
    glVertex2f(0.75f, -0.19f);


    glBegin(GL_LINES); //gate4

    glColor3ub(0, 0, 0);
    glVertex2f(0.85f, -0.2f);
    glVertex2f(0.75f, -0.13f);



    glBegin(GL_LINES); //gate_line

    glColor3ub(0, 0, 0);
    glVertex2f(0.85f, -0.2f);
    glVertex2f(1.0f, -0.2f);

    glColor3ub(0, 0, 0);
    glVertex2f(0.85f, -0.25f);
    glVertex2f(1.0f, -0.25f);
    glEnd();



    /////train start
     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.87f, -0.32f);
    glVertex2f(0.87f, -0.42f);
    glVertex2f(0.9f, -0.42f);
    glVertex2f(0.9f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.77f, -0.32f);
    glVertex2f(0.77f, -0.42f);
    glVertex2f(0.8f, -0.42f);
    glVertex2f(0.8f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.67f, -0.32f);
    glVertex2f(0.67f, -0.42f);
    glVertex2f(0.7f, -0.42f);
    glVertex2f(0.7f, -0.32f);
    glEnd();


     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.57f, -0.32f);
    glVertex2f(0.57f, -0.42f);
    glVertex2f(0.6f, -0.42f);
    glVertex2f(0.6f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //field
    glColor3ub(191, 128, 64);
    glVertex2f(0.47f, -0.32f);
    glVertex2f(0.47f, -0.42f);
    glVertex2f(0.5f, -0.42f);
    glVertex2f(0.5f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.37f, -0.32f);
    glVertex2f(0.37f, -0.42f);
    glVertex2f(0.4f, -0.42f);
    glVertex2f(0.4f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.27f, -0.32f);
    glVertex2f(0.27f, -0.42f);
    glVertex2f(0.3f, -0.42f);
    glVertex2f(0.3f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.17f, -0.32f);
    glVertex2f(0.17f, -0.42f);
    glVertex2f(0.2f, -0.42f);
    glVertex2f(0.2f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.07f, -0.32f);
    glVertex2f(0.07f, -0.42f);
    glVertex2f(0.1f, -0.42f);
    glVertex2f(0.1f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.03f, -0.32f);
    glVertex2f(-0.03f, -0.42f);
    glVertex2f(0.0f, -0.42f);
    glVertex2f(0.0f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.13f, -0.32f);
    glVertex2f(-0.13f, -0.42f);
    glVertex2f(-0.1f, -0.42f);
    glVertex2f(-0.1f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.23f, -0.32f);
    glVertex2f(-0.23f, -0.42f);
    glVertex2f(-0.2f, -0.42f);
    glVertex2f(-0.2f, -0.32f);
    glEnd();


     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.33f, -0.32f);
    glVertex2f(-0.33f, -0.42f);
    glVertex2f(-0.3f, -0.42f);
    glVertex2f(-0.3f, -0.32f);
    glEnd();


     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.43f, -0.32f);
    glVertex2f(-0.43f, -0.42f);
    glVertex2f(-0.4f, -0.42f);
    glVertex2f(-0.4f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.53f, -0.32f);
    glVertex2f(-0.53f, -0.42f);
    glVertex2f(-0.5f, -0.42f);
    glVertex2f(-0.5f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.63f, -0.32f);
    glVertex2f(-0.63f, -0.42f);
    glVertex2f(-0.6f, -0.42f);
    glVertex2f(-0.6f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.73f, -0.32f);
    glVertex2f(-0.73f, -0.42f);
    glVertex2f(-0.7f, -0.42f);
    glVertex2f(-0.7f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.83f, -0.32f);
    glVertex2f(-0.83f, -0.42f);
    glVertex2f(-0.8f, -0.42f);
    glVertex2f(-0.8f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.93f, -0.32f);
    glVertex2f(-0.93f, -0.42f);
    glVertex2f(-0.9f, -0.42f);
    glVertex2f(-0.9f, -0.32f);
    glEnd();



    glBegin(GL_LINES); //rail_line

    glColor3ub(102, 26, 0);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(1.0f, -0.35f);

    glColor3ub(102, 26, 0);
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(1.0f, -0.4f);


    glEnd();
    glPushMatrix();
    glTranslatef(position3,0,0);

    glBegin(GL_TRIANGLE_FAN);   //train  tair 1
		for(j = 0; j <= lineAmount1;j++) {
			glVertex2f(
			    a + (radius1 * cos(j *  twicePi / lineAmount1)),
			    b + (radius1 * sin(j * twicePi / lineAmount1))
			);
		}
	glEnd();


    glBegin(GL_TRIANGLE_FAN);   //train  tair 2
		for(k = 0; k <= lineAmount1;k++) {
			glVertex2f(
			    c + (radius1 * cos(k *  twicePi / lineAmount1)),
			    d + (radius1 * sin(k * twicePi / lineAmount1))
			);
		}
	glEnd();

	 glBegin(GL_TRIANGLE_FAN);   //train  tair 3
		for(l = 0; l <= lineAmount1;l++) {
			glVertex2f(
			    g + (radius1 * cos(l *  twicePi / lineAmount1)),
			    h + (radius1 * sin(l * twicePi / lineAmount1))
			);
		}
	glEnd();

	 glBegin(GL_TRIANGLE_FAN);   //train  tair 4
		for(m = 0; m <= lineAmount1;m++) {
			glVertex2f(
			    e + (radius1 * cos(m *  twicePi / lineAmount1)),
			    f + (radius1 * sin(m * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);   //train  tair 5
		for(n = 0; n <= lineAmount1;n++) {
			glVertex2f(
			    o + (radius1 * cos(n *  twicePi / lineAmount1)),
			    p + (radius1 * sin(n * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);   //train  tair 5
		for(t = 0; t <= lineAmount1;t++) {
			glVertex2f(
			    q + (radius1 * cos(t *  twicePi / lineAmount1)),
			    r + (radius1 * sin(t * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);   //train  tair 6
        for(e1 = 0; e1 <= lineAmount1;e1++) {
            glVertex2f(
                o1 + (radius1 * cos(e1 *  twicePi / lineAmount1)),
                p1 + (radius1 * sin(e1 * twicePi / lineAmount1))
            );
        }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);   //train  tair 7
        for(j1 = 0; j1 <= lineAmount1;j1++) {
            glVertex2f(
                q1 + (radius1 * cos(j1 *  twicePi / lineAmount1)),
                p1 + (radius1 * sin(j1 * twicePi / lineAmount1))
            );
        }
    glEnd();


    glBegin(GL_QUADS);  //train 1 body
    glColor3ub(255, 255, 255);
    glVertex2f(0.3f, -0.15);
    glVertex2f(0.3f, -0.35f);
    glVertex2f(0.6f, -0.35f);
    glVertex2f(0.6f, -0.15);
    glEnd();

    glBegin(GL_QUADS);  //train 1 body side
    glColor3ub(230, 57, 0);
    glVertex2f(0.6f, -0.25);
    glVertex2f(0.6f, -0.35f);
    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.7f, -0.25);
    glEnd();

     glBegin(GL_QUADS);  //train 1 bash
    glColor3ub(51, 153, 102);
    glVertex2f(0.65f, -0.2);
    glVertex2f(0.65f, -0.25f);
    glVertex2f(0.68f, -0.25f);
    glVertex2f(0.68f, -0.2);
    glEnd();

     glBegin(GL_QUADS);  //train 1 window
    glColor3ub(0, 153, 0);
    glVertex2f(0.4f, -0.2);
    glVertex2f(0.4f, -0.25f);
    glVertex2f(0.55f, -0.25f);
    glVertex2f(0.55f, -0.2);
    glEnd();




    glBegin(GL_QUADS);  //train 1 and 2 connection
    glColor3ub(77, 77, 51);
    glVertex2f(0.25f, -0.32);
    glVertex2f(0.25f, -0.35f);
    glVertex2f(0.3f, -0.35f);
    glVertex2f(0.3f, -0.32);
    glEnd();
// train 2nd bogi

     glBegin(GL_QUADS);  //train 2 body
    glColor3ub(255, 255,255);
    glVertex2f(-0.1f, -0.15);
    glVertex2f(-0.1f, -0.35f);
    glVertex2f(0.25f, -0.35f);
    glVertex2f(0.25f, -0.15);
    glEnd();

     glBegin(GL_QUADS);  //train 2 window
    glColor3ub(0, 153, 0);
    glVertex2f(-0.05f, -0.2);
    glVertex2f(-0.05f, -0.25f);
    glVertex2f(0.1f, -0.25f);
    glVertex2f(0.1f, -0.2);
    glEnd();

    glBegin(GL_QUADS);  //train 2 and 3 connection
    glColor3ub(77, 77, 51);
    glVertex2f(-0.15f, -0.32);
    glVertex2f(-0.15f, -0.35f);
    glVertex2f(-0.1f, -0.35f);
    glVertex2f(-0.1f, -0.32);
    glEnd();

    // train 3rd bogi start

     glBegin(GL_QUADS);  //train 3 body
    glColor3ub(255,255,255);
    glVertex2f(-0.5f, -0.15);
    glVertex2f(-0.5f, -0.35f);
    glVertex2f(-0.15f, -0.35f);
    glVertex2f(-0.15f, -0.15);
    glEnd();


    glBegin(GL_QUADS);  //train 3  window
    glPushMatrix();
    glTranslatef(position2,0,0);
    glColor3ub(0,153,0);
    glVertex2f(-0.49f, -0.2);
    glVertex2f(-0.49f, -0.25f);
    glVertex2f(-0.37f, -0.25f);
    glVertex2f(-0.37f, -0.2);
    glEnd();

     //4th bogi start

     glBegin(GL_QUADS);  //train 3 and 4 connection
    glColor3ub(77, 77, 51);
    glVertex2f(-0.5f, -0.32);
    glVertex2f(-0.5f, -0.35f);
    glVertex2f(-0.55f, -0.35f);
    glVertex2f(-0.55f, -0.32);
    glEnd();


     glBegin(GL_QUADS);  //train 4 body
    glColor3ub(255,255,255);
    glVertex2f(-0.55f, -0.15);
    glVertex2f(-0.55f, -0.35f);
    glVertex2f(-0.85f, -0.35f);
    glVertex2f(-0.85f, -0.15);
    glEnd();


    glBegin(GL_QUADS);  //train 4 window
    glTranslatef(position2,0,0);
    glColor3ub(0,153,0);
    glVertex2f(-0.6f, -0.2);
    glVertex2f(-0.6f, -0.25f);
    glVertex2f(-0.7f, -0.25f);
    glVertex2f(-0.7f, -0.2);
    glEnd();

    glPopMatrix();
    glLoadIdentity();



    glBegin(GL_QUADS);   //road_bit
    glColor3ub(102, 102, 102);
    glVertex2f(1.0f, -0.99f);
    glVertex2f(1.0f, -0.43f);
    glVertex2f(-1.0f, -0.43f);
    glVertex2f(-1.0f, -0.99f);
    glEnd();



     //light start


    glTranslatef(0.1,0.5,0); //light3
    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);
    glEnd();

    glLoadIdentity();

    glTranslatef(1.4,0.5,0); //light4
    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);
    glEnd();
    glLoadIdentity();


//light end

    glBegin(GL_QUADS);   //road
    glColor3ub(64, 64, 64);
    glVertex2f(1.0f, -0.9f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f, -0.9f);
    glEnd();


     glBegin(GL_QUADS);  //road bar
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f, -0.7);
    glVertex2f(-0.8f, -0.72f);
    glVertex2f(-0.5f, -0.72f);
    glVertex2f(-0.5f, -0.7);
    glEnd();

     glBegin(GL_QUADS);  //road bar 2
    glColor3ub(255, 255, 255);
    glVertex2f(0.1f, -0.7);
    glVertex2f(0.1f, -0.72f);
    glVertex2f(-0.2, -0.72f);
    glVertex2f(-0.2, -0.7);
    glEnd();

     glBegin(GL_QUADS);  //road bar 3
    glColor3ub(255, 255, 255);
    glVertex2f(0.9f, -0.7);
    glVertex2f(0.9f, -0.72f);
    glVertex2f(0.6, -0.72f);
    glVertex2f(0.6, -0.7);
    glEnd();




//car  start left

    glPushMatrix();
    glTranslatef(position,0,0);
    glBegin(GL_QUADS);   //left car up
    glColor3ub(153, 204, 255);
    glVertex2f(-0.7f, -0.55f);
    glVertex2f(-0.73f, -0.6f);
    glVertex2f(-0.57f, -0.6f);
    glVertex2f(-0.6f, -0.55f);
    glEnd();

    glBegin(GL_QUADS);   //left car down
    glColor3ub(204, 51, 0);
    glVertex2f(-0.77f, -0.6f);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.53f, -0.68f);
    glVertex2f(-0.53f, -0.6f);
    glEnd();

    glBegin(GL_QUADS); //light
    glColor3ub(255, 255, 102);
    glVertex2f(-0.77f,-0.65f);
    glVertex2f(-0.77f,-0.68f);
    glVertex2f(-0.89f,-0.68f);
    glVertex2f(-0.89f,-0.6f);

    glEnd();

glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //left car tire 1
		for(a1 = 0; a1 <= lineAmount1;a1++) {
			glVertex2f(
			    u + (radius2 * cos(a1 *  twicePi / lineAmount1)),
			    v + (radius2 * sin(a1 * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //left car tire 2
		for(b1 = 0; b1 <= lineAmount1;b1++) {
			glVertex2f(
			    z + (radius2 * cos(b1 *  twicePi / lineAmount1)),
			    v + (radius2 * sin(b1 * twicePi / lineAmount1))
			);
		}
	glEnd();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position2,0,0);

	//right car


	 glBegin(GL_QUADS);   //right car up
    glColor3ub(153, 204, 255);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.27f, -0.75f);
     glVertex2f(0.4f, -0.75f);
    glVertex2f(0.37f, -0.7f);

    glEnd();

     glBegin(GL_QUADS);   //right car down
    glColor3ub(102, 0, 255);
    glVertex2f(0.23f, -0.75f);
    glVertex2f(0.23f, -0.82f);
    glVertex2f(0.44f, -0.82f);
    glVertex2f(0.44f, -0.75f);
    glEnd();

    glBegin(GL_QUADS);   //light
    glColor3ub(255, 255, 102);
    glVertex2f(0.44f, -0.8f);
    glVertex2f(0.44f, -0.82f);
    glVertex2f(0.6f, -0.82f);
    glVertex2f(0.6f, -0.73f);
    glEnd();


    glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //right car tair 1
		for(c1 = 0; c1 <= lineAmount1;c1++) {
			glVertex2f(
			    u1 + (radius2 * cos(c1 *  twicePi / lineAmount1)),
			    v1 + (radius2 * sin(c1 * twicePi / lineAmount1))
			);
		}
	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //right car tair 2
		for(d1 = 0; d1 <= lineAmount1;d1++) {
			glVertex2f(
			    z1 + (radius2 * cos(d1 *  twicePi / lineAmount1)),
			    v1 + (radius2 * sin(d1 * twicePi / lineAmount1))
			);
		}
	glEnd();
	glPopMatrix();
    glLoadIdentity();

     glBegin(GL_QUADS);   //light1
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
     glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);

    glEnd();


    glTranslatef(1.3,0.0,0); //light2
    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);

    glEnd();

    glLoadIdentity();

    glFlush();



}
void night() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5.5);
    int i;

    GLfloat a=.4f;
    GLfloat b=-0.37f;
    GLfloat c=.62f;
    GLfloat d=-0.37f;
    GLfloat e=-0.03f;
    GLfloat f=-0.37f;
    GLfloat g=0.16f;
    GLfloat h=-0.37f;

    GLfloat o=-0.43f;
    GLfloat p=-0.37f;
    GLfloat q=-0.24f;
    GLfloat r=-0.37f;

    GLfloat u=-0.73f;
    GLfloat v=-0.68f;
    GLfloat z=-0.57f;

     GLfloat u1=0.27f;
    GLfloat v1=-0.82f;
    GLfloat z1=0.4f;

    GLfloat o1=-0.62f;
    GLfloat p1=-0.37f;
    GLfloat q1=-0.78f;


    GLfloat radius1 =.03f;
    GLfloat radius2 =.031f; //for car
	int j;
	int k;
	int l;
	int m;
	int n;
	int t;
	int a1;
	int b1;
	int c1;
	int d1;
	int e1;
    int j1;

	int lineAmount1 = 100;


    glBegin(GL_QUADS);   //sky
    glColor3ub(0, 0, 77);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.4f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(1.0f, 1.0f);
    glEnd();

    glBegin(GL_QUADS);  //field
    glColor3ub(128, 85, 0);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();

    /*glBegin(GL_LINES); //axis

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(0.0f, -1.0f);


    glEnd();*/

    GLfloat x=.8f,y=.8f;   //sun
    GLfloat radius =0.15f;
    int triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 230);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++)
            {
            glVertex2f
            (
                x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
            }
    glEnd();
    glPushMatrix();
    glTranslatef(position1,0,0);


    glColor3ub(0, 89, 179); //cloud2

    circle(-1.0f, 0.7f, 0.05f);
    circle(-0.9f, 0.7f, 0.05f);
    circle(-0.95f, 0.73f, 0.05f);
    circle(-0.95f, 0.68f, 0.05f);

    glColor3ub(0, 89, 179); //cloud2

    circle(-0.7f, 0.7f, 0.05f);
    circle(-0.6f, 0.7f, 0.05f);
    circle(-0.65f, 0.73f, 0.05f);
    circle(-0.65f, 0.68f, 0.05f);

    glColor3ub(0, 89, 179); //cloud3

    circle(-0.4f, 0.8f, 0.05f);
    circle(-0.3f, 0.8f, 0.05f);
    circle(-0.35f, 0.83f, 0.05f);
    circle(-0.35f, 0.78f, 0.05f);

    glColor3ub(0, 89, 179); //cloud4

    circle(0.1f, 0.6f, 0.05f);
    circle(0.2f, 0.6f, 0.05f);
    circle(0.15f, 0.63f, 0.05f);
    circle(0.15f, 0.58f, 0.05f);

    glPopMatrix();
    glLoadIdentity();


    glBegin(GL_TRIANGLES); //hill1
    glColor3ub(0, 77, 0);

    glVertex2f(1.0, 0.4);
    glVertex2f(0.8, 0.6);
    glVertex2f(0.6, 0.4);

    glVertex2f(0.6, 0.4);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.2, 0.4);

    glVertex2f(0.5, 0.4);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.6, 0.5);

    glEnd();

    glBegin(GL_TRIANGLES); //hill2
    glColor3ub(0, 102, 0);

    glVertex2f(1.05, 0.35);
    glVertex2f(0.85, 0.55);
    glVertex2f(0.65, 0.35);

    glVertex2f(0.65, 0.35);
    glVertex2f(0.45, 0.55);
    glVertex2f(0.25, 0.35);

    glVertex2f(0.55, 0.35);
    glVertex2f(0.75, 0.35);
    glVertex2f(0.65, 0.45);

    glEnd();


    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 77, 0);

    glVertex2f(-1.0, 0.4);
    glVertex2f(-0.8, 0.6);
    glVertex2f(-0.6, 0.4);

    glVertex2f(-0.6, 0.4);
    glVertex2f(-0.4, 0.6);
    glVertex2f(-0.2, 0.4);

    glVertex2f(-0.5, 0.4);
    glVertex2f(-0.7, 0.4);
    glVertex2f(-0.6, 0.5);

    glEnd();

    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 102, 0);

    glVertex2f(-1.05, 0.35);
    glVertex2f(-0.85, 0.55);
    glVertex2f(-0.65, 0.35);

    glVertex2f(-0.65, 0.35);
    glVertex2f(-0.45, 0.55);
    glVertex2f(-0.25, 0.35);

    glVertex2f(-0.55, 0.35);
    glVertex2f(-0.75, 0.35);
    glVertex2f(-0.65, 0.45);

    glEnd();

    glTranslatef(-0.65f,0.0f,0.0f);
    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 77, 0);

    glVertex2f(1.0, 0.4);
    glVertex2f(0.8, 0.6);
    glVertex2f(0.6, 0.4);

    glVertex2f(0.6, 0.4);
    glVertex2f(0.4, 0.6);
    glVertex2f(0.2, 0.4);

    glVertex2f(0.5, 0.4);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.6, 0.5);

    glEnd();
    glLoadIdentity();


    glTranslatef(-0.64f,0.0f,0.0f);
    glBegin(GL_TRIANGLES); //hill
    glColor3ub(0, 102, 0);

    glVertex2f(1.0, 0.35);
    glVertex2f(0.8, 0.55);
    glVertex2f(0.6, 0.35);

    glVertex2f(0.6, 0.35);
    glVertex2f(0.4, 0.55);
    glVertex2f(0.2, 0.35);

    glVertex2f(0.5, 0.35);
    glVertex2f(0.7, 0.35);
    glVertex2f(0.6, 0.45);

    glEnd();
    glLoadIdentity();




    glBegin(GL_QUADS);   //tea garden
    glColor3ub(0, 179, 60);
    glVertex2f(-0.98f, .28f);
    glVertex2f(-0.98f, .05f);
    glVertex2f(-.5f, .05f);
    glVertex2f(-.5f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, .28f);
    glVertex2f(-0.98f, .21f);
    glVertex2f(-.5f, .21f);
    glVertex2f(-.5f, .28f);
    glEnd();


    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, .19f);
    glVertex2f(-0.98f, .13f);
    glVertex2f(-.5f, .13f);
    glVertex2f(-.5f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, .11f);
    glVertex2f(-0.98f, .05f);
    glVertex2f(-.5f, .05f);
    glVertex2f(-.5f, .11f);

    glEnd();

     glBegin(GL_QUADS);   //tea garden5
    glColor3ub(0, 179, 60);
    glVertex2f(-0.98f, -.28f);
    glVertex2f(-0.98f, -.02f);
    glVertex2f(-.5f, -.02f);
    glVertex2f(-.5f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, -.28f);
    glVertex2f(-0.98f, -.21f);
    glVertex2f(-.5f, -.21f);
    glVertex2f(-.5f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, -.19f);
    glVertex2f(-0.98f, -.13f);
    glVertex2f(-.5f, -.13f);
    glVertex2f(-.5f, -.19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.98f, -.11f);
    glVertex2f(-0.98f, -.05f);
    glVertex2f(-.5f, -.05f);
    glVertex2f(-.5f, -.11f);

    glEnd();


    glBegin(GL_QUADS);   //tea garden2
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-0.03f, .05f);
    glVertex2f(-0.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .21f);
    glVertex2f(-.03f, .21f);
    glVertex2f(-.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .19f);
    glVertex2f(-0.48f, .13f);
    glVertex2f(-.03f, .13f);
    glVertex2f(-.03f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .11f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-.03f, .05f);
    glVertex2f(-.03f, .11f);

    glEnd();

     glBegin(GL_QUADS);   //tea garden6
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.02f);
    glVertex2f(-0.03f, -.02f);
    glVertex2f(-0.03f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.21f);
    glVertex2f(-.03f, -.21f);
    glVertex2f(-.03f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.19f);
    glVertex2f(-0.48f, -.13f);
    glVertex2f(-.03f, -.13f);
    glVertex2f(-.03f, -.19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.11f);
    glVertex2f(-0.48f, -.05f);
    glVertex2f(-.03f, -.05f);
    glVertex2f(-.03f, -.11f);

    glEnd();

    glTranslatef(.5f,0.0f,0.0f);
    glBegin(GL_QUADS);   //tea garden3
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-0.03f, .05f);
    glVertex2f(-0.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .21f);
    glVertex2f(-.03f, .21f);
    glVertex2f(-.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .19f);
    glVertex2f(-0.48f, .13f);
    glVertex2f(-.03f, .13f);
    glVertex2f(-.03f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .11f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-.03f, .05f);
    glVertex2f(-.03f, .11f);

    glEnd();

     glBegin(GL_QUADS);   //tea garden7
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.02f);
    glVertex2f(-0.03f, -.02f);
    glVertex2f(-0.03f, -.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.28f);
    glVertex2f(-0.48f, -.21f);
    glVertex2f(-.03f, -.21f);
    glVertex2f(-.03f,-.28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.19f);
    glVertex2f(-0.48f, -.13f);
    glVertex2f(-.03f, -.13f);
    glVertex2f(-.03f, -.19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, -.11f);
    glVertex2f(-0.48f, -.05f);
    glVertex2f(-.03f, -.05f);
    glVertex2f(-.03f, -.11f);

    glEnd();



    glTranslatef(.48f,0.0f,0.0f);
    glBegin(GL_QUADS);   //tea garden4
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-0.03f, .05f);
    glVertex2f(-0.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .28f);
    glVertex2f(-0.48f, .21f);
    glVertex2f(-.03f, .21f);
    glVertex2f(-.03f, .28f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .19f);
    glVertex2f(-0.48f, .13f);
    glVertex2f(-.03f, .13f);
    glVertex2f(-.03f, .19f);

    glEnd();

    glBegin(GL_QUADS);   //tea row
    glColor3ub(51, 102, 0);
    glVertex2f(-0.48f, .11f);
    glVertex2f(-0.48f, .05f);
    glVertex2f(-.03f, .05f);
    glVertex2f(-.03f, .11f);

    glEnd();
    glLoadIdentity();

    glBegin(GL_LINES); //tree1
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();

    glTranslatef(0.8f,0.0f,0.0f);
    glBegin(GL_LINES); //tree2
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(-0.1f,0.08f,0.0f);
    glBegin(GL_LINES); //tree3
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-0.2f,0.01f,0.0f);
    glBegin(GL_LINES); //tree4
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.5f,0.08f,0.0f);
    glBegin(GL_LINES); //tree5
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6f,0.03f,0.0f);
    glBegin(GL_LINES); //tree6
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.3f,0.01f,0.0f);
    glBegin(GL_LINES); //tree7
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.9f,0.08f,0.0f);
    glBegin(GL_LINES); //tree8
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0f,0.06f,0.0f);
    glBegin(GL_LINES); //tree9
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.3f,0.08f,0.0f);
    glBegin(GL_LINES); //tree10
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.4f,0.05f,0.0f);
    glBegin(GL_LINES); //tree11
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.6f,0.05f,0.0f);
    glBegin(GL_LINES); //tree12
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8f,-0.2f,0.0f);
    glBegin(GL_LINES); //tree13
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.9f,-0.4f,0.0f);
    glBegin(GL_LINES); //tree14
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.95f,-0.2f,0.0f);
    glBegin(GL_LINES); //tree14
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.5f,-0.2f,0.0f);
    glBegin(GL_LINES); //tree15
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.3f,-0.25f,0.0f);
    glBegin(GL_LINES); //tree16
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.04f,-0.35f,0.0f);
    glBegin(GL_LINES); //tree17
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.17f,-0.29f,0.0f);
    glBegin(GL_LINES); //tree18
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-0.1f,-0.3f,0.0f);
    glBegin(GL_LINES); //tree19
    glColor3ub(179, 119, 0);
    glVertex2f(-0.7f, .12f);
    glVertex2f(-0.7f, .25f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.73f, .25f);
    glVertex2f(-0.75f, .3f);
    glVertex2f(-0.73f, .35f);
    glVertex2f(-0.69f, .35f);
    glVertex2f(-0.65f, .3f);
    glVertex2f(-0.68f, .25f);
    glEnd();
    glLoadIdentity();

    glBegin(GL_LINES); //gatebar
    glColor3ub(0,0,0);
    glVertex2f(-0.05f,-0.18f);
    glVertex2f(-0.05f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.35f,-0.18f);
    glVertex2f(-0.35f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.5f,-0.18f);
    glVertex2f(-0.5f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.65f,-0.18f);
    glVertex2f(-0.65f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.8f,-0.18f);
    glVertex2f(-0.8f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.95f,-0.18f);
    glVertex2f(-0.95f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(-0.18f,-0.18f);
    glVertex2f(-0.18f,-0.3f);
    glEnd();

     glBegin(GL_LINES); //bar
    glColor3ub(0,0,0);
    glVertex2f(0.13f,-0.18f);
    glVertex2f(0.13f,-0.3f);
    glEnd();

    glBegin(GL_LINES); //bat
    glColor3ub(0,0,0);
    glVertex2f(0.35f,-0.18f);
    glVertex2f(0.35f,-0.3f);
    glEnd();



    glBegin(GL_LINES); //gate_line

    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(1.0f, -0.25f);

    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glEnd();

    glBegin(GL_LINES); //main gate stand_1
    glColor3ub(0,0,0);
    glVertex2f(0.55f,-0.3f);
    glVertex2f(0.55f,-0.12);
    glEnd();

    glBegin(GL_LINES); //main gate stand_2
    glColor3ub(0,0,0);
    glVertex2f(0.85f,-0.3f);
    glVertex2f(0.85f,-0.12);
    glEnd();

    glBegin(GL_QUADS); //banner
    glColor3ub(255,255,255);
    glVertex2f(0.55f,-0.05f);
    glVertex2f(0.55f,-0.13f);
    glVertex2f(0.85f,-0.13f);
    glVertex2f(0.85f,-0.05f);
    glEnd();

     glBegin(GL_LINES); //main gate stand_2
    glColor3ub(0,0,0);
    glVertex2f(0.69f,-0.2f);
    glVertex2f(0.69f,-0.25);
    glEnd();

    /////train start
     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.87f, -0.32f);
    glVertex2f(0.87f, -0.42f);
    glVertex2f(0.9f, -0.42f);
    glVertex2f(0.9f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.77f, -0.32f);
    glVertex2f(0.77f, -0.42f);
    glVertex2f(0.8f, -0.42f);
    glVertex2f(0.8f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.67f, -0.32f);
    glVertex2f(0.67f, -0.42f);
    glVertex2f(0.7f, -0.42f);
    glVertex2f(0.7f, -0.32f);
    glEnd();


     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.57f, -0.32f);
    glVertex2f(0.57f, -0.42f);
    glVertex2f(0.6f, -0.42f);
    glVertex2f(0.6f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //field
    glColor3ub(191, 128, 64);
    glVertex2f(0.47f, -0.32f);
    glVertex2f(0.47f, -0.42f);
    glVertex2f(0.5f, -0.42f);
    glVertex2f(0.5f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.37f, -0.32f);
    glVertex2f(0.37f, -0.42f);
    glVertex2f(0.4f, -0.42f);
    glVertex2f(0.4f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.27f, -0.32f);
    glVertex2f(0.27f, -0.42f);
    glVertex2f(0.3f, -0.42f);
    glVertex2f(0.3f, -0.32f);
    glEnd();

    glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.17f, -0.32f);
    glVertex2f(0.17f, -0.42f);
    glVertex2f(0.2f, -0.42f);
    glVertex2f(0.2f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(0.07f, -0.32f);
    glVertex2f(0.07f, -0.42f);
    glVertex2f(0.1f, -0.42f);
    glVertex2f(0.1f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.03f, -0.32f);
    glVertex2f(-0.03f, -0.42f);
    glVertex2f(0.0f, -0.42f);
    glVertex2f(0.0f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.13f, -0.32f);
    glVertex2f(-0.13f, -0.42f);
    glVertex2f(-0.1f, -0.42f);
    glVertex2f(-0.1f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.23f, -0.32f);
    glVertex2f(-0.23f, -0.42f);
    glVertex2f(-0.2f, -0.42f);
    glVertex2f(-0.2f, -0.32f);
    glEnd();


     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.33f, -0.32f);
    glVertex2f(-0.33f, -0.42f);
    glVertex2f(-0.3f, -0.42f);
    glVertex2f(-0.3f, -0.32f);
    glEnd();


     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.43f, -0.32f);
    glVertex2f(-0.43f, -0.42f);
    glVertex2f(-0.4f, -0.42f);
    glVertex2f(-0.4f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.53f, -0.32f);
    glVertex2f(-0.53f, -0.42f);
    glVertex2f(-0.5f, -0.42f);
    glVertex2f(-0.5f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.63f, -0.32f);
    glVertex2f(-0.63f, -0.42f);
    glVertex2f(-0.6f, -0.42f);
    glVertex2f(-0.6f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.73f, -0.32f);
    glVertex2f(-0.73f, -0.42f);
    glVertex2f(-0.7f, -0.42f);
    glVertex2f(-0.7f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.83f, -0.32f);
    glVertex2f(-0.83f, -0.42f);
    glVertex2f(-0.8f, -0.42f);
    glVertex2f(-0.8f, -0.32f);
    glEnd();

     glBegin(GL_QUADS);  //path
    glColor3ub(191, 128, 64);
    glVertex2f(-0.93f, -0.32f);
    glVertex2f(-0.93f, -0.42f);
    glVertex2f(-0.9f, -0.42f);
    glVertex2f(-0.9f, -0.32f);
    glEnd();



    glBegin(GL_LINES); //rail_line

    glColor3ub(102, 26, 0);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(1.0f, -0.35f);

    glColor3ub(102, 26, 0);
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(1.0f, -0.4f);


    glEnd();
    glPushMatrix();
    glTranslatef(position3,0,0);

    glBegin(GL_TRIANGLE_FAN);   //train  tire 1
		for(j = 0; j <= lineAmount1;j++) {
			glVertex2f(
			    a + (radius1 * cos(j *  twicePi / lineAmount1)),
			    b + (radius1 * sin(j * twicePi / lineAmount1))
			);
		}
	glEnd();


    glBegin(GL_TRIANGLE_FAN);   //train  tire 2
		for(k = 0; k <= lineAmount1;k++) {
			glVertex2f(
			    c + (radius1 * cos(k *  twicePi / lineAmount1)),
			    d + (radius1 * sin(k * twicePi / lineAmount1))
			);
		}
	glEnd();

	 glBegin(GL_TRIANGLE_FAN);   //train  tire 3
		for(l = 0; l <= lineAmount1;l++) {
			glVertex2f(
			    g + (radius1 * cos(l *  twicePi / lineAmount1)),
			    h + (radius1 * sin(l * twicePi / lineAmount1))
			);
		}
	glEnd();

	 glBegin(GL_TRIANGLE_FAN);   //train  tire 4
		for(m = 0; m <= lineAmount1;m++) {
			glVertex2f(
			    e + (radius1 * cos(m *  twicePi / lineAmount1)),
			    f + (radius1 * sin(m * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);   //train  tire 5
		for(n = 0; n <= lineAmount1;n++) {
			glVertex2f(
			    o + (radius1 * cos(n *  twicePi / lineAmount1)),
			    p + (radius1 * sin(n * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);   //train  tire 5
		for(t = 0; t <= lineAmount1;t++) {
			glVertex2f(
			    q + (radius1 * cos(t *  twicePi / lineAmount1)),
			    r + (radius1 * sin(t * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);   //train  tire 6
        for(e1 = 0; e1 <= lineAmount1;e1++) {
            glVertex2f(
                o1 + (radius1 * cos(e1 *  twicePi / lineAmount1)),
                p1 + (radius1 * sin(e1 * twicePi / lineAmount1))
            );
        }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);   //train  tire 7
        for(j1 = 0; j1 <= lineAmount1;j1++) {
            glVertex2f(
                q1 + (radius1 * cos(j1 *  twicePi / lineAmount1)),
                p1 + (radius1 * sin(j1 * twicePi / lineAmount1))
            );
        }
    glEnd();


    glBegin(GL_QUADS);  //train 1 body
    glColor3ub(191, 191, 191);
    glVertex2f(0.3f, -0.15);
    glVertex2f(0.3f, -0.35f);
    glVertex2f(0.6f, -0.35f);
    glVertex2f(0.6f, -0.15);
    glEnd();

    glBegin(GL_QUADS);  //train 1 body side
    glColor3ub(230, 57, 0);
    glVertex2f(0.6f, -0.25);
    glVertex2f(0.6f, -0.35f);
    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.7f, -0.25);
    glEnd();

    glBegin(GL_QUADS);  //train light
    glColor3ub(255, 255, 102);
    glVertex2f(0.7f, -0.32);
    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.84f, -0.35f);
    glVertex2f(0.84f, -0.27);
    glEnd();

     glBegin(GL_QUADS);  //train 1 bash
    glColor3ub(51, 153, 102);
    glVertex2f(0.65f, -0.2);
    glVertex2f(0.65f, -0.25f);
    glVertex2f(0.68f, -0.25f);
    glVertex2f(0.68f, -0.2);
    glEnd();

     glBegin(GL_QUADS);  //train 1 window
    glColor3ub(0, 153, 0);
    glVertex2f(0.4f, -0.2);
    glVertex2f(0.4f, -0.25f);
    glVertex2f(0.55f, -0.25f);
    glVertex2f(0.55f, -0.2);
    glEnd();




    glBegin(GL_QUADS);  //train 1 and 2 connection
    glColor3ub(77, 77, 51);
    glVertex2f(0.25f, -0.32);
    glVertex2f(0.25f, -0.35f);
    glVertex2f(0.3f, -0.35f);
    glVertex2f(0.3f, -0.32);
    glEnd();
// train 2nd bogi

     glBegin(GL_QUADS);  //train 2 body
    glColor3ub(191, 191, 191);
    glVertex2f(-0.1f, -0.15);
    glVertex2f(-0.1f, -0.35f);
    glVertex2f(0.25f, -0.35f);
    glVertex2f(0.25f, -0.15);
    glEnd();

     glBegin(GL_QUADS);  //train 2 window
    glColor3ub(0, 153, 0);
    glVertex2f(-0.05f, -0.2);
    glVertex2f(-0.05f, -0.25f);
    glVertex2f(0.1f, -0.25f);
    glVertex2f(0.1f, -0.2);
    glEnd();

    glBegin(GL_QUADS);  //train 2 and 3 connection
    glColor3ub(77, 77, 51);
    glVertex2f(-0.15f, -0.32);
    glVertex2f(-0.15f, -0.35f);
    glVertex2f(-0.1f, -0.35f);
    glVertex2f(-0.1f, -0.32);
    glEnd();

    // train 3rd bogi start

     glBegin(GL_QUADS);  //train 3 body
    glColor3ub(191, 191, 191);
    glVertex2f(-0.5f, -0.15);
    glVertex2f(-0.5f, -0.35f);
    glVertex2f(-0.15f, -0.35f);
    glVertex2f(-0.15f, -0.15);
    glEnd();


    glBegin(GL_QUADS);  //train 3  window
    glPushMatrix();
    glTranslatef(position2,0,0);
    glColor3ub(0,153,0);
    glVertex2f(-0.49f, -0.2);
    glVertex2f(-0.49f, -0.25f);
    glVertex2f(-0.37f, -0.25f);
    glVertex2f(-0.37f, -0.2);
    glEnd();

     //4th bogi start

    glBegin(GL_QUADS);  //train 3 and 4 connection
    glColor3ub(77, 77, 51);
    glVertex2f(-0.5f, -0.32);
    glVertex2f(-0.5f, -0.35f);
    glVertex2f(-0.55f, -0.35f);
    glVertex2f(-0.55f, -0.32);
    glEnd();


     glBegin(GL_QUADS);  //train 4 body
    glColor3ub(191, 191, 191);
    glVertex2f(-0.55f, -0.15);
    glVertex2f(-0.55f, -0.35f);
    glVertex2f(-0.85f, -0.35f);
    glVertex2f(-0.85f, -0.15);
    glEnd();


    glBegin(GL_QUADS);  //train 4 window
    glTranslatef(position2,0,0);
    glColor3ub(0,153,0);
    glVertex2f(-0.6f, -0.2);
    glVertex2f(-0.6f, -0.25f);
    glVertex2f(-0.7f, -0.25f);
    glVertex2f(-0.7f, -0.2);
    glEnd();

    glPopMatrix();
    glLoadIdentity();

    glBegin(GL_QUADS);   //road_bit
    glColor3ub(64,64,64);
    glVertex2f(1.0f, -0.99f);
    glVertex2f(1.0f, -0.43f);
    glVertex2f(-1.0f, -0.43f);
    glVertex2f(-1.0f, -0.99f);
    glEnd();

     //light start


    glTranslatef(0.1,0.5,0); //light3
    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);
    glEnd();

    glLoadIdentity();

    glTranslatef(1.4,0.5,0); //light4
    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);   //road
    glColor3ub(51, 51, 51);
    glVertex2f(1.0f, -0.9f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(-1.0f, -0.9f);
    glEnd();

     glBegin(GL_QUADS);  //road bar
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f, -0.7);
    glVertex2f(-0.8f, -0.72f);
    glVertex2f(-0.5f, -0.72f);
    glVertex2f(-0.5f, -0.7);
    glEnd();

     glBegin(GL_QUADS);  //road bar 2
    glColor3ub(255, 255, 255);
    glVertex2f(0.1f, -0.7);
    glVertex2f(0.1f, -0.72f);
    glVertex2f(-0.2, -0.72f);
    glVertex2f(-0.2, -0.7);
    glEnd();

     glBegin(GL_QUADS);  //road bar 3
    glColor3ub(255, 255, 255);
    glVertex2f(0.9f, -0.7);
    glVertex2f(0.9f, -0.72f);
    glVertex2f(0.6, -0.72f);
    glVertex2f(0.6, -0.7);
    glEnd();




    //car  start left

    glPushMatrix();
    glTranslatef(position,0,0);
    glBegin(GL_QUADS);   //left car up
    glColor3ub(153, 204, 255);
    glVertex2f(-0.7f, -0.55f);
    glVertex2f(-0.73f, -0.6f);
    glVertex2f(-0.57f, -0.6f);
    glVertex2f(-0.6f, -0.55f);
    glEnd();

    glBegin(GL_QUADS);   //left car down
    glColor3ub(204, 51, 0);
    glVertex2f(-0.77f, -0.6f);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.53f, -0.68f);
    glVertex2f(-0.53f, -0.6f);
    glEnd();

    glBegin(GL_QUADS); //light
    glColor3ub(255, 255, 102);
    glVertex2f(-0.77f,-0.65f);
    glVertex2f(-0.77f,-0.68f);
    glVertex2f(-0.89f,-0.68f);
    glVertex2f(-0.89f,-0.6f);

    glEnd();


glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //left car tire 1
		for(a1 = 0; a1 <= lineAmount1;a1++) {
			glVertex2f(
			    u + (radius2 * cos(a1 *  twicePi / lineAmount1)),
			    v + (radius2 * sin(a1 * twicePi / lineAmount1))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //left car tire 2
		for(b1 = 0; b1 <= lineAmount1;b1++) {
			glVertex2f(
			    z + (radius2 * cos(b1 *  twicePi / lineAmount1)),
			    v + (radius2 * sin(b1 * twicePi / lineAmount1))
			);
		}
	glEnd();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position2,0,0);

	//right car


	 glBegin(GL_QUADS);   //right car up
    glColor3ub(153, 204, 255);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.27f, -0.75f);
     glVertex2f(0.4f, -0.75f);
    glVertex2f(0.37f, -0.7f);

    glEnd();

     glBegin(GL_QUADS);   //right car down
    glColor3ub(102, 0, 255);
    glVertex2f(0.23f, -0.75f);
    glVertex2f(0.23f, -0.82f);
    glVertex2f(0.44f, -0.82f);
    glVertex2f(0.44f, -0.75f);
    glEnd();

    glBegin(GL_QUADS);   //light
    glColor3ub(255, 255, 102);
    glVertex2f(0.44f, -0.8f);
    glVertex2f(0.44f, -0.82f);
    glVertex2f(0.6f, -0.82f);
    glVertex2f(0.6f, -0.73f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //right car tire 1
		for(c1 = 0; c1 <= lineAmount1;c1++) {
			glVertex2f(
			    u1 + (radius2 * cos(c1 *  twicePi / lineAmount1)),
			    v1 + (radius2 * sin(c1 * twicePi / lineAmount1))
			);
		}
	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0,0,0); //right car tire 2
		for(d1 = 0; d1 <= lineAmount1;d1++) {
			glVertex2f(
			    z1 + (radius2 * cos(d1 *  twicePi / lineAmount1)),
			    v1 + (radius2 * sin(d1 * twicePi / lineAmount1))
			);
		}
	glEnd();
	glPopMatrix();
    glLoadIdentity();
    glBegin(GL_QUADS);   //light1
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
     glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);

    glEnd();


    glTranslatef(1.3,0.0,0); //light2
    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.8f, -0.95f);
    glVertex2f(-0.79f, -0.95f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(191, 128, 64);
    glVertex2f(-0.77f, -0.68f);
    glVertex2f(-0.79f, -0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.79f, -0.7f);
    glVertex2f(-0.74f, -0.68f);
    glVertex2f(-0.76f, -0.72f);
    glVertex2f(-0.77f, -0.68f);

    glEnd();

    glLoadIdentity();
    glFlush();



}
 void Resize(int width, int height)
{

    glutReshapeWindow( width, height);
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

    case 't':
    speed3 =0.05;
    glLoadIdentity();
    sound();
    glutPostRedisplay();

    break;

    case 's':
    speed3=0.0;
    sound2();
    glutPostRedisplay();
    break;
    case 'n':
    glutDisplayFunc(night);
    rainday = false;
    sound3();
    break;
    case 'd':
    glutDisplayFunc(day);
    rainday = false;
    sound5();
    break;
    //glutPostRedisplay();
    case 'r':
    glutDisplayFunc(rainyday);
    speed4+=0.9;
    rainday = true;
    Rain(_rain);
    sound4();
     break;
    glLoadIdentity();
    glutPostRedisplay();

	}
}

    int main(int argc, char** argv) {
    glutInit(&argc, argv);
    cout <<"Computer Graphics Section:F \n";
     cout <<"================================\n";
    cout <<"Final Project: Sreemangal(Day/Night/Rain)view \n";
     cout <<"================================\n";
    cout <<"Created By:\n";
     cout <<"================================\n";
    cout <<"1) Mir Abrar Hossain,____________ID:18-38258-2\n";
    cout <<"2) Mohammad Sayem Chowdhury,____ ID:18-38198-2\n";
    cout <<"3) Kazi Shayem Mahamood,_________ID:18-37296-1\n";
    cout <<"4) HOSSAN,MD.SAZZAT,_____________ID:18-37445-1\n";
    cout <<"================================\n";
    cout <<"Press D for Day view/sound\n";
    cout <<"================================\n";
    cout <<"Press T for Day Train Start\n";
    cout <<"================================\n";
    cout <<"Press S for Day Train Stop\n";
    cout <<"================================\n";
    cout <<"Press R for Day Rainy view/sound\n";
    cout <<"================================\n";
    cout <<"Press N for Day Night view/sound\n";

    glutCreateWindow("Final Project"); // Create a window with the given title
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    Resize(900, 900);
    glutDisplayFunc(day);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();   // Enter the event-processing loop

    return 0;
}
