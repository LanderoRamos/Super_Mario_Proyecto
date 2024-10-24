#include <GL/GLUT.h>
#include <iostream>
#include <string>
#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
#include <windows.h>

using namespace std;

static double  K = 0.0;
static double  L = 0.0;
static float cont_a = -1.0, cont_b = -1.0;
GLfloat vector[3] = { 1,0,0 };

void puntos_Ejemplo()
{
    glColor3f(vector[0], vector[1], vector[2]);    // Estalecemos el color de la siguiente primitiva.
    glPointSize(20.0);           // Estalecemos el tamano de pixel de la primitiva tipo punto.

    glBegin(GL_POINTS);          // Definimos el tipo de primitiva como un punto.
    glVertex3f(K, L, 0);     // Definimos los puntos a graficar.  
    glEnd();
}

void puntos_Ejemplo(float k, float l)
{
    glBegin(GL_QUADS);          // Definimos el tipo de primitiva como un punto.
    //glColor3f(vector[0], vector[1], vector[2]);    // Estalecemos el color de la siguiente primitiva.
    glPointSize(20.0);           // Estalecemos el tamano de pixel de la primitiva tipo punto.
    //Rojo
    glColor3f(1, 0, 0);
    glVertex2f((k), (l));     // v1.
    glVertex2f((k) , (l- 0.1));     // v2.
    glVertex2f((k +0.1), (l - 0.1));     // v3.
    glVertex2f((k +0.1), (l));     // v4.
    //piel
    glColor3f(1, 1, 1);
    glVertex2f((k ), (l - 0.1));     // v1.
    glVertex2f((k ), (l - 0.2));     // v2.
    glVertex2f((k + 0.1), (l - 0.2));     // v3.
    glVertex2f((k + 0.1), (l - 0.1));     // v4.
    //azul
    glColor3f(0, 0, 1);
    glVertex2f((k ) , (l - 0.2));     // v1.
    glVertex2f((k ) , (l - 0.3));     // v2.
    glVertex2f((k + 0.1), (l - 0.3));     // v3.
    glVertex2f((k + 0.1), (l - 0.2));     // v4.
    glEnd();
}

