#include <unistd.h>
#include "truk.h"
#include "common.h"
#include "pohon.h"
#include "gedung.h"
#include "tembok.h"

//global variables
float angle=0.0, deltaAngle = 0.0, ratio;
float arah=0.0, deltaArah = 0.0;
float x=0.0f,y=3.75f,z=15.0f; // posisi awal kamera
float lx=0.0f,ly=0.0f,lz=-1.0f;
float tX=0,tY=0,tZ=-8,rX=0,rY=0,rZ=4;
int deltaMove = 0,h,w;
int bitmapHeight=12;
int accel= 0.25;
int deccel= -0.5;
double tRot=0;
int gas = 0, dir = 0;
float tmbZ1= -200, tmbZ2= 200, tmbX3= 200, tmbX4= -200;

void Reshape(int w1, int h1)
{
// Fungsi reshape
    if(h1 == 0) h1 = 1;
    w = w1;
    h = h1;
    ratio = 1.0f * w / h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0, 0, w, h);
    gluPerspective(45,ratio,0.1,1000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(
        x, y, z,
        x + lx,y + ly,z + lz,
        0.0f,1.0f,0.0f);
}
void orientMe(float ang)
{
// Fungsi ini untuk memutar arah kamera (tengok kiri/kanan)
    lx = sin(ang);
    lz = -cos(ang);
    glLoadIdentity();
    gluLookAt(x, y, z,
              x + lx,y + ly,z + lz,
              0.0f,1.0f,0.0f);
}
void moveMeFlat(int i)
{
// Fungsi ini untuk maju mundur kamera
    x = x + i*(lx)*0.1;
    z = z + i*(lz)*0.1;
    glLoadIdentity();
    gluLookAt(x, y, z,
              x + lx,y + ly,z + lz,
              0.0f,1.0f,0.0f);
}

