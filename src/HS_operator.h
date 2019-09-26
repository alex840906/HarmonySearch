#ifndef HS_operator_H
#define HS_operator_H
#include "HS_ARG.h"
#include "fitness.h"

void swap(vec_1D &, int, int);
void genHM(vec_2D&);
void improvise();
vec_1D selectHarmony();
vec_1D selectFromHM();
vec_1D newHarmony();
void pitch(vec_1D&);
void update(vec_1D &);

#endif