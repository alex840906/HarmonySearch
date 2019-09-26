#include <time.h>
#include "HS_operator.h"
#include "HS_ARG.h"
#include "fitness.h"

int main()
{
    srand(time(NULL));

    genHM(HM);
    calculateScoreMatrix(HM, scroeMatrix, scoreIndex);
    int run=0;
    int iteration = 0;

    vec_1D newHarmony(columnNum);
    //newHarmony.resize(columnNum);

    while (run < 1)
    {
        int total=0;
        while (iteration < 1000)
        {
            improvise();
            newHarmony = selectHarmony();
            pitch(newHarmony);
            update(newHarmony);
            newHarmony.clear();
            iteration++;

            // cout<<iteration<<","<<scroeMatrix[scoreIndex[0]]<<endl;
            // for(int i=0;i<HMS;i++)
            // {
            //     for(int j:HM[i])
            //         cout<<j;
            //     cout<<endl;
            // }
            // cout<<endl;
        }
        run++;
    }

    // for (int i = 0; i < HMS; i++)
    // {
    //     for (int j = 0; j < columnNum; j++)
    //         cout << HM[i][j];
    //     cout<<endl;
    //     cout << scroeMatrix[i]<<endl;
    // }

    // for(int i=0;i<HMS;i++)
    //     cout<<scoreIndex[i];

    system("pause");
    return 0;
}