void Gedung()
{
    //barat
    gedung(220,0,-185,10,0.9f,0.3f,0.5f,4);
    gedung(220,0,-170,10,0.9f,0.5f,0.5f,2);
    gedung(220,0,-155,10,0.4f,0.3f,0.5f,3);
    gedung(220,0,-140,10,0.3f,0.4f,0.5f,2);
    gedung(220,0,-125,10,0.1f,0.1f,0.5f,1);
    gedung(220,0,-110,10,0.1f,0.5f,0.5f,2);
    gedung(220,0,-95,10,0.1f,0.2f,0.5f,3);
    gedung(220,0,-80,10,0.2f,0.2f,0.5f,2);
    gedung(220,0,-65,10,0.4f,0.1f,0.5f,1);
    gedung(220,0,-50,10,0.9f,0.5f,0.0f,2);
    gedung(220,0,-35,10,0.5f,0.1f,0.1f,4);
    gedung(220,0,-20,10,0.5f,0.6f,0.7f,2);
    gedung(220,0,-5,10,0.5f,0.5f,0.1f,4);
    gedung(220,0,10,10,0.9f,0.1f,0.1f,2);
    gedung(220,0,25,10,0.8f,0.7f,0.1f,2);
    gedung(220,0,40,10,0.5f,0.1f,0.9f,1);
    gedung(220,0,55,10,0.5f,0.8f,0.1f,2);
    gedung(220,0,70,10,0.0f,0.0f,1.0f,1);
    gedung(220,0,85,10,0.5f,0.3f,0.9f,2);
    gedung(220,0,100,10,0.3f,0.8f,0.1f,3);
    gedung(220,0,115,10,0.5f,0.8f,0.7f,2);
    gedung(220,0,130,10,0.3f,0.6f,0.3f,1);
    gedung(220,0,145,10,0.2f,0.4f,0.1f,4);
    gedung(220,0,160,10,0.1f,0.1f,0.1f,5);
    gedung(220,0,175,10,0.9f,0.8f,0.7f,2);
    gedung(220,0,190,10,0.2f,0.8f,0.7f,3);

    //timur
    gedung(-220,0,-185,10,0.9f,0.3f,0.5f,4);
    gedung(-220,0,-170,10,0.9f,0.5f,0.5f,2);
    gedung(-220,0,-155,10,0.4f,0.3f,0.5f,3);
    gedung(-220,0,-140,10,0.3f,0.4f,0.5f,2);
    gedung(-220,0,-125,10,0.1f,0.1f,0.5f,1);
    gedung(-220,0,-110,10,0.1f,0.5f,0.5f,2);
    gedung(-220,0,-95,10,0.1f,0.2f,0.5f,3);
    gedung(-220,0,-80,10,0.2f,0.2f,0.5f,2);
    gedung(-220,0,-65,10,0.4f,0.1f,0.5f,1);
    gedung(-220,0,-50,10,0.9f,0.5f,0.0f,2);
    gedung(-220,0,-35,10,0.5f,0.1f,0.1f,4);
    gedung(-220,0,-20,10,0.5f,0.6f,0.7f,2);
    gedung(-220,0,-5,10,0.5f,0.5f,0.1f,4);
    gedung(-220,0,10,10,0.9f,0.1f,0.1f,2);
    gedung(-220,0,25,10,0.8f,0.7f,0.1f,2);
    gedung(-220,0,40,10,0.5f,0.1f,0.9f,1);
    gedung(-220,0,55,10,0.5f,0.8f,0.1f,2);
    gedung(-220,0,70,10,0.0f,0.0f,1.0f,1);
    gedung(-220,0,85,10,0.5f,0.3f,0.9f,2);
    gedung(-220,0,100,10,0.3f,0.8f,0.1f,3);
    gedung(-220,0,115,10,0.5f,0.8f,0.7f,2);
    gedung(-220,0,130,10,0.3f,0.6f,0.3f,1);
    gedung(-220,0,145,10,0.2f,0.4f,0.1f,4);
    gedung(-220,0,160,10,0.1f,0.1f,0.1f,5);
    gedung(-220,0,175,10,0.9f,0.8f,0.7f,2);
    gedung(-220,0,190,10,0.2f,0.8f,0.7f,3);

    //utara
    gedung(-210,0,220,10,0.5f,0.3f,0.8f,4);
    gedung(-195,0,220,10,0.7f,0.3f,0.5f,5);
    gedung(-180,0,220,10,0.1f,0.3f,0.5f,4);
    gedung(-165,0,220,10,0.2f,0.9f,0.5f,2);
    gedung(-150,0,220,10,0.2f,0.4f,0.2f,3);
    gedung(-135,0,220,10,0.3f,0.4f,0.6f,2);
    gedung(-120,0,220,10,0.6f,0.1f,0.5f,1);
    gedung(-105,0,220,10,0.1f,0.3f,0.5f,2);
    gedung(-90,0,220,10,0.1f,0.8f,0.5f,3);
    gedung(-75,0,220,10,0.6f,0.2f,0.5f,2);
    gedung(-60,0,220,10,0.4f,0.1f,0.9f,1);
    gedung(-45,0,220,10,0.9f,0.7f,0.0f,2);
    gedung(-30,0,220,10,0.5f,0.3f,0.1f,4);
    gedung(-15,0,220,10,0.5f,0.6f,0.7f,2);
    gedung(0,0,220,10,0.3f,0.5f,0.1f,4);
    gedung(15,0,220,10,0.9f,0.8f,0.9f,2);
    gedung(30,0,220,10,0.2f,0.3f,0.6f,2);
    gedung(45,0,220,10,0.2f,0.2f,0.7f,1);
    gedung(60,0,220,10,0.5f,0.2f,0.9f,2);
    gedung(75,0,220,10,0.4f,0.0f,1.0f,1);
    gedung(90,0,220,10,0.4f,0.3f,0.9f,2);
    gedung(105,0,220,10,0.3f,0.4f,0.1f,3);
    gedung(120,0,220,10,0.5f,0.3f,0.7f,2);
    gedung(135,0,220,10,0.3f,0.3f,0.3f,1);
    gedung(150,0,220,10,0.2f,0.4f,0.1f,4);
    gedung(165,0,220,10,0.1f,0.1f,0.1f,5);
    gedung(180,0,220,10,0.3f,0.8f,0.7f,2);
    gedung(195,0,220,10,0.2f,0.8f,0.7f,3);
    gedung(210,0,220,10,0.3f,0.7f,0.5f,4);
}

