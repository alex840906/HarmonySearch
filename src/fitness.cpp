#include "fitness.h"

int fitness(vec_1D &solution)
{
    int fitnessValue=0;
    fitnessValue = pow((solution[0]-2),2) + pow(solution[1]-3,4)\ 
        + pow(solution[2]-1,2) + 3;

    return fitnessValue;
}
