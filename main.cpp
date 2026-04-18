#include<windows.h>
#include <GL/glut.h>
#define PI   3.141516
#include<math.h>

// Function for making circles - Rashed
void circleFunc(float p1, float q1, float r1, int R1, int G1, int B1)
{
    GLfloat x = p1;
    GLfloat y = q1;
    GLfloat r = r1;
    int R = R1;
    int G = G1;
    int B = B1;

    int triangle=100;
    GLfloat tp =2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(R, G, B);
    glVertex2f(x, y);
    for (int i = 0; i <= triangle; i++)
        glVertex2f(x + (r * cos(i * tp / triangle)), y + (r * sin(i * tp / triangle)));
    glEnd();
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);


    /* Sun - Rashed */
    circleFunc(0.8f, 0.8f, 0.1f, 255, 255, 0);



    /* Clouds - Rashed */

    // Cloud 1 - Rashed
    circleFunc(-0.5f, 0.8f, 0.1f, 255, 255, 255);
    circleFunc(-0.3f, 0.8f, 0.1f, 255, 255, 255);
    circleFunc(-0.4f, 0.8f, 0.13f, 255, 255, 255);
    circleFunc(-0.6f, 0.8f, 0.05f, 255, 255, 255);

    // Cloud 2 - Rashed
    circleFunc(-0.05f, 0.62f, 0.07f, 255, 255, 255);
    circleFunc(0.08f, 0.67f, 0.10f, 255, 255, 255);
    circleFunc(0.22f, 0.63f, 0.08f, 255, 255, 255);
    circleFunc(0.12f, 0.58f, 0.09f, 255, 255, 255);
    circleFunc(0.00f, 0.57f, 0.06f, 255, 255, 255);
    circleFunc(0.18f, 0.68f, 0.06f, 255, 255, 255);

    // Cloud 3 - Rashed
    circleFunc(0.45f, 0.72f, 0.08f, 255, 255, 255);
    circleFunc(0.58f, 0.78f, 0.12f, 255, 255, 255);
    circleFunc(0.72f, 0.73f, 0.09f, 255, 255, 255);
    circleFunc(0.62f, 0.68f, 0.10f, 255, 255, 255);
    circleFunc(0.52f, 0.67f, 0.07f, 255, 255, 255);





    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Dynamic Camping Scenario");
    glClearColor(0.0, 0.0, 1.0, 1.0); // blue background
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