void Pohon()
{
    int i = -210;
    int j = -210;
    while (i<=210){
        if ((i >= -15) && (i <= 15)){
            i += 15;
        }
        else{
            pohonCemara(i,0,-235);
            i += 15;
        }
    }
    while (j<=210){
        if ((j >= -30) && (j <= 0)){
            j += 20;
        }
        else{
            pohonBiasa(j,0,-220);
            j += 20;
        }
    }
}

void TrukGandeng()
{
    truk(tRot,tX,-1.4,tZ);
}

void Scenery(){
    glPushMatrix();
        glPushMatrix();//rumput
            glBegin(GL_QUADS);
                green;glVertex3f(-270,0,-270);
                green;glVertex3f(-15,0,-270);
                green;glVertex3f(-15,0,-10);
                green;glVertex3f(-270,0,-10);
            glEnd();
            glBegin(GL_QUADS);
                green;glVertex3f(-270,0,20);
                green;glVertex3f(-15,0,20);
                green;glVertex3f(-15,0,270);
                green;glVertex3f(-270,0,270);
            glEnd();
            glBegin(GL_QUADS);
                green;glVertex3f(15,0,20);
                green;glVertex3f(270,0,20);
                green;glVertex3f(270,0,270);
                green;glVertex3f(15,0,270);
            glEnd();
            glBegin(GL_QUADS);
                green;glVertex3f(15,0,-270);
                green;glVertex3f(270,0,-270);
                green;glVertex3f(270,0,-10);
                green;glVertex3f(15,0,-10);
            glEnd();
        glPopMatrix();
        glPushMatrix();//jalan
            glBegin(GL_QUADS);
                grey;glVertex3f(-15,0,-270);
                grey;glVertex3f(15,0,-270);
                grey;glVertex3f(15,0,270);
                grey;glVertex3f(-15,0,270);
            glEnd();
            glBegin(GL_QUADS);
                grey;glVertex3f(-270,0,-10);
                grey;glVertex3f(-15,0,-10);
                grey;glVertex3f(-15,0,20);
                grey;glVertex3f(-270,0,20);
            glEnd();
            glBegin(GL_QUADS);
                grey;glVertex3f(15,0,-10);
                grey;glVertex3f(270,0,-10);
                grey;glVertex3f(270,0,20);
                grey;glVertex3f(15,0,20);
            glEnd();
        glPopMatrix();
    glPopMatrix();
}

void Tembok(){
    tembok(0,0,tmbZ1,0);
    tembok(0,0,tmbZ2,0);
    tembok(tmbX3,0,0,90);
    tembok(tmbX4,0,0,90);
}


void tekanGas(int gas, int dir){
    float frac = 0.2;
    if (gas == 1){
        if(dir == 1){// kanan
            if (tRot <= 0){
                tRot=360;
            }
            else{
                tRot-=1;
            }
        }
        if(dir == -1){
            if (tRot >= 360){//kiri
                tRot=0;
            }
            else{
                tRot+=1;
            }
        }
        else if(dir == -1){

        }
        if(tRot <=90){
            tX+=frac * abs(sin(tRot*rad));
            tZ+=frac * abs(cos(tRot*rad));
        }
        else if((tRot > 90) && (tRot <=180)){
            tX+=frac * abs(sin(tRot*rad));
            tZ-=frac * (cos((180-tRot)*rad));
        }
        else if((tRot > 180) && (tRot<=270)){
            tX+=frac * (sin(tRot*rad));
            tZ+=frac * (cos((tRot)*rad));
        }
        else if((tRot > 270) && (tRot<=360)){
            tX+=frac * (sin(tRot*rad));
            tZ+=frac * (cos(tRot*rad));
        }
    }
    else if (gas == -1){
        if(dir == 1){// kanan
            if (tRot <= 0){
                tRot=360;
            }
            else{
                tRot-=1;
            }
        }
        if(dir == -1){
            if (tRot >= 360){//kiri
                tRot=0;
            }
            else{
                tRot+=1;
            }
        }
        if(tRot <=90){
            tX-=frac * abs(sin(tRot*rad));
            tZ-=frac * abs(cos(tRot*rad));
        }
        else if((tRot > 90) && (tRot <=180)){
            tX-=frac * abs(sin(tRot*rad));
            tZ+=frac * (cos((180-tRot)*rad));
        }
        else if((tRot > 180) && (tRot<=270)){
            tX-=frac * (sin(tRot*rad));
            tZ-=frac * (cos((tRot)*rad));
        }
        else if((tRot > 270) && (tRot<=360)){
            tX-=frac * (sin(tRot*rad));
            tZ-=frac * (cos(tRot*rad));
        }
    }
    else if (gas == 0){
        tX = tX;
        tZ = tZ;
        tRot = tRot;
    }
}

