#include <GL/glut.h>
#include <math.h>

void circle(float cx, float cy, float r, int num_segments) {
	glBegin(GL_TRIANGLE_FAN);
	for (int i = 0; i < num_segments; i++) {
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
		float x = r * cosf(theta);
		float y = r * sinf(theta);
		glVertex2f(x + cx, y + cy);
	}
	glEnd();
}

void DibujarCabeza() {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.4, 0.0);
	glVertex2i(45, 85);
	glVertex2i(52, 81);
	glVertex2i(50, 69);
	glVertex2i(45, 72);
	glVertex2i(40, 69);
	glVertex2i(38, 81);
	glEnd();
}
void DibujarCaparason() {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(45, 72);
	glVertex2i(52, 69);
	glVertex2i(51, 62);
	glVertex2i(39, 62);
	glVertex2i(38, 69);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.3);
	glVertex2i(52, 69);
	glVertex2i(60, 65);
	glVertex2i(55, 58);
	glVertex2i(51, 62);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.3);
	glVertex2i(38, 69);
	glVertex2i(30, 65);
	glVertex2i(35, 58);
	glVertex2i(39, 62);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(60, 65);
	glVertex2i(67, 48);
	glVertex2i(57, 46);
	glVertex2i(53, 52);
	glVertex2i(55, 58);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(30, 65);
	glVertex2i(23, 48);
	glVertex2i(33, 46);
	glVertex2i(37, 52);
	glVertex2i(35, 58);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.3);
	glVertex2i(39, 62);
	glVertex2i(51, 62);
	glVertex2i(55, 58);
	glVertex2i(53, 52);
	glVertex2i(37, 52);
	glVertex2i(35, 58);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.3);
	glVertex2i(67, 48);
	glVertex2i(60, 30);
	glVertex2i(54, 39);
	glVertex2i(57, 46);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.3);
	glVertex2i(23, 48);
	glVertex2i(30, 30);
	glVertex2i(36, 39);
	glVertex2i(33, 46);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.3);
	glVertex2i(37, 52);
	glVertex2i(53, 52);
	glVertex2i(57, 46);
	glVertex2i(54, 39);
	glVertex2i(36, 39);
	glVertex2i(33, 46);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(60, 30);
	glVertex2i(53, 25);
	glVertex2i(50, 30);
	glVertex2i(54, 39);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(30, 30);
	glVertex2i(37, 25);
	glVertex2i(40, 30);
	glVertex2i(36, 39);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(36, 39);
	glVertex2i(54, 39);
	glVertex2i(50, 30);
	glVertex2i(40, 30);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(40, 30);
	glVertex2i(50, 30);
	glVertex2i(53, 25);
	glVertex2i(45, 19);
	glVertex2i(37, 25);
	glEnd();
}
void DibujarAletas() {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(52, 69);
	glVertex2i(60, 65);
	glVertex2i(70, 75);
	glVertex2i(57, 75);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(60, 65);
	glVertex2i(73, 65);
	glVertex2i(70, 75);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(73, 65);
	glVertex2i(81, 58);
	glVertex2i(79, 69);
	glVertex2i(70, 75);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(38, 69);
	glVertex2i(30, 65);
	glVertex2i(20, 75);
	glVertex2i(33, 75);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(30, 65);
	glVertex2i(18, 65);
	glVertex2i(20, 75);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.2);
	glVertex2i(18, 65);
	glVertex2i(9, 58);
	glVertex2i(11, 69);
	glVertex2i(20, 75);
	glEnd();
}
void DibujarPatitas() {
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.1);
	glVertex2i(53, 25);
	glVertex2i(60, 30);
	glVertex2i(65, 23);
	glVertex2i(62, 18);
	glVertex2i(57, 18);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.1);
	glVertex2i(37, 25);
	glVertex2i(33, 18);
	glVertex2i(28, 18);
	glVertex2i(25, 23);
	glVertex2i(30, 30);
	glEnd();
}
void DibujarTortuga() {
	glClear(GL_COLOR_BUFFER_BIT);
	DibujarCabeza();
	DibujarCaparason();
	DibujarAletas();
	DibujarPatitas();
	glFlush();
}
void IniciarConfiguracion() {
	glClearColor(0, 0, 2, 0);
	glLineWidth(3.0);
	glOrtho(0, 100, 0, 100, 1, -1);
}
int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Tortuga");
	glutDisplayFunc(DibujarTortuga);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}