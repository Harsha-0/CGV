#include<GLUT/glut.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
void Man();
void reshape(int w, int h);
void timer(int);
void keyboard(unsigned char key,int x,int y);

bool vis = false;
static int aniflag=0;

void drawText(float x,float y,char *string)
{
 glColor3f(0,0,0);
char *c;
glRasterPos2f(x,y);
for (c=string;*c != '\0'; c++)
{
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
}
}

void menu (int n){
 if(n==1)
    aniflag =1;
 else if(n==2)
    aniflag =0;
 else
    exit(0);

 glutPostRedisplay();

}
void Myinit(){
 glClearColor(0.2,0.6,0.9,1);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();

 glutCreateMenu(menu);
 glutAddMenuEntry("Start",1);
 glutAddMenuEntry("Stop",2);
  glutAddMenuEntry("exit",0);
  glutAttachMenu(GLUT_RIGHT_BUTTON);
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
GLint x =420,x1=420,en=0,y=100,y11=200,ya=50,xa=10,y2=150,x2=230;


void Man(){

glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad

    //background-light brown
    glColor3f(0.7,0.4,0.2) ; // light brown background1
    glVertex2f(0,440);
    glVertex2f(0,290);
    glVertex2f(40,290);
    glVertex2f(40,440);

    glColor3f(0.7,0.5,0.2) ; // light brown background2
    glVertex2f(40,420);
    glVertex2f(40,290);
    glVertex2f(90,290);
    glVertex2f(90,420);

    glColor3f(0.7,0.4,0.2) ; // light brown background3
    glVertex2f(90,450);
    glVertex2f(90,290);
    glVertex2f(110,290);
    glVertex2f(110,450);

    glColor3f(0.7,0.5,0.2) ; // light brown background4
    glVertex2f(110,406);
    glVertex2f(110,290);
    glVertex2f(150,290);
    glVertex2f(150,406);

    glColor3f(0.7,0.6,0.2) ; // light brown background5
    glVertex2f(150,415);
    glVertex2f(150,290);
    glVertex2f(180,290);
    glVertex2f(170,415);

    glColor3f(0.7,0.7,0.2) ; // light brown background6
    glVertex2f(180,385);
    glVertex2f(180,290);
    glVertex2f(220,290);
    glVertex2f(220,385);

    glColor3f(0.7,0.5,0.2) ; // light brown background7
    glVertex2f(220,435);
    glVertex2f(220,290);
    glVertex2f(250,290);
    glVertex2f(250,435);

    glColor3f(0.7,0.6,0.2) ; // light brown background8
    glVertex2f(250,445);
    glVertex2f(250,290);
    glVertex2f(288,290);
    glVertex2f(288,445);

    glColor3f(0.7,0.4,0.2) ; // light brown background9
    glVertex2f(288,449);
    glVertex2f(288,290);
    glVertex2f(312,290);
    glVertex2f(312,449);

    glColor3f(0.7,0.6,0.2) ; // light brown background10
    glVertex2f(312,415);
    glVertex2f(312,290);
    glVertex2f(344,290);
    glVertex2f(344,415);

    glColor3f(0.7,0.5,0.2) ; // light brown background11
    glVertex2f(344,395);
    glVertex2f(344,290);
    glVertex2f(366,290);
    glVertex2f(366,395);
    glColor3f(0.7,0.7,0.2) ; // light brown background12
    glVertex2f(366,385);
    glVertex2f(366,290);
    glVertex2f(378,290);
    glVertex2f(378,385);

    glColor3f(0.7,0.6,0.2) ; // light brown background13
    glVertex2f(378,405);
    glVertex2f(378,290);
    glVertex2f(430,290);
    glVertex2f(430,405);

    glColor3f(0.7,0.5,0.2) ; // light brown background14
    glVertex2f(430,430);
    glVertex2f(430,290);
    glVertex2f(470,290);
    glVertex2f(470,430);

    glColor3f(0.7,0.7,0.2) ; // light brown background15
    glVertex2f(470,450);
    glVertex2f(470,290);
    glVertex2f(490,290);
    glVertex2f(490,450);

    glColor3f(0.7,0.4,0.2) ; // light brown background16
    glVertex2f(490,445);
    glVertex2f(490,290);
    glVertex2f(500,290);
    glVertex2f(500,445);

    //--------------------------------
    glColor3f(0.1, 0.3, 0.2); // bg for the building dark green
    glVertex2f(0,290);
    glVertex2f(0,0);
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
    glColor3f(0.8, 0.6, 0.2); // brown
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

    //window2-small window0.6/0.2/0.1
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(155, 230);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(155, 270);     //  so that the normal (front-face) is facing you
    glVertex2f(175, 270);
    glVertex2f(175, 230);

    //window3
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(190, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(190, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(220, 280);
    glVertex2f(220, 220);
    //window3-small window0.6/0.2/0.1
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(195, 230);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(195, 270);     //  so that the normal (front-face) is facing you
    glVertex2f(215, 270);
    glVertex2f(215, 230);
    //window4-----x y-middle
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(230, 200);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(230, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(260, 280);
    glVertex2f(260, 200);
    //window4-small window0.6/0.2/0.1
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(235, 203);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(235, 270);     //  so that the normal (front-face) is facing you
    glVertex2f(255, 270);
    glVertex2f(255, 203);
    //window5-----x y
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(270, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(270, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(300, 280);
    glVertex2f(300, 220);
    //window5-small window0.6/0.2/0.1
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(275, 230);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(275, 270);     //  so that the normal (front-face) is facing you
    glVertex2f(295, 270);
    glVertex2f(295, 230);
    //window6-----x y
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(310, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(310, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(340, 280);
    glVertex2f(340, 220);
    //window6-small window0.6/0.2/0.1
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(315, 230);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(315, 270);     //  so that the normal (front-face) is facing you
    glVertex2f(335, 270);
    glVertex2f(335, 230);
    //window7-----x y
    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(350, 220);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(350, 280);     //  so that the normal (front-face) is facing you
    glVertex2f(380, 280);
    glVertex2f(380, 220);
    //window7-small window0.6/0.2/0.1
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(355, 230);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(355, 270);     //  so that the normal (front-face) is facing you
    glVertex2f(375, 270);
    glVertex2f(375, 230);
    glEnd();
    //------treessssss
       glBegin(GL_TRIANGLES);
        //tree1
        glColor3f(0.6,0.8,0.196078);
        glVertex2f(30,180);
        glVertex2f(45,300);
        glVertex2f(60,180);
        //tree2
        glColor3f(0.6,0.8,0.196078);
        glVertex2f(10,250);
        glVertex2f(25,370);
        glVertex2f(40,250);
        //tree3
        glColor3f(0.6,0.8,0.196078);
        glVertex2f(400,250);
        glVertex2f(420,370);
        glVertex2f(440,250);
        glEnd();
        
        glBegin(GL_TRIANGLES);
        //tree4
        glColor3f(0.6,0.8,0.196078);
        glVertex2f(430,220);
        glVertex2f(450,340);
        glVertex2f(470,220);
        glEnd();
        glBegin(GL_TRIANGLES);
        //tree5
        glColor3f(0.6,0.8,0.196078);
        glVertex2f(390,190);
        glVertex2f(410,300);
        glVertex2f(430,190);
        glEnd();
    
    glBegin(GL_QUADS);
    //pillar1
    glColor3f(0.6, 0.2, 0.0); // brown and the base for the buildings
    glVertex2f(70,200);
    glVertex2f(70,400);
    glVertex2f(100,400);
    glVertex2f(100,200);
    //pillar image
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(75,380);
    glVertex2f(75,220);
    glVertex2f(95,220);
    glVertex2f(95,380);
    //pillar image image1
    glColor3f(0.9,0.5,0.3); // brown
    glVertex2f(78,370);
    glVertex2f(78,230);
    glVertex2f(92,230);
    glVertex2f(92,370);
    //pillar2
    glColor3f(0.6, 0.2, 0.0); // brown and the base for the buildings
    glVertex2f(390,200);
    glVertex2f(390,400);
    glVertex2f(420,400);
    glVertex2f(420,200);
    //pillar image2
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(395,380);
    glVertex2f(395,220);
    glVertex2f(415,220);
    glVertex2f(415,380);
    //pillar image image2

    glColor3f(0.9,0.5,0.3); // brown
    glVertex2f(398,370);
    glVertex2f(398,230);
    glVertex2f(412,230);
    glVertex2f(412,370);
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

    //window11-small window0.6/0.2/0.1
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(233, 295);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(233, 315);     //  so that the normal (front-face) is facing you
    glVertex2f(257, 315);
    glVertex2f(257, 295);

    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(270, 290);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(270, 320);     //  so that the normal (front-face) is facing you
    glVertex2f(300, 320);
    glVertex2f(300, 290);

    //window12-small window0.6/0.2/0.1
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(273, 295);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(273, 315);     //  so that the normal (front-face) is facing you
    glVertex2f(297, 315);
    glVertex2f(297, 295);

    glColor3f(0.7, 0.3, 0.1); // brown
    glVertex2f(190, 290);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(190, 320);     //  so that the normal (front-face) is facing you
    glVertex2f(220, 320);
    glVertex2f(220, 290);

    //window12-small window0.6/0.2/0.1
    glColor3f(0.8, 0.6, 0.2); // brown
    glVertex2f(193, 295);     // Define vertices in counter-clockwise (CCW) order
    glVertex2f(193, 315);     //  so that the normal (front-face) is facing you
    glVertex2f(217, 315);
    glVertex2f(217, 295);

    glColor3f(0.0, 0.9, 0.1); //lawn green0/0.9/0.1
    glVertex2f(10,0);
    glVertex2f(70,200);
    glVertex2f(420,200);
    glVertex2f(480,0);

    glColor3f(1, 0.6, 0); //lawn cover organge
    glVertex2f(23,10);
    glVertex2f(73,195);
    glVertex2f(417,195);
    glVertex2f(467,10);

    glColor3f(0.75,0.75,0.75); //path
    glVertex2f(105,70);
    glVertex2f(120,120);
    glVertex2f(426,120);
    glVertex2f(440,70);

    glColor3f(0.84,0.84,0.84); //path block 1
    glVertex2f(110,75);//LB
    glVertex2f(122,115);
    glVertex2f(424,115);
    glVertex2f(436,75);//RB

   glEnd();

   glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle

    //tree1
    glColor3f(0.6,0.8,0.196078);
    glVertex2f(30,180);
    glVertex2f(45,300);
    glVertex2f(60,180);
    //tree2
    glColor3f(0.6,0.8,0.196078);
    glVertex2f(10,250);
    glVertex2f(25,370);
    glVertex2f(40,250);

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
     // triangle inside triangle
        glColor3f(0.8,0.5,0.1); // brown triangle
        glVertex2f(182,358);
        glVertex2f(245,393);//middle
        glVertex2f(308,358);
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
     glColor3f(0.52,0.66,0.84); //pole
 glBegin(GL_QUADS);
   glVertex2i(78,105);
   glVertex2i(83,105);
   glVertex2i(83,420);
   glVertex2i(78,420);
glEnd();
  if(en==0){
   glColor3f(0.90,0.17,0.31); //knot
 glBegin(GL_QUADS);
   glVertex2i(74,y+55);
   glVertex2i(88,y+55);
   glVertex2i(88,y+70);
   glVertex2i(74,y+70);
glEnd();
  }
/*------------------------------------------FLAG--------------------------------------------------*/
 GLdouble xf[4] ,t,yf1[4],yf2[4],yf3[4];
 GLdouble xt[100],y1t[100],y2t[100],yt[100];
 xf[0]=83; xf[1]=105 ; xf[2] =110; xf[3]=130-xa;
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

 /*----------------------------------------------MAN2-------------------------------*/
  
    glColor3f(0.9,0.7,0.6); //leg
  glBegin(GL_QUADS);
   glVertex2i(x1,y11-90);
   glVertex2i(x1+10,y11-90);
   glVertex2i(x1+10,y11-60);
   glVertex2i(x1,y11-60);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //shorts
  glBegin(GL_QUADS);
   glVertex2i(x1-10,y11-60);
   glVertex2i(x1+10,y11-60);
   glVertex2i(x1+10,y11-30);
   glVertex2i(x1-10,y11-30);
 glEnd();
  glColor3f(1.5f,0.5f,0.0f);    //shoe
  glBegin(GL_QUADS);
   glVertex2i(x1-10,y11-100);
   glVertex2i(x1+10,y11-100);
   glVertex2i(x1+10,y11-90);
   glVertex2i(x1-10,y11-90);
 glEnd();

 glColor3f(0.0f,0.3f,0.5f); //body
  glBegin(GL_QUADS);
   glVertex2i(x1-10,y11-30);
   glVertex2i(x1+10,y11-30);
   glVertex2i(x1+10,y11-10);
   glVertex2i(x1-10,y11-10);
 glEnd();

 glColor3f(0.0f,0.3f,0.5f); //body
  glBegin(GL_QUADS);
   glVertex2i(x1-10,y11-10);
   glVertex2i(x1+10,y11-10);
   glVertex2i(x1+10,y11);
   glVertex2i(x1,y11);
 glEnd();

    glColor3f(0.9,0.7,0.6); //hand
  glBegin(GL_QUADS);
   glVertex2i(x1,y11-30);
   glVertex2i(x1+10,y11-30);
   glVertex2i(x1+10,y11-10);
   glVertex2i(x1,y11-10);
 glEnd();

    glColor3f(0.9,0.7,0.6); //hand
  glBegin(GL_QUADS);
   glVertex2i(x1,y11-40);
   glVertex2i(x1+10,y11-40);
   glVertex2i(x1+10,y11-20);
   glVertex2i(x1,y11-20);
 glEnd();

 /*glColor3f(1.0f,0.3f,0.5f); //hand
  glBegin(GL_QUADS);
   glVertex2i(x1-2,y11-40);
   glVertex2i(x1,y11-140);
   glVertex2i(x1,y11-30);
   glVertex2i(x1-2,y11-30);
 glEnd();*/

    glColor3f(0.9,0.7,0.6); //neck
  glBegin(GL_QUADS);
   glVertex2i(x1,y11);
   glVertex2i(x1+10,y11);
   glVertex2i(x1+10,y11+5);
   glVertex2i(x1,y11+5);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //head hair
  glBegin(GL_QUADS);
   glVertex2i(x1+3,y11+5);
   glVertex2i(x1+10,y11+5);
   glVertex2i(x1+12,y11+30);
   glVertex2i(x1+3,y11+30);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //head hair
  glBegin(GL_QUADS);
   glVertex2i(x1-4,y11+30);
   glVertex2i(x1+10,y11+30);
   glVertex2i(x1+10,y11+34);
   glVertex2i(x1-4,y11+34);
 glEnd();


    glColor3f(0.9,0.7,0.6); //face
  glBegin(GL_QUADS);
   glVertex2i(x1-4,y11+5);
   glVertex2i(x1+3,y11+5);
   glVertex2i(x1+3,y11+32);
   glVertex2i(x1-4,y11+32);
 glEnd();

 /* -----------------------------------------MAINMAN1---------------------------------------------------*/
  if(!vis){
      glColor3f(0.9,0.7,0.6); //leg
  glBegin(GL_QUADS);
   glVertex2i(x,100);
   glVertex2i(x+10,100);
   glVertex2i(x+10,130);
   glVertex2i(x,130);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //shorts
  glBegin(GL_QUADS);
   glVertex2i(x-3,105);
   glVertex2i(x+10,90);
   glVertex2i(x+10,160);
   glVertex2i(x-5,160);
 glEnd();
  glColor3f(0.9,0.1,0.1);    //shoe
  glBegin(GL_QUADS);
   glVertex2i(x-10,90);
   glVertex2i(x+10,90);
   glVertex2i(x+10,100);
   glVertex2i(x-8,95);
 glEnd();

 glColor3f(0.0f,0.3f,0.5f); //body
  glBegin(GL_QUADS);
   glVertex2i(x-5,160);
   glVertex2i(x+10,160);
   glVertex2i(x+10,180);
   glVertex2i(x-5,180);
 glEnd();

 glColor3f(0.0f,0.3f,0.5f); //body
  glBegin(GL_QUADS);
   glVertex2i(x-5,180);
   glVertex2i(x+10,180);
   glVertex2i(x+7,190);
   glVertex2i(x,190);
 glEnd();

      glColor3f(0.9,0.7,0.6); //hand
  glBegin(GL_QUADS);
   glVertex2i(x,160);
   glVertex2i(x+10,160);
   glVertex2i(x+10,180);
   glVertex2i(x,180);
 glEnd();

      glColor3f(0.9,0.7,0.6); //hand
  glBegin(GL_QUADS);
   glVertex2i(x,150);
   glVertex2i(x+10,150);
   glVertex2i(x+10,170);
   glVertex2i(x,170);
 glEnd();

      glColor3f(0.9,0.7,0.6);//hand
  glBegin(GL_QUADS);
   glVertex2i(x-2,150);
   glVertex2i(x,150);
   glVertex2i(x,160);
   glVertex2i(x-2,160);
 glEnd();

      glColor3f(0.9,0.7,0.6); //hand
  glBegin(GL_QUADS);
   glVertex2i(x,190);
   glVertex2i(x+7,190);
   glVertex2i(x+7,195);
   glVertex2i(x,195);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //head hair
  glBegin(GL_QUADS);
   glVertex2i(x+3,195);
   glVertex2i(x+10,195);
   glVertex2i(x+12,220);
   glVertex2i(x+3,220);
 glEnd();

      glColor3f(0.9,0.7,0.6); //face
      glBegin(GL_QUADS);
       glVertex2i(x-4,195);
       glVertex2i(x+3,195);
       glVertex2i(x+3,222);
       glVertex2i(x-4,222);
     glEnd();

 glColor3f(0.0f,0.0f,0.0f); //head hair
  glBegin(GL_QUADS);
   glVertex2i(x-4,216);
   glVertex2i(x+10,216);
   glVertex2i(x+10,224);
   glVertex2i(x-4,224);
 glEnd();
 }
 /*----------------------------------------------MAN2-------------------------------*/
  glColor3f(0.9,0.7,0.6); //leg
  glBegin(GL_QUADS);
   glVertex2i(x2,y2-90);
   glVertex2i(x2+10,y2-90);
   glVertex2i(x2+10,y2-60);
   glVertex2i(x2,y2-60);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //shorts
  glBegin(GL_QUADS);
   glVertex2i(x2-3,y2-88);
   glVertex2i(x2+10,y2-88);
   glVertex2i(x2+10,y2-30);
   glVertex2i(x2-3,y2-30);

 glEnd();
    

    
  glColor3f(1.5f,0.5f,0.0f);    //shoe
  glBegin(GL_QUADS);
   glVertex2i(x2-10,y2-100);
   glVertex2i(x2+10,y2-100);
   glVertex2i(x2+10,y2-90);
   glVertex2i(x2-10,y2-90);
 glEnd();

    glColor3f(0.0f,0.3f,0.5f); //body-td
  glBegin(GL_QUADS);
   glVertex2i(x2-3,y2-30);
   glVertex2i(x2+10,y2-30);
   glVertex2i(x2+10,y2-10);
   glVertex2i(x2-3,y2-10);
 glEnd();

    glColor3f(0.0f,0.3f,0.5f); //body--top
  glBegin(GL_QUADS);
   glVertex2i(x2-3,y2-10);
   glVertex2i(x2+10,y2-10);
   glVertex2i(x2+10,y2);
   glVertex2i(x2,y2);
 glEnd();

    glColor3f(0.9,0.7,0.6); //hand
  glBegin(GL_QUADS);
   glVertex2i(x2,y2-30);
   glVertex2i(x2+10,y2-30);
   glVertex2i(x2+10,y2-10);
   glVertex2i(x2,y2-10);
 glEnd();

    glColor3f(0.9,0.7,0.6); //hand
  glBegin(GL_QUADS);
   glVertex2i(x2,y2-40);
   glVertex2i(x2+10,y2-40);
   glVertex2i(x2+10,y2-20);
   glVertex2i(x2,y2-20);
 glEnd();

 /*glColor3f(1.0f,0.3f,0.5f); //hand
  glBegin(GL_QUADS);
   glVertex2i(x2-2,y2-40);
   glVertex2i(x2,y2-140);
   glVertex2i(x2,y2-30);
   glVertex2i(x2-2,y2-30);
 glEnd();*/

    glColor3f(0.9,0.7,0.6); //hand
  glBegin(GL_QUADS);
   glVertex2i(x2,y2);
   glVertex2i(x2+10,y2);
   glVertex2i(x2+10,y2+5);
   glVertex2i(x2,y2+5);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //head hair
  glBegin(GL_QUADS);
   glVertex2i(x2+3,y2+5);
   glVertex2i(x2+10,y2+5);
   glVertex2i(x2+12,y2+30);
   glVertex2i(x2+3,y2+30);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f); //head hair
  glBegin(GL_QUADS);
   glVertex2i(x2-4,y2+30);
   glVertex2i(x2+10,y2+30);
   glVertex2i(x2+10,y2+34);
   glVertex2i(x2-4,y2+34);
 glEnd();


    glColor3f(0.9,0.7,0.6); //face
  glBegin(GL_QUADS);
   glVertex2i(x2-4,y2+5);
   glVertex2i(x2+3,y2+5);
   glVertex2i(x2+3,y2+32);
   glVertex2i(x2-4,y2+32);
 glEnd();
drawText( 20,460,"KANNADA Rajyothsava FLAG HOISTING");
glutKeyboardFunc(keyboard);
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

    if(aniflag==1){
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
}
void keyboard(unsigned char key,int x,int y)
{
    if(key == 'e')
        exit(0);
    if (key== 'f')
        glutFullScreen();
    if (key == 32){
     if(aniflag==0)
        aniflag=1;
      else
        aniflag=0;
    }

}
