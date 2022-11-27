#include "common.h"
#include "pohon.h"

void batang(float x, float y, float z)
{
    glPushMatrix();
    glTranslatef(x,y,z);
    glPushMatrix();
    glTranslatef(0,0,0);

        // Sisi Depan
        	glPushMatrix();
			glBegin(GL_QUADS);
				yellow;glVertex3f(10,0,20);
				yellow;glVertex3f(10,10,20);
				yellow;glVertex3f(13,10,20);
				yellow;glVertex3f(13,0,20);
			glEnd();
		glPopMatrix();
		//sisi pinggir jalan
		glPushMatrix();
			glBegin(GL_QUADS);
				glVertex3f(10,0,20); yellow;
				glVertex3f(10,10,20); yellow;
				glVertex3f(10,10,17); yellow;
				glVertex3f(10,0,17); yellow;
			glEnd();
		glPopMatrix();
		//sisi menjauhi jalan
		glPushMatrix();
			glBegin(GL_QUADS);
				glVertex3f(13,0,20); yellow;
				glVertex3f(13,10,20); yellow;
				glVertex3f(13,10,17); yellow;
				glVertex3f(13,0,17); yellow;
			glEnd();
		glPopMatrix();
		//Sisi Belakang
		glPushMatrix();
			glBegin(GL_QUADS);
				glVertex3f(13,0,17); yellow;
				glVertex3f(13,10,17); yellow;
				glVertex3f(10,10,17); yellow;
				glVertex3f(10,0,17); yellow;
			glEnd();
		glPopMatrix();
	glPopMatrix();
	glPopMatrix();
}

void daun(float x, float y, float z){
    glPushMatrix();
    glTranslatef(x,y,z);
    glPushMatrix();
    glScalef(1,1.5,1);
    glTranslatef(0,0,0);
		//pinggir jalan
		glPushMatrix();
			glBegin(GL_QUADS);
				green;glVertex3f(7,15,7);
				green;glVertex3f(7,10,7);
				green;glVertex3f(7,10,25);
				green;glVertex3f(7,15,25);
			glEnd();
		glPopMatrix();

		// depan
		glPushMatrix();
			glBegin(GL_QUADS);
				glVertex3f(23,15,25); green;
				glVertex3f(23,10,25); green;
				glVertex3f(7,10,25); green;
				glVertex3f(7,15,25); green;
			glEnd();
		glPopMatrix();

		// menjauhi jalan
		glPushMatrix();
			glBegin(GL_QUADS);
				glVertex3f(23,15,25); green;
				glVertex3f(23,10,25); green;
				glVertex3f(23,10,7); green;
				glVertex3f(23,15,7); green;
			glEnd();
		glPopMatrix();

		//Belakang
		glPushMatrix();
			glBegin(GL_QUADS);
				glVertex3f(7,15,7); green;
				glVertex3f(7,10,7); green;
				glVertex3f(23,10,7); green;
				glVertex3f(23,15,7); green;
			glEnd();
		glPopMatrix();

		//Atap
		glPushMatrix();
			glBegin(GL_QUADS);
				glVertex3f(7,15,7); green;
				glVertex3f(7,15,25); green;
				glVertex3f(23,15,25); green;
				glVertex3f(23,15,7); green;
			glEnd();
		glPopMatrix();

		//Alas
		glPushMatrix();
			glBegin(GL_QUADS);
				glVertex3f(7,10,7); green;
				glVertex3f(7,10,25); green;
				glVertex3f(23,10,25); green;
				glVertex3f(23,10,7); green;
			glEnd();
		glPopMatrix();
	glPopMatrix();
	glPopMatrix();
}

void pohonBiasa(float x,float y, float z){
	glPushMatrix();
    glTranslatef(x,y,z);
        glPushMatrix();
        batang(2.5,0,-1.5);
        daun(-1,-7,1);
		glPopMatrix();
	glPopMatrix();

}

void pohonCemara(float x, float y,float z){
    glPushMatrix();
        glTranslatef(x,y,z);
        glPushMatrix();//daun
            green;
            glRotated(270,1,0,0);
            glTranslatef(0,0,4.5);
            glutSolidCone(6,20,100,100);
        glPopMatrix();
        glPushMatrix();
            glRotated(270,1,0,0);
            glPushMatrix();
                glTranslatef(0,0,0);
                yellow;
                GLUquadricObj *quadratic2;
                quadratic2 = gluNewQuadric();
                gluCylinder(quadratic2,1.3,1,4.5,32,32);
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();
}
