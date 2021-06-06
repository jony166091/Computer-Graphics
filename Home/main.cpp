#include<windows.h>
#include<GL\glut.h>

void myInit (void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,700.0,0.0,500.0);
}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT); //clears the screen
    glColor3f(0.5f,0.5f,0.5f); // sets the drawing color

    glPointSize(5.0);
    glBegin(GL_POLYGON);

    //botom

           glVertex2i(20,20);
           glVertex2i(320,20);
           //top
           glVertex2i(20,200);
           glVertex2i(320,20);
           //left
           glVertex2i(20,200);
           glVertex2i(20,20);
           //right
           glVertex2i(320,200);
           glVertex2i(320,20);

  glEnd();

//Left Window
glColor3f(1.0f,0.0f,0.0f);
glPointSize(4.0);
glRectf(30,30,100,100);

//Right Window
glColor3f(1.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
      //bottom
      glVertex2i(200,30);
      glVertex2i(200,100);
      //top
      glVertex2i(200,100);
      glVertex2i(300,100);
      //left
      glVertex2i(300,100);
      glVertex2i(300,30);
      //right
      glVertex2i(300,30);
      glVertex2i(200,30);

    glEnd();

//door
glColor3f(0.0f,0.0f,1.0f);
glBegin(GL_POLYGON);
//left
glVertex2i(120,30);
glVertex2i(120,100);
//top
glVertex2i(120,100);
glVertex2i(170,100);
//right
glVertex2i(170,100);
glVertex2i(170,30);
//bottom
glVertex2i(120,30);
glVertex2i(170,30);
glEnd();

//Triangle
glColor3f(0.0f,1.0f,0.0f);
glBegin(GL_POLYGON);
//bottom
glVertex2i(20,200);
glVertex2i(320,200);

//top
glVertex2i(200,310);
glVertex2i(320,200);

//left
glVertex2i(20,200);
glVertex2i(200,310);

glEnd();
glFlush(); //sends all output to display;

}
int main (int argc, char **argv)
{

     glutInit (&argc, argv); // to initialize the toolkit;

     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // sets the display mode

     glutInitWindowSize (640, 480); // sets the window size

     glutInitWindowPosition (10, 10); // sets the starting position for the window

     glutCreateWindow ("My first OpenGL program!"); // creates the window and sets the title

     glutDisplayFunc (myDisplay);
     myInit(); // additional initializations as necessary
     glutMainLoop(); // go into a loop until event occurs
     return 0;
}