void Collision(){
    if(tZ < tmbZ1){
        tZ = tmbZ1;
    }
    else if(tZ > tmbZ2){
        tZ = tmbZ2;
    }
    else if(tX > tmbX3){
        tX = tmbX3;
    }
    else if(tX < tmbX4){
        tX = tmbX4;
    }
}


void pressKey(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_LEFT :
        deltaAngle = -0.04f;
        break;
    case GLUT_KEY_RIGHT :
        deltaAngle = 0.04f;
        break;
    case GLUT_KEY_UP :
        deltaMove = 5;
        break;
    case GLUT_KEY_DOWN :
        deltaMove = -5;
        break;
    }
}
void releaseKey(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_LEFT :
        if (deltaAngle < 0.0f)
            deltaAngle = 0.0f;
        break;
    case GLUT_KEY_RIGHT :
        if (deltaAngle > 0.0f)
            deltaAngle = 0.0f;
        break;
    case GLUT_KEY_UP :
        if (deltaMove > 0)
            deltaMove = 0;
        break;
    case GLUT_KEY_DOWN :
        if (deltaMove < 0)
            deltaMove = 0;
        break;
    }
}
// Variable untuk pencahayaan
const GLfloat light_ambient[] = { 0.5f, 0.5f, 0.5f, 0.0f };
const GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 0.0f, 20.0f, 10.0f, 1.0f };
const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };
void lighting()
{
// Fungsi mengaktifkan pencahayaan
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
}
void init(void)
{
    glEnable (GL_DEPTH_TEST);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}


void trukKey(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;
        case 'a':
            dir = -1;
            //printf("%f\n", tRot);
            break;
        case 'd':
            dir = 1;
            //printf("%f\n",tRot);
            break;
        case 'w':
            gas = 1;
            //printf("tZ = %.2f tX = %.2f\n", tZ, tX);
            break;
        case 's':
            gas = -1;
            //printf("tZ = %.2f tX = %.2f\n", tZ, tX);
            break;
    }

    glutPostRedisplay();
}

void trukRKey(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;
        case 'a':
            dir = 0;
            //printf("%f\n", tRot);
            break;
        case 'd':
            dir = 0;
            //printf("%f\n",tRot);
            break;
        case 'w':
            gas = 0;
            //printf("tZ = %.2f tX = %.2f\n", tZ, tX);
            break;
        case 's':
            gas = 0;
            //printf("tZ = %.2f tX = %.2f\n", tZ, tX);
            break;
    }

    glutPostRedisplay();
}

void display()
{
// Kalau move dan angle tidak nol, gerakkan kamera...
    if (deltaMove)
        moveMeFlat(deltaMove);
    if (deltaAngle)
    {
        angle += deltaAngle;
        orientMe(angle);
    }
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    TrukGandeng();
    Pohon();
    Scenery();
    Gedung();
    Tembok();
    Collision();
    tekanGas(gas,dir);
    glutSwapBuffers();
    glFlush();
}

static void idle(void)
{
    glutPostRedisplay();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA | GLUT_ALPHA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(640,480);
    glutCreateWindow("3D Lighting");
    glClearColor(0.6f,0.6f,0.8f,0.0f);
    glutIgnoreKeyRepeat(1); // Mengabaikan key repeat (saat tombolkeyboard dipencet terus)
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glutSpecialFunc(pressKey);
    glutSpecialUpFunc(releaseKey);
    glutDisplayFunc(display);
    glutKeyboardFunc(trukKey); // Pergerakan truk
    glutKeyboardUpFunc(trukRKey);
    glutIdleFunc(idle);
    glutIdleFunc(display);
    glutReshapeFunc(Reshape);
    lighting();
    init();
    glutMainLoop();
    return(0);
}


