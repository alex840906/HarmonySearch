#include "Class.h"
void genHM(vec_2D&);
void selectHarmony();
void selectFromHM();
void newHarmony();


void genHM(vec_2D &HM)
{
    for (int i = 0; i < HMS; i++)
    {
        for (int j = 0; j < columnNum; j++)
        {
            HM[i][j] = rand() % 5;
        }
    }
}

void selectHarmony()
{
    float probibility = (double) rand() / (RAND_MAX + 1);

    if( probibility < HMCR)
        selectFromHM();
    
    else
        newHarmony();
    
}

void selectFromHM();