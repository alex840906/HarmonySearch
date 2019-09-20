#ifndef HS_operator_H
#define HS_operator_H

#include "Class.h"
#include "fitness.h"

void swap(vec_1D &,int, int);
void genHM(vec_2D&);
vec_1D improvise();
vec_1D selectHarmony();
vec_1D selectFromHM();
vec_1D newHarmony();
vec_1D pitch(vec_1D&);



#endif