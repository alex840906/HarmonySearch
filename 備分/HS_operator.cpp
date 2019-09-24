#include "HS_operator.h"

void swap(vec_1D &vec, int x, int y)
{
    int tmp = vec[x];
    vec[x] = vec[y];
    vec[y] = tmp;
}

void genHM(vec_2D &HM)
{
    HM.assign(HMS, vec_1D(columnNum, 0));
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

    return harmony;
}

vec_1D newHarmony()
{
    vec_1D harmony(columnNum);

    for(int i=0;i<columnNum;i++)
        harmony[i] = rand() % 5;
    
    return harmony;
}

vec_1D pitch(vec_1D &harmony)
{
    float probibility = (double) rand() / (RAND_MAX + 1);

    if(probibility <= PAR)
    {
        int id = rand() % 5;
        if(probibility <= PAR/2)
        {
            if(id != 0)
                swap(harmony,id,id-1);
        }

        else
        {
            if(id != 4)
                swap(harmony,id,id+1);
        }
        
    }
}