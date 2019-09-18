#include "Class.h"

void genHM(vec_2D&);
vec_1D selectHarmony();
vec_1D selectFromHM();
vec_1D newHarmony();


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

vec_1D selectHarmony()
{
    float probibility = (double) rand() / (RAND_MAX + 1);
    vec_1D harmony;

    if( probibility < HMCR)
        harmony = selectFromHM();
    
    else
        harmony = newHarmony();

    return harmony;  
}

vec_1D selectFromHM()
{
    int id = rand() % HMS;
    vec_1D harmony = HM[id];
    cout<<"yes";

    return harmony;
}

vec_1D newHarmony()
{
    vec_1D harmony(columnNum);

    for(int i=0;i<columnNum;i++)
    {
        harmony[i] = rand() % 5;
    }
    cout<<"No";
    return harmony;
}