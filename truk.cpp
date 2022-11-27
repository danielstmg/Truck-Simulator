#include "common.h"
#include "truk.h"

void depan(float x, float y, float z){
    glPushMatrix();
    glTranslatef(x,y,z);
    glPushMatrix();
        glTranslatef(0,0,0);
        //bumper
        glPushMatrix();
            glTranslatef(0,0,0.125);
            glBegin(GL_QUADS);
                dimgrey;glVertex3f(-1.5f,0,0);
                dimgrey;glVertex3f(-1.5f,0.5f,0);
                dimgrey;glVertex3f(1.5f,0.5f,0);
                dimgrey;glVertex3f(1.5f,0,0);
            glEnd();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(0,0,0);
            glBegin(GL_QUADS);
                glVertex3f(-1.5f,0,0.0f); dimgrey;
                glVertex3f(-1.5f,0.5f,0.0f); dimgrey;
                glVertex3f(1.5f,0.5f,0.0f); dimgrey;
                glVertex3f(1.5f,0,0.0f); dimgrey;
            glEnd();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(0,0,0);
            glBegin(GL_QUADS);
                glVertex3f(1.5f,0,0.0f); dimgrey;
                glVertex3f(1.5f,0.0f,0.125f); dimgrey;
                glVertex3f(1.5f,0.5f,0.125f); dimgrey;
                glVertex3f(1.5f,0.5f,0.0f); dimgrey;
            glEnd();
        glPopMatrix();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(0,0,0);
            glBegin(GL_QUADS);
                glVertex3f(-1.5f,0,0.0f); dimgrey;
                glVertex3f(-1.5f,0.0f,0.125f); dimgrey;
                glVertex3f(-1.5f,0.5f,0.125f); dimgrey;
                glVertex3f(-1.5f,0.5f,0.0f); dimgrey;
            glEnd();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(0,0,0);
            glBegin(GL_QUADS);
                glVertex3f(-1.5f,0.5f,0.0f); dimgrey;
                glVertex3f(-1.5f,0.5f,0.125f); dimgrey;
                glVertex3f(1.5f,0.5f,0.125f); dimgrey;
                glVertex3f(1.5f,0.5f,0.0f); dimgrey;
            glEnd();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(0,0,0);
            glBegin(GL_QUADS);
                glVertex3f(-1.5f,0.0f,0.0f); dimgrey;
                glVertex3f(-1.5f,0.0f,0.125f); dimgrey;
                glVertex3f(1.5f,0.0f,0.125f); dimgrey;
                glVertex3f(1.5f,0.0f,0.0f); dimgrey;
            glEnd();
        glPopMatrix();

        //front
        glPushMatrix();//depan
            glTranslatef(0,0,0);
            glBegin(GL_QUADS);
                glVertex3f(-1.5f,0.0f,0.0f); silver;
                glVertex3f(-1.5f,1.0f,0.0f); silver;
                glVertex3f(1.5f,1.0f,0.0f); silver;
                glVertex3f(1.5f,0.0f,0.0f); silver;
            glEnd();
        glPopMatrix();
        glPushMatrix();//miring
            glTranslatef(0,1,0);
            glBegin(GL_TRIANGLE_STRIP);
                glVertex3f(-1.5f,0.0f,0.0f);
                glVertex3f(-1.2f,0.0f,0.0f);
                glVertex3f(-1.5f,2.0f,-0.75f);
                glVertex3f(-1.2f,1.6f,-0.6f);
                glVertex3f(1.5f,2.0f,-0.75f);
                glVertex3f(1.2f,1.6f,-0.6f);
                glVertex3f(1.5f,0.0f,0.0f);
                glVertex3f(1.2f,0.0f,0.0f);
                glVertex3f(-1.2f,0.0f,0.0f);
            glEnd();
            glBegin(GL_TRIANGLES);
                glVertex3f(-1.2f,0.0f,0.0f);
                glVertex3f(-1.5f,0.0f,0.0f);
                glVertex3f(1.5f,0.0f,0.0f);
            glEnd();

        glPopMatrix();
        glPushMatrix();//atas
            glTranslatef(0,3,-0.75);
            glBegin(GL_QUADS);
                glVertex3f(-1.5f,0.0f,0.0f); silver;
                glVertex3f(-1.5f,0.0f,-2.0f); silver;
                glVertex3f(1.5f,0.0f,-2.0f); silver;
                glVertex3f(1.5f,0.0f,0.0f); silver;
            glEnd();
        glPopMatrix();
        glPushMatrix();//belakang
            glTranslatef(0,1.5,-2.75);
            glRectf(1.5,1.5,-1.5,-1.5); silver;
        glPopMatrix();

        glPushMatrix();//kaca
            glTranslatef(0,1,0);
            glScalef(0.8,0.8,0.8);
            glBegin(GL_QUADS);
                glVertex3f(-1.5f,0.0f,0.0f); black;
                glVertex3f(-1.5f,2.0f,-0.75f); black;
                glVertex3f(1.5f,2.0f,-0.75f); black;
                glVertex3f(1.5f,0.0f,0.0f); black;
            glEnd();
        glPopMatrix();
        glPushMatrix();//bagian bawah pengemudi
            glTranslatef(0,0,0);
            glBegin(GL_QUADS);
                glVertex3f(-1.5f,0.0f,0.0f); silver;
                glVertex3f(-1.5f,0.0f,-2.75f); silver;
                glVertex3f(1.5f,0.0f,-2.75f); silver;
                glVertex3f(1.5f,0.0f,0.0f); silver;
            glEnd();
        glPopMatrix();


        //pintu
        glPushMatrix();//kanan
            glTranslatef(0,0,0);
            glBegin(GL_POLYGON);
                glVertex3f(1.5f,0.0f,0.0f); silver;
                glVertex3f(1.5f,1.0f,0.0f); silver;
                glVertex3f(1.5f,3.0f,-0.75f); silver;
                glVertex3f(1.5f,3.0f,-2.75f); silver;
                glVertex3f(1.5f,0.0f,-2.75f); silver;
            glEnd();
        glPopMatrix();
                glPushMatrix();//kiri
            glTranslatef(-3,0,0);
            glBegin(GL_POLYGON);
                glVertex3f(1.5f,0.0f,0.0f); silver;
                glVertex3f(1.5f,1.0f,0.0f); silver;
                glVertex3f(1.5f,3.0f,-0.75f); silver;
                glVertex3f(1.5f,3.0f,-2.75f); silver;
                glVertex3f(1.5f,0.0f,-2.75f); silver;
            glEnd();
        glPopMatrix();
    glPopMatrix();
    glPopMatrix();

}

