#include "Class.h"
void initiate(vec_2D&);

void initiate(vec_2D &HM)
{
    for (int i = 0; i < HMS; i++)
    {
        for (int j = 0; j < columnNum; j++)
        {
            HM[i][j] = rand() % 5;
        }
    }
}