#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>

void initGL() {
    glClearColor(0.0f,0.0f,1.0f,1.0f);
}

void display(){
 glClear(GL_COLOR_BUFFER_BIT);

 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();
 //SHOES
 glPushMatrix();
 glTranslatef(-0.1f,0.0f,0.0f);
 glBegin(GL_QUADS);
  glColor3f(0.0f,0.0f,0.0f);
   glVertex2f(-0.2f,-0.8f);
   glVertex2f(-0.0f,-0.8f);
   glVertex2f(0.0f,-0.9f);
   glVertex2f(-0.2f,-0.9f);
 glEnd();

  glPopMatrix();
  glPushMatrix();
  glTranslatef(0.2f,0.0f,0.0f);
  glBegin(GL_QUADS);
  glColor3f(0.0f,0.0f,0.0f);
   glVertex2f(-0.2f,-0.8f);
   glVertex2f(-0.0f,-0.8f);
   glVertex2f(0.0f,-0.9f);
   glVertex2f(-0.2f,-0.9f);
 glEnd();

 //LEGS
   glPopMatrix();
  glPushMatrix();
  glTranslatef(0.1f,0.0f,0.0f);
  glBegin(GL_QUADS);
  glColor3f(1.0f,0.1f,0.0f);
   glVertex2f(-0.1f,-0.4f);
   glVertex2f(-0.0f,-0.4f);
   glVertex2f(0.0f,-0.9f);
   glVertex2f(-0.1f,-0.9f);
 glEnd();

 glPopMatrix();
  glPushMatrix();
  glTranslatef(-0.1f,0.0f,0.0f);
  glBegin(GL_QUADS);
  glColor3f(1.0f,0.1f,0.0f);
   glVertex2f(-0.1f,-0.4f);
   glVertex2f(-0.0f,-0.4f);
   glVertex2f(0.0f,-0.9f);
   glVertex2f(-0.1f,-0.9f);
 glEnd();

  //BODY
 glPopMatrix();
 glPushMatrix();
 glTranslatef(-0.1f,0.0f,0.0f);
 glBegin(GL_TRIANGLES);
  glColor3f(0.0f,0.1f,0.1f);
  glVertex2f(-0.1f,-0.4f);
  glVertex2f(0.2f,-0.4f);
  glVertex2f(0.035f,-0.6f);
 glEnd();


  glPopMatrix();
  glPushMatrix();
  glTranslatef(0.1f,0.5f,0.0f);
  glBegin(GL_QUADS);
  glColor3f(0.0f,0.0f,0.0f);
   glVertex2f(-0.35f,-0.55f);
   glVertex2f(0.051f,-0.55f);
   glVertex2f(0.0f,-0.9f);
   glVertex2f(-0.3f,-0.9f);
 glEnd();

 glPopMatrix();
  glPushMatrix();
  glTranslatef(0.1f,0.5f,0.0f);
  glBegin(GL_QUADS);
  glColor3f(0.0f,0.0f,0.0f);
   glVertex2f(-0.05f,-0.4f);
   glVertex2f(-0.25f,-0.4f);
   glVertex2f(-0.35f,-0.55f);
   glVertex2f(0.051f,-0.55f);
 glEnd();

  glPopMatrix();
  glPushMatrix();
 glTranslatef(0.01f,1.0f,0.0f);
 glBegin(GL_QUADS);
  glColor3f(1.0f,1.0f,0.0f);
   glVertex2f(-0.1f,-0.8f);
   glVertex2f(0.0f,-0.8f);
   glVertex2f(0.0f,-0.9f);
   glVertex2f(-0.1f,-0.9f);
 glEnd();

 glFlush();
}

int main(int argc,char** argv)
{
  glutInit(&argc,argv);
  glutInitWindowSize(640,480);
  glutInitWindowPosition(50,50);
  glutCreateWindow("Man");
  glutDisplayFunc(display);
  initGL();
  glutMainLoop();
  return 0;
}