void gerbong(float x, float y, float z){
    glPushMatrix();
        glTranslatef(x,y,z);
        glPushMatrix();//bawah
            glTranslated(0,0,0);
            glRotatef(90,1,0,0);
            black;
            glRectf(-1.5,-4,1.5,4);
        glPopMatrix();
        glPushMatrix();//atas
            glTranslated(0,3,0);
            glRotatef(90,1,0,0);
            black;
            glRectf(-1.5,-4,1.5,4);
        glPopMatrix();
        glPushMatrix();//depan
            glTranslated(0,1.5,4);
            black;
            glRectf(-1.5,-1.5,1.5,1.5);
        glPopMatrix();
        glPushMatrix();//belakang
            glTranslated(0,1.5,-4);
            black;
            glRectf(-1.5,-1.5,1.5,1.5);
        glPopMatrix();
        glPushMatrix();//samping kanan
            glTranslated(1.5,1.5,0);
            glRotatef(90,0,1,0);
            black;
            glRectf(-4,-1.5,4,1.5);
        glPopMatrix();
        glPushMatrix();//samping kiri
            glTranslated(-1.5,1.5,0);
            glRotatef(90,0,1,0);
            black;
            glRectf(-4,-1.5,4,1.5);
        glPopMatrix();
    glPopMatrix();
}

void alas(float x, float y, float z){
    glPushMatrix();
        glTranslated(x,y,z);
        glPushMatrix();//bawah
            glTranslatef(0,0,-7);
            glRotated(90,1,0,0);dimgrey;
            glRectf(-1.5,-4,1.5,4.25);
        glPopMatrix();
        glPushMatrix();//tutup
            glTranslatef(0,0,-11);dimgrey;
            glRectf(-1.5,0,1.5,0.5);
        glPopMatrix();
        glPushMatrix();//tutup
            glTranslatef(0,0,-2.75);dimgrey;
            glRectf(-1.5,0,1.5,0.5);
        glPopMatrix();
        glPushMatrix();//atas
            glTranslatef(0,0.5,-7);
            glRotated(90,1,0,0);dimgrey;
            glRectf(-1.5,-4,1.5,4.25);
        glPopMatrix();
        glPushMatrix();//samping kanan
            glTranslatef(1.5,0.25,-6.75);
            glRotated(90,0,1,0);dimgrey;
            glRectf(-4,-0.25,4.25,0.25);
        glPopMatrix();
        glPushMatrix();//samping kiri
            glTranslatef(-1.5,0.25,-6.75);
            glRotated(90,0,1,0);dimgrey;
            glRectf(-4,-0.25,4.25,0.25);
        glPopMatrix();

        //kait
        glPushMatrix();//atas
            glRotated(90,1,0,0);
            glTranslatef(0,-2.75,-0.125);silver;
            glRectf(-0.25,0,0.25,1.0);
            glPopMatrix();
        glPushMatrix();//bawah
            glRotated(90,1,0,0);
            glTranslatef(0,-2.75,-0.25);silver;
            glRectf(-0.25,0,0.25,1.0);
            glPopMatrix();
        glPushMatrix();//kiri
            glRotated(90,0,1,0);
            glTranslatef(2.25,0,-0.25);silver;
            glRectf(-0.5,0.125,0.5,0.25);
            glPopMatrix();
        glPushMatrix();//kanan
            glRotated(90,0,1,0);
            glTranslatef(2.25,0,0.25);silver;
            glRectf(-0.5,0.125,0.5,0.25);
            glPopMatrix();
    glPopMatrix();

}

