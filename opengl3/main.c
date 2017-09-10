#include <stdio.h>
#include <GL/glut.h>
#include <GL/freeglut_ext.h>

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glRectf(-0.5f, -0.5f, 0.5f, 0.5f);;
    glFlush();
}

int main(int argc, char *argv[])
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400, 800);
    glutInitContextVersion(3,0);
    glutInitContextProfile(GLUT_CORE_PROFILE);
    //glewExperimental = GL_TRUE;
    glutCreateWindow("demo");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();
    printf("Hello World!\n");
    return 0;
}
