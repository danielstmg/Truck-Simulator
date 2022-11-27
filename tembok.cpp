#include "tembok.h"
#include "common.h"

void tembok(float x, float y, float z, float rot){
    glPushMatrix();
        glTranslatef(x,y,z);
        glPushMatrix();
            glRotated(rot,0,1,0);
            invisible;glRectf(-200,0,200,8);
            glPopMatrix();
    glPopMatrix();
}
