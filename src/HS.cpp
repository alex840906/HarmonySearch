#include <time.h>
#include "HS_operator.h"
#include "HS_ARG.h"
#include "fitness.h"

int main()
{
    srand(time(NULL));

    genHM(HM);

    vec_1D newHarmony = selectHarmony();
 

    calculateScoreMatrix(HM, scroeMatrix, scoreIndex);

    for (int i = 0; i < HMS; i++)
    {
        for (int j = 0; j < columnNum; j++)
            cout << HM[i][j];
        cout<<endl;
        cout << scroeMatrix[i]<<endl;
    }
    
    for(int i=0;i<HMS;i++)
        cout<<scoreIndex[i];

    system("pause");
    return 0;
}