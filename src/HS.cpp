#include <time.h>
#include "HS_operator.h"
#include "HS_ARG.h"
#include "fitness.h"

int main()
{
    srand(time(NULL));

    genHM(HM);

    vec_1D newHarmony = selectHarmony();

    // for (int i = 0; i < columnNum; i++)
    //     cout << newHarmony[i];

    // cout << endl;
    // cout << fitness(newHarmony) << endl;

    calculateScoreMatrix(HM, scroeMatrix);
    for (int i = 0; i < HMS; i++)
    {
        for (int j = 0; j < columnNum; j++)
            cout << HM[i][j];
        cout<<endl;
        cout << scroeMatrix[i]<<endl;
    }
        

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