void mariosnes(float k, float l) {
    
    glBegin(GL_QUADS);          // Definimos el tipo de primitiva como un punto.
    //gorra
    glColor3f(0.96f, 0.21, 0);
    glVertex3f(k + 0.03, l + 0.15, 0);     // Definimos los puntos a graficar.
    glVertex3f(k + 0.03, l + 0.16, 0);     // Definimos los puntos a graficar.
    glVertex3f(k + 0.09, l + 0.16, 0);
    glVertex3f(k + 0.09, l + 0.15, 0);
    
    glVertex3f(k + 0.02, l + 0.14, 0);     
    glVertex3f(k + 0.02, l + 0.15, 0);     
    glVertex3f(k + 0.12, l + 0.15, 0);
    glVertex3f(k + 0.12, l + 0.14, 0);

    //cara
    glColor3f(0.98f, 0.60, 0.21);
    glVertex3f(k + 0.03, l + 0.09, 0);     // Definimos los puntos a graficar.
    glVertex3f(k + 0.03, l + 0.14, 0);     // Definimos los puntos a graficar.
    glVertex3f(k + 0.10, l + 0.14, 0);
    glVertex3f(k + 0.10, l + 0.09, 0);

    glVertex3f(k + 0.10, l + 0.11, 0);    
    glVertex3f(k + 0.10, l + 0.13, 0);   
    glVertex3f(k + 0.12, l + 0.13, 0);
    glVertex3f(k + 0.12, l + 0.11, 0);

    glVertex3f(k + 0.12, l + 0.11, 0);
    glVertex3f(k + 0.12, l + 0.12, 0);
    glVertex3f(k + 0.13, l + 0.12, 0);
    glVertex3f(k + 0.13, l + 0.11, 0);

    glVertex3f(k + 0.10, l + 0.09, 0);
    glVertex3f(k + 0.10, l + 0.10, 0);
    glVertex3f(k + 0.11, l + 0.10, 0);
    glVertex3f(k + 0.11, l + 0.09, 0);

    //pelo
    glColor3f(0.52f, 0.43, 0);
    glVertex3f(k + 0.02, l + 0.13, 0);
    glVertex3f(k + 0.02, l + 0.14, 0);
    glVertex3f(k + 0.06, l + 0.14, 0);
    glVertex3f(k + 0.06, l + 0.13, 0);

    glVertex3f(k + 0.01, l + 0.10, 0);
    glVertex3f(k + 0.01, l + 0.13, 0);
    glVertex3f(k + 0.06, l + 0.13, 0);
    glVertex3f(k + 0.06, l + 0.10, 0);


    //bigote
    glVertex3f(k + 0.08, l + 0.10, 0);
    glVertex3f(k + 0.08, l + 0.11, 0);
    glVertex3f(k + 0.12, l + 0.11, 0);
    glVertex3f(k + 0.12, l + 0.10, 0);

    glVertex3f(k + 0.09, l + 0.11, 0);
    glVertex3f(k + 0.09, l + 0.12, 0);
    glVertex3f(k + 0.10, l + 0.12, 0);
    glVertex3f(k + 0.10, l + 0.11, 0);

    //ojo
    glVertex3f(k + 0.08, l + 0.12, 0);
    glVertex3f(k + 0.08, l + 0.14, 0);
    glVertex3f(k + 0.09, l + 0.14, 0);
    glVertex3f(k + 0.09, l + 0.12, 0);

    //camisa
    glVertex3f(k + 0.02, l + 0.08, 0);
    glVertex3f(k + 0.02, l + 0.09, 0);
    glVertex3f(k + 0.09, l + 0.09, 0);
    glVertex3f(k + 0.09, l + 0.08, 0);

    glVertex3f(k + 0.01, l + 0.07, 0);
    glVertex3f(k + 0.01, l + 0.08, 0);
    glVertex3f(k + 0.12, l + 0.08, 0);
    glVertex3f(k + 0.12, l + 0.07, 0);

    glVertex3f(k + 0.00, l + 0.06, 0);
    glVertex3f(k + 0.00, l + 0.07, 0);
    glVertex3f(k + 0.13, l + 0.07, 0);
    glVertex3f(k + 0.13, l + 0.06, 0);

    glVertex3f(k + 0.03, l + 0.05, 0);
    glVertex3f(k + 0.03, l + 0.06, 0);
    glVertex3f(k + 0.11, l + 0.06, 0);
    glVertex3f(k + 0.11, l + 0.05, 0);

    //zapatos
    glVertex3f(k + 0.01, l + 0.01, 0);
    glVertex3f(k + 0.01, l + 0.02, 0);
    glVertex3f(k + 0.05, l + 0.02, 0);
    glVertex3f(k + 0.05, l + 0.01, 0);
    glVertex3f(k + 0.00, l + 0.00, 0);
    glVertex3f(k + 0.00, l + 0.01, 0);
    glVertex3f(k + 0.05, l + 0.01, 0);
    glVertex3f(k + 0.05, l + 0.00, 0);

    glVertex3f(k + 0.08, l + 0.01, 0);
    glVertex3f(k + 0.08, l + 0.02, 0);
    glVertex3f(k + 0.12, l + 0.02, 0);
    glVertex3f(k + 0.12, l + 0.01, 0);
    glVertex3f(k + 0.08, l + 0.00, 0);
    glVertex3f(k + 0.08, l + 0.01, 0);
    glVertex3f(k + 0.13, l + 0.01, 0);
    glVertex3f(k + 0.13, l + 0.00, 0);

    //oberol
    glColor3f(0.96f, 0.21, 0);
    glVertex3f(k + 0.05, l + 0.07, 0);
    glVertex3f(k + 0.05, l + 0.09, 0);
    glVertex3f(k + 0.06, l + 0.09, 0);
    glVertex3f(k + 0.06, l + 0.07, 0);

    glVertex3f(k + 0.08, l + 0.07, 0);
    glVertex3f(k + 0.08, l + 0.08, 0);
    glVertex3f(k + 0.09, l + 0.08, 0);
    glVertex3f(k + 0.09, l + 0.07, 0);

    glVertex3f(k + 0.05, l + 0.06, 0);
    glVertex3f(k + 0.05, l + 0.07, 0);
    glVertex3f(k + 0.09, l + 0.07, 0);
    glVertex3f(k + 0.09, l + 0.06, 0);

    glVertex3f(k + 0.04, l + 0.04, 0);
    glVertex3f(k + 0.04, l + 0.06, 0);
    glVertex3f(k + 0.10, l + 0.06, 0);
    glVertex3f(k + 0.10, l + 0.04, 0);

    glVertex3f(k + 0.03, l + 0.03, 0);
    glVertex3f(k + 0.03, l + 0.04, 0);
    glVertex3f(k + 0.11, l + 0.04, 0);
    glVertex3f(k + 0.11, l + 0.03, 0);

    glVertex3f(k + 0.02, l + 0.02, 0);
    glVertex3f(k + 0.02, l + 0.03, 0);
    glVertex3f(k + 0.06, l + 0.03, 0);
    glVertex3f(k + 0.06, l + 0.02, 0);
    glVertex3f(k + 0.07, l + 0.02, 0);
    glVertex3f(k + 0.07, l + 0.03, 0);
    glVertex3f(k + 0.11, l + 0.03, 0);
    glVertex3f(k + 0.11, l + 0.02, 0);

    glEnd();
}

