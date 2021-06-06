#include <GL/glut.h>
#include <math.h>

float PI = 3.1415926f;
float R = 1.0f;

void Show()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);

	GLfloat xA = R * cos(90 * PI / 180);
	GLfloat yA = R * sin(90 * PI / 180);
	GLfloat xB = R * cos(306 * PI / 180);
	GLfloat yB = R * sin(306 * PI / 180);
	GLfloat xC = R * cos(162 * PI / 180);
	GLfloat yC = R * sin(162 * PI / 180);
	GLfloat xD = R * cos(18 * PI / 180);
	GLfloat yD = R * sin(18 * PI / 180);
	GLfloat xE = R * cos(234 * PI / 180);
	GLfloat yE = R * sin(234 * PI / 180);
	glVertex2f(xA,yA);
	glVertex2f(xB,yB);
	glVertex2f(xC,yC);
	glVertex2f(xD,yD);
	glVertex2f(xE,yE);

	glEnd();
	glFlush();

}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("OpenGL");
	glutDisplayFunc(Show);
	glutMainLoop();
	return 0;
}
