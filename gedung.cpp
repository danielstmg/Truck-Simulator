#include "common.h"
#include "gedung.h"

void gedung(float x,float y, float z, float s, float cr, float cg, float cb, float tumpuk){

    for (int i=0;i<tumpuk;i++){
        glPushMatrix();
        glTranslatef(x,y+s*i, z);
            glPushMatrix();
                glColor3f(cr, cg, cb);
                glutSolidCube(s);
            glPopMatrix();
        glPopMatrix();
    }
}
