#include <time.h>
#include "Class.h"
#include "HS_operator.h"
#include "HS_ARG.h"

float fitness(vec_1D &solution)
{
    int fitnessValue=0;
    fitnessValue = pow((solution[0]-2),2) + pow(solution[1]-3,4)\ 
        + pow(solution[2]-1,2) + 3;

    return fitnessValue;
}

int main()
{
    srand(time(NULL));
    vec_2D HM(HMS, vec_1D(columnNum, 0));

    genHM(HM);
    float probibility = (double) rand() / (RAND_MAX + 1);
    cout<<probibility;

    //Check Harmony Memory
    /*
    for (int i = 0; i < HMS; i++)
    {
        for (int j = 0; j < columnNum; j++)
            cout<<HM[i][j];
        cout<<endl;          
    }
    */
    system("pause");
    return 0;
}