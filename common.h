#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#include <windows.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//common colors
#define silver glColor3f(0.90f,0.91f,0.98f)
#define dimgrey glColor3f(0.329412f,0.329412f,0.329412f)
#define black glColor3f(0.0f,0.0f,0.0f)
#define green glColor3f(0.0f,0.5f,0.1f)
#define yellow glColor3f(1.0f, 1.0f, 0.2f)
#define grey glColor3f(0.2f,0.2f,0.2f)
#define invisible glColor4f(0.0f,0.0f,0.0f,0)
#define rad (M_PI/180)

#endif // COMMON_H_INCLUDED
