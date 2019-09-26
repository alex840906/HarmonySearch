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

void improvise()
{
    vec_1D newHarmony(columnNum);
    int id;

    for (int i = 0; i <= columnNum; i++)
    {
        id = rand() % HMS;
        newHarmony[i] = HM[id][i];
    }

    int score = fitness(newHarmony);

    if (score < scroeMatrix[scoreIndex[HMS - 1]])
    {
        for (int i = 0; i < columnNum; i++)
        {
            HM[scoreIndex[HMS - 1]][i] = newHarmony[i];
        }
        scroeMatrix[scoreIndex[HMS - 1]] = score;

        for (int i = 0; i < HMS - 1; i++)
        {
            for (int j = 0; j < HMS - 1; j++)
            {
                if (scroeMatrix[scoreIndex[j]] > scroeMatrix[scoreIndex[j + 1]])
                    swap(scoreIndex, j, j + 1);
            }
        }
    }
}

vec_1D selectHarmony()
{
    float probibility = (double)rand() / (RAND_MAX + 1);
    vec_1D harmony(columnNum);

    if (probibility < HMCR)
    {
        harmony = selectFromHM();     
    }

    else
    {
        harmony = newHarmony();
    }

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

    for (int i = 0; i < columnNum; i++)
        harmony[i] = rand() % 5;

    return harmony;
}

void pitch(vec_1D &harmony)
{
   
    double probibility = (double)rand() / (RAND_MAX + 1);

    if (probibility <= PAR)
    {
        int id = rand() % 3;
        
        if (probibility < PAR / 2)
        {
            //cout<<id<<","<<probibility<<endl;
            if (id > 0)
            {
                //cout<<"id = "<<id<<endl;
                swap(harmony, id, id - 1);       
            }
                
        }
        
        else
        {
            if (id < 2)
                swap(harmony, id, id + 1);
        }
    }
   
}

void update(vec_1D &newHarmony)
{
    int score = fitness(newHarmony);

    if (score < scroeMatrix[scoreIndex[HMS - 1]])
    {
        for (int i = 0; i < columnNum; i++)
        {
            HM[scoreIndex[HMS - 1]][i] = newHarmony[i];
        }
        scroeMatrix[scoreIndex[HMS - 1]] = score;

        for (int i = 0; i < HMS - 1; i++)
        {
            for (int j = 0; j < HMS - 1; j++)
            {
                if (scroeMatrix[scoreIndex[j]] > scroeMatrix[scoreIndex[j + 1]])
                    swap(scoreIndex, j, j + 1);
            }
        }
    }
}