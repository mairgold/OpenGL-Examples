#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0); // 빨강
        glVertex2f(-0.5f, 0.5f);
        glColor3f(1.0, 0.5, 0.0); // 주황
        glVertex2f(0.5f, 0.5f);
        glColor3f(0.0, 1.0, 0.0); // 초록
        glVertex2f(0.5f, -0.5f);
        glColor3f(0.0, 0.0, 1.0); // 파랑
        glVertex2f(-0.5f, -0.5f);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Rainbow Rectangle");
    glutInitWindowSize(500, 500);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