void cuadricula()
{


    glColor3f(0.3, 0.3, 0.3);
    glLineWidth(1.0);
    glBegin(GL_LINES);                //Crear lineas centrales de nuestro plano cartesiano.
    glVertex3f(-1.0, cont_a, 0.0);
    glVertex3f(1.0, cont_a, 0.0);
    glEnd();


}

void movimiento(void)
{

    if (cont_a <= 0.9)
    {
        cont_a = cont_a + 0.1;
    }
    cuadricula();

    glutPostRedisplay();
}




void myDisplay(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    //puntos_Ejemplo();
    mariosnes(K, L);
    Sleep(100);

    glutSwapBuffers();

}

void key(unsigned char key, int x, int y) {
    switch (key) {

    case 'r':
        vector[0] = 1;
        vector[1] = 0;
        vector[2] = 0;
        glutPostRedisplay();
        break;
    case 'g':
        vector[0] = 0;
        vector[1] = 1;
        vector[2] = 0;
        glutPostRedisplay();
        break;
    case 'b':
        vector[0] = 0;
        vector[1] = 0;
        vector[2] = 1;
        glutPostRedisplay();
        break;
    case 'w':
        if (L < 0.9)
        {
            L = L + 0.1;
        }
        glutPostRedisplay();
        break;
    case 's':
        if (L >= -0.9)
        {
            L = L - 0.1;
        }
        glutPostRedisplay();
        break;
    case 'd':
        if (K < 0.8)
        {
            K = K + 0.1;
        }
        glutPostRedisplay();
        break;
    case 'a':
        if (K >= -0.9)
        {
            K = K - 0.1;
        }
        glutPostRedisplay();
        break;

    }

}

// Funcion para crear la ventana en la cual vamos a desplegar nuestras geometricas
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(1000, 100);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Movimiento con OpenGL");
    glutDisplayFunc(&myDisplay);
    glutKeyboardFunc(key);
    glutIdleFunc(movimiento);
    glutMainLoop();
    return 0;
}