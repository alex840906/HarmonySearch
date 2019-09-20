#ifndef HS_fitness_H
#define HS_fitness_H
#include "HS_ARG.h"
#include "Class.h"

float fitness(vec_1D &solution)
{
    int fitnessValue=0;
    fitnessValue = pow((solution[0]-2),2) + pow(solution[1]-3,4)\ 
        + pow(solution[2]-1,2) + 3;

    return fitnessValue;
}

#endif