void roda(float x, float y, float z){
    glPushMatrix();
        glTranslatef(x,y,z);
        glRotated(90,0,1,0);
        glPushMatrix();
        for (int j = 0; j <= 360; j++)
        {
            glPushMatrix();
                glRotated(90, 1, 0, 0);
                glRotated(j, 0, 1, 0);
                glBegin(GL_QUADS);
                    glVertex3f(0, 0, 0);
                    glColor3f(0.2, 0.2, 0.2);
                    glVertex3f(0.6, 0, 0);
                    glColor3f(0.2, 0.2, 0.2);
                    glVertex3f(0.6, 0.6, 0);
                    glColor3f(0.2, 0.2, 0.2);
                    glVertex3f(0, 0.6, 0);
                    glColor3f(0.2, 0.2, 0.2);
                glEnd();
            glPopMatrix();
        }
        glPopMatrix();
    glPopMatrix();
}

void hiasan(){
    glPushMatrix();
        glTranslatef(0,2,0);
        glPushMatrix();//cerobong 1
            glTranslated(-1.6,4.0,-2.0);
            glRotated(90,1,0,0);
            glPushMatrix();
                dimgrey;
                GLUquadricObj *quadratic;
                quadratic = gluNewQuadric();
                gluCylinder(quadratic,0.1,0.1,3.5,32,32);
            glPopMatrix();
        glPopMatrix();

        glPushMatrix();//cerobong 2
            glTranslated(1.6,4.0,-2.0);
            glRotated(90,1,0,0);
            glPushMatrix();
                dimgrey;
                GLUquadricObj *quadratic2;
                quadratic2 = gluNewQuadric();
                gluCylinder(quadratic2,0.1,0.1,3.5,32,32);
            glPopMatrix();
        glPopMatrix();

        glPushMatrix();//lampu 1
            glTranslatef(1.25,0.75,0);
            glPushMatrix();
                for (int j = 0; j <= 360; j++){
                    glPushMatrix();
                        glRotated(90, 1, 0, 0);
                        glRotated(j, 0, 1, 0);
                        glBegin(GL_QUADS);
                            glVertex3f(0, 0, 0);yellow;
                            glVertex3f(0.15, 0, 0);yellow;
                            glVertex3f(0.15, 0.1, 0);yellow;
                            glVertex3f(0, 0.1, 0);yellow;
                        glEnd();
                    glPopMatrix();
                }
            glPopMatrix();
        glPopMatrix();

        glPushMatrix();//lampu 2
            glTranslatef(-1.25,0.75,0);
            glPushMatrix();
                for (int j = 0; j <= 360; j++){
                    glPushMatrix();
                        glRotated(90, 1, 0, 0);
                        glRotated(j, 0, 1, 0);
                        glBegin(GL_QUADS);
                            glVertex3f(0, 0, 0);yellow;
                            glVertex3f(0.15, 0, 0);yellow;
                            glVertex3f(0.15, 0.1, 0);yellow;
                            glVertex3f(0, 0.1, 0);yellow;
                        glEnd();
                    glPopMatrix();
                }
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();
}

void truk(float rot, float x, float y, float z){
    glPushMatrix();
        glTranslatef(x,y,z);
        glPushMatrix();
            glRotated(rot,0,1,0);
                glPushMatrix();
                    glPushMatrix();
                        depan(0,2,0);
                        gerbong(0,2.5,-7);
                        gerbong(0,2.5,-16);
                        alas(0,2,0);
                        alas(0,2,-9.25);
                        hiasan();
                        roda(0.9,2.0,-1.25);
                        roda(-1.4,2.0,-1.25);

                        roda(0.9,2.0,-4.0);
                        roda(-1.4,2.0,-4.0);
                        roda(0.9,2.0,-4.0);
                        roda(-1.4,2.0,-4.0);

                        roda(0.9,2.0,-10);
                        roda(-1.4,2.0,-10);
                        roda(0.9,2.0,-10);
                        roda(-1.4,2.0,-10);

                        roda(0.9,2.0,-13);
                        roda(-1.4,2.0,-13);
                        roda(0.9,2.0,-13);
                        roda(-1.4,2.0,-13);

                        roda(0.9,2.0,-19);
                        roda(-1.4,2.0,-19);
                        roda(0.9,2.0,-19);
                        roda(-1.4,2.0,-19);
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
        glPopMatrix();
}
