// HelloOpenGL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <GL/glut.h>
#include <iostream>

void display(void)
{
    // Seta a cor de backgroud: vermelho e opaco
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);

    // Limpa o buffer onde será desenhado e pinta o backgroud com a cor setada com o glClearColor()
    glClear(GL_COLOR_BUFFER_BIT);

    // Atualiza a tela com o que foi desenhado no buffer
    glFlush();
}

void display_triangle(void)
{
    glClearColor(0.1f, 1.0f, 0.9f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);  // Conjunt de três vértices formam um triângulo
    glColor4f(1.0f, 0.0f, 0.0f,1.0f); // Vermelho
    glVertex2f(0.0f, 0.0f);
    glColor4f(1.0f, 1.0f, 0.0f,0.0f); // Verde
    glVertex2f(0.5f, 0.25f);
    glColor4f(0.0f, 1.0f, 0.0f,0.5f); // Azul
    glVertex2f(0.0f, 0.5f);
    glEnd();
    
    //glFlush();
    glutSwapBuffers();
}

void display_primitives(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);  // Cada 4 vértices formam um quadrado
    glColor3f(1.0f, 0.0f, 0.0f); // Vermelho
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, 0.7f);
    glVertex2f(-0.8f, 0.7f);

    glColor3f(0.0f, 1.0f, 0.0f); // Verde
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.1f, -0.6f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-0.7f, 0.0f);

    glColor3f(0.2f, 0.2f, 0.2f); // Cinza escuro
    glVertex2f(-0.9f, -0.7f);
    glColor3f(1.0f, 1.0f, 1.0f); // Branco
    glVertex2f(-0.5f, -0.7f);
    glColor3f(0.2f, 0.2f, 0.2f); // Cinza escuro
    glVertex2f(-0.5f, -0.3f);
    glColor3f(1.0f, 1.0f, 1.0f); // Branco
    glVertex2f(-0.9f, -0.3f);
    glEnd();

    glBegin(GL_TRIANGLES);  // Conjunt de três vértices formam um triângulo
    glColor3f(0.0f, 0.0f, 1.0f); // Azul
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.4f, -0.1f);

    glColor3f(1.0f, 0.0f, 0.0f); // Vermelho
    glVertex2f(0.3f, -0.4f);
    glColor3f(0.0f, 1.0f, 0.0f); // Verde
    glVertex2f(0.9f, -0.4f);
    glColor3f(0.0f, 0.0f, 1.0f); // Azul
    glVertex2f(0.6f, -0.9f);
    glEnd();

    glBegin(GL_POLYGON);  // Conjunto de vértices que formam um polígono qualquer
    glColor3f(1.0f, 1.0f, 0.0f); // Amarelo
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.4f, 0.6f);
    glVertex2f(0.3f, 0.4f);
    glEnd();

    //glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    // Inicializa o GLUT
    glutInit(&argc, argv);

    // Inicializa o sistema gráfico
    // Ele avisa a GLUT que tipo de modo de exibição deve ser usado quando a janela é criada
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    // Cria a janela com o título passado como parâmetro
    glutCreateWindow("Meu Desenho com OpenGL!");

    // Seta o tamanho inicial da janela
    glutInitWindowSize(500, 500);

    // Posiciona a janela no canto superior esquerdo
    glutInitWindowPosition(100, 100);

    // Seta a função Callback que será chamada quando sempre que o GLU achar que a o Display necessita ser redesenhado
    glutDisplayFunc(display_primitives);

    // Inicia o loop de processamento de eventos do GLUT
    glutMainLoop();

    return 0;
}