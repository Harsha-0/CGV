#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
void Man();
void reshape(int w, int h);
void timer(int);
bool vis = false;
void Myinit(){
 glClearColor(0.2,0.6,0.9,1);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();

}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1200,700);
   glutInitWindowPosition(-200,100);
   glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
   glutCreateWindow("Background for hoisting");
   Myinit();
   glutReshapeFunc(reshape);
   glutDisplayFunc(Man);
   glutTimerFunc(0,timer,0);

   glutMainLoop();
   return 0;
}
bool pole = true,flag=true,reach=false;
GLint x =420 , en=0, y=100,ya=50,xa=10;

void Man(){

glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad

    //background-light brown
    glColor3f(0.7,0.4,0.2) ; // light brown background1
    glVertex2f(0,470);
    glVertex2f(0,290);
    glVertex2f(40,290);
    glVertex2f(40,470);

    glColor3f(0.7,0.5,0.2) ; // light brown background2
    glVertex2f(40,450);
    glVertex2f(40,290);
    glVertex2f(90,290);
    glVertex2f(90,450);

    glColor3f(0.7,0.4,0.2) ; // light brown background3
    glVertex2f(90,490);
    glVertex2f(90,290);
    glVertex2f(110,290);
    glVertex2f(110,490);

    glColor3f(0.7,0.5,0.2) ; // light brown background4
    glVertex2f(110,446);
    glVertex2f(110,290);
    glVertex2f(150,290);
    glVertex2f(150,446);

    glColor3f(0.7,0.6,0.2) ; // light brown background5
    glVertex2f(150,455);
    glVertex2f(150,290);
    glVertex2f(180,290);
    glVertex2f(170,455);

    glColor3f(0.7,0.7,0.2) ; // light brown background6
    glVertex2f(180,415);
    glVertex2f(180,290);
    glVertex2f(220,290);
    glVertex2f(220,415);

    glColor3f(0.7,0.5,0.2) ; // light brown background7
    glVertex2f(220,475);
    glVertex2f(220,290);
    glVertex2f(250,290);
    glVertex2f(250,475);

    glColor3f(0.7,0.6,0.2) ; // light brown background8
    glVertex2f(250,485);
    glVertex2f(250,290);
    glVertex2f(288,290);
    glVertex2f(288,485);

    glColor3f(0.7,0.4,0.2) ; // light brown background9
    glVertex2f(288,489);
    glVertex2f(288,290);
    glVertex2f(312,290);
    glVertex2f(312,489);

    glColor3f(0.7,0.6,0.2) ; // light brown background10
    glVertex2f(312,455);
    glVertex2f(312,290);
    glVertex2f(344,290);
    glVertex2f(344,455);

    glColor3f(0.7,0.5,0.2) ; // light brown background11
    glVertex2f(344,435);
    glVertex2f(344,290);
    glVertex2f(366,290);
    glVertex2f(366,435);
    glColor3f(0.7,0.7,0.2) ; // light brown background12
    glVertex2f(366,425);
    glVertex2f(366,290);
    glVertex2f(378,290);
    glVertex2f(378,425);

    glColor3f(0.7,0.6,0.2) ; // light brown background13
    glVertex2f(378,445);
    glVertex2f(378,290);
    glVertex2f(430,290);
    glVertex2f(430,445);

    glColor3f(0.7,0.5,0.2) ; // light brown background14
    glVertex2f(430,470);
    glVertex2f(430,290);
    glVertex2f(470,290);
    glVertex2f(470,470);

    glColor3f(0.7,0.7,0.2) ; // light brown background15
    glVertex2f(470,490);
    glVertex2f(470,290);
    glVertex2f(490,290);
    glVertex2f(490,490);

    glColor3f(0.7,0.4,0.2) ; // light brown background16
    glVertex2f(490,485);
    glVertex2f(490,290);
    glVertex2f(500,290);
    glVertex2f(500,485);

    //--------------------------------
    glColor3f(0.1, 0.3, 0.2); // bg for the building
    glVertex2f(0,0);
    glVertex2f(0,290);
    glVertex2f(500,0);
    glVertex2f(500,290);

    glColor3f(0.6, 0.2, 0.0); // brown and the base for the buildings
    glVertex2f(100,200);
    glVertex2f(100,300);
    glVertex2f(390,300);
    glVertex2f(390,200);
    //window1
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(110, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(110, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(140, 280);
    glVertex2f(140, 220);

    //window1-small window0.6/0.2/0.1
    glColor3f(1, 1, 0.3); // brown
    glVertex2f(115, 230);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(115, 270);     //  so that the normal (front-face) is facing you
    glVertex2f(135, 270);
    glVertex2f(135, 230);

    //window2
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(150, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(150, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(180, 280);
    glVertex2f(180, 220);



    //window3
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(190, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(190, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(220, 280);
    glVertex2f(220, 220);
    //window4-----x y
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(230, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(230, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(260, 280);
    glVertex2f(260, 220);
    //window5-----x y
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(270, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(270, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(300, 280);
    glVertex2f(300, 220);
    //window6-----x y
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(310, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(310, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(340, 280);
    glVertex2f(340, 220);
    //window7-----x y
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(350, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(350, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(380, 280);
    glVertex2f(380, 220);
    //pillar1
    glColor3f(0.6, 0.2, 0.0); // brown and the base for the buildings
    glVertex2f(70,200);
    glVertex2f(70,400);
    glVertex2f(100,400);
    glVertex2f(100,200);
    //pillar2
    glColor3f(0.6, 0.2, 0.0); // brown and the base for the buildings
    glVertex2f(390,200);
    glVertex2f(390,400);
    glVertex2f(420,400);
    glVertex2f(420,200);
    //above body
    glColor3f(0.6, 0.2, 0.0); // brown and the base for the buildings
    glVertex2f(160,300);
    glVertex2f(160,350);
    glVertex2f(330,350);
    glVertex2f(330,300);

    //window above bdy
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(230, 290);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(230, 320);     //  so that the normal (front-face) is facing you
    glVertex2f(260, 320);
    glVertex2f(260, 290);

    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(270, 290);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(270, 320);     //  so that the normal (front-face) is facing you
    glVertex2f(300, 320);
    glVertex2f(300, 290);

    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(190, 290);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(190, 320);     //  so that the normal (front-face) is facing you
    glVertex2f(220, 320);
    glVertex2f(220, 290);

    glColor3f(0.0, 0.9, 0.1); //lawn green0/0.9/0.1
    glVertex2f(10,0);
    glVertex2f(70,200);
    glVertex2f(420,200);
    glVertex2f(480,0);

    glColor3f(1, 0.6, 0); //lawn cover
    glVertex2f(23,10);
    glVertex2f(73,190);
    glVertex2f(417,190);
    glVertex2f(467,10);

//    glColor3f(0.7, 0.3, 0.1); // brown
//    glVertex2f(230, 220);     // Define vertices in counter-clockwise (CCW) order
//    glVertex2f(230, 280);     //  so that the normal (front-face) is facing you
//    glVertex2f(260, 280);
//    glVertex2f(260, 220);
//


   glEnd();

   glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
    glColor3f(0.7, 0.3, 0.1); // brown triangle
      glVertex2f(70, 400);
      glVertex2f(100, 400);
      glVertex2f(85, 430);
    //head for pillars
    glColor3f(0.7, 0.3, 0.1); // brown triangle
    glVertex2f(390, 400);
    glVertex2f(420, 400);
    glVertex2f(405,430);

    //dome
    glColor3f(0.7, 0.3, 0.1); // brown triangle
    glVertex2f(160,350);
    glVertex2f(330,350);
    glVertex2f(245,400);
   glEnd();

 /*------------------------------------------FLAGbase------------------------------------------------*/
 glColor3f(0.3f,0.3f,0.3f);   //stepbase
 glBegin(GL_QUADS);
   glVertex2i(50,90);
   glVertex2i(110,90);
   glVertex2i(110,98);
   glVertex2i(50,98);
 glEnd();

   glColor3f(0.2f,0.2f,0.2f); //steps
 glBegin(GL_QUADS);
   glVertex2i(60,98);
   glVertex2i(100,98);
   glVertex2i(100,105);
   glVertex2i(60,105);
 glEnd();
     glColor3f(0.5f,0.5f,1.0f); //pole
 glBegin(GL_QUADS);
   glVertex2i(80,105);
   glVertex2i(85,105);
   glVertex2i(85,420);
   glVertex2i(80,420);
glEnd();
  if(en==0){
   glColor3f(0.5f,0.8f,1.0f); //knot
 glBegin(GL_QUADS);
   glVertex2i(78,y+55);
   glVertex2i(88,y+55);
   glVertex2i(88,y+70);
   glVertex2i(78,y+70);
glEnd();
  }
/*------------------------------------------FLAG--------------------------------------------------*/
 GLdouble xf[4] ,t,yf1[4],yf2[4],yf3[4];
 GLdouble xt[100],y1t[100],y2t[100],yt[100];
 xf[0]=85; xf[1]=105 ; xf[2] =110; xf[3]=130-xa;
 yf1[0]=400; yf1[1]=400+ya; yf1[2]=400-ya; yf1[3]=400;
 yf2[0]=380; yf2[1]=380+ya; yf2[2]=380-ya; yf2[3]=380;
 yf3[0]=360; yf3[1]=360+ya; yf3[2]=360-ya; yf3[3]=360;
 int i,c;
 if(reach){
 for(i=0,t=0,c=0;i<100,t<1;t=t+0.02,i++){
   xt[i]=pow(1-t,3)*xf[0]+3*t*pow(1-t,2)*xf[1]+3*t*t*(1-t)*xf[2]+pow(t,3)*xf[3];
   yt[i] = pow(1-t,3)*yf1[0]+3*t*pow(1-t,2)*yf1[1]+3*pow(t,2)*(1-t)*yf1[2]+pow(t,3)*yf1[3];
   y1t[i] = pow(1-t,3)*yf2[0]+3*t*pow(1-t,2)*yf2[1]+3*pow(t,2)*(1-t)*yf2[2]+pow(t,3)*yf2[3];
   y2t[i] = pow(1-t,3)*yf3[0]+3*t*pow(1-t,2)*yf3[1]+3*pow(t,2)*(1-t)*yf3[2]+pow(t,3)*yf3[3];
   c++;
   }
   glColor3f(1.0f,1.0f,0.0f);
   glPointSize(3);
   glBegin(GL_QUAD_STRIP);
     for(i=0;i<c;i++){
        glVertex2d(xt[i],yt[i]);
        glVertex2d(xt[i],y1t[i]);
     }
   glEnd();
 glColor3f(1.0f,0.0f,0.0f);
   glPointSize(3);
   glBegin(GL_QUAD_STRIP);
     for(i=0;i<c;i++){
        glVertex2d(xt[i],y1t[i]);
        glVertex2d(xt[i],y2t[i]);
     }
   glEnd();

 }













/* -----------------------------------------MAN---------------------------------------------------*/
  if(!vis){
  glColor3f(1.0f,0.0f,0.0f); //leg
  glBegin(GL_QUADS);
   glVertex2i(x,100);
   glVertex2i(x+10,100);
   glVertex2i(x+10,130);
   glVertex2i(x,130);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //shorts
  glBegin(GL_QUADS);
   glVertex2i(x-10,130);
   glVertex2i(x+10,130);
   glVertex2i(x+10,160);
   glVertex2i(x-10,160);
 glEnd();
  glColor3f(1.5f,0.5f,0.0f);    //shoe
  glBegin(GL_QUADS);
   glVertex2i(x-10,90);
   glVertex2i(x+10,90);
   glVertex2i(x+10,100);
   glVertex2i(x-10,100);
 glEnd();

 glColor3f(0.0f,0.3f,0.5f); //body
  glBegin(GL_QUADS);
   glVertex2i(x-10,160);
   glVertex2i(x+10,160);
   glVertex2i(x+10,180);
   glVertex2i(x-10,180);
 glEnd();

 glColor3f(0.0f,0.3f,0.5f); //body
  glBegin(GL_QUADS);
   glVertex2i(x-10,180);
   glVertex2i(x+10,180);
   glVertex2i(x+10,190);
   glVertex2i(x,190);
 glEnd();

 glColor3f(1.0f,0.3f,0.5f); //hand
  glBegin(GL_QUADS);
   glVertex2i(x,160);
   glVertex2i(x+10,160);
   glVertex2i(x+10,180);
   glVertex2i(x,180);
 glEnd();

 glColor3f(1.0f,0.3f,0.5f); //hand
  glBegin(GL_QUADS);
   glVertex2i(x,150);
   glVertex2i(x+10,150);
   glVertex2i(x+10,170);
   glVertex2i(x,170);
 glEnd();

 glColor3f(1.0f,0.3f,0.5f); //hand
  glBegin(GL_QUADS);
   glVertex2i(x-2,150);
   glVertex2i(x,150);
   glVertex2i(x,160);
   glVertex2i(x-2,160);
 glEnd();

 glColor3f(1.0f,0.3f,0.5f); //hand
  glBegin(GL_QUADS);
   glVertex2i(x,190);
   glVertex2i(x+10,190);
   glVertex2i(x+10,195);
   glVertex2i(x,195);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //head hair
  glBegin(GL_QUADS);
   glVertex2i(x+3,195);
   glVertex2i(x+10,195);
   glVertex2i(x+12,220);
   glVertex2i(x+3,220);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //head hair
  glBegin(GL_QUADS);
   glVertex2i(x-4,220);
   glVertex2i(x+10,220);
   glVertex2i(x+10,224);
   glVertex2i(x-4,224);
 glEnd();


  glColor3f(1.0f,0.3f,0.5f); //face
  glBegin(GL_QUADS);
   glVertex2i(x-4,195);
   glVertex2i(x+3,195);
   glVertex2i(x+3,222);
   glVertex2i(x-4,222);
 glEnd();
 }

glutSwapBuffers();
}


void reshape(int w, int h){
 glViewport(0,0,(GLsizei)w,(GLsizei)h);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(0,500,0,500);
 glMatrixMode(GL_MODELVIEW);
}


void timer (int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
    if(x>120)
        x=x-0.2;
        else
           pole=false;
    if(y<330&& !pole)
        y=y+1;
    if(y==330){
        en=1;
        reach=true;
          }

    if(ya>-50&&flag)
        ya=ya-2;
    if(ya==-48&&flag)
        flag=false;
    if(ya<50&&!flag)
        ya=ya+2;
    if(ya==48&&!flag)
        flag=true;

        if(xa>0&&flag)
        xa=xa-0.5;
    if(xa==2&&flag)
        flag=false;
    if(xa<10&&!flag)
        xa=xa+0.5;
    if(xa==8&&!flag)
        flag=true;
}



