#include <time.h>
#include "Class.h"
#include "HS_operator.h"
#include "HS_ARG.h"

float fitness()
{
}

int main()
{
    srand(time(NULL));
    vec_2D HM(HMS, vec_1D(columnNum, 0));

    initiate(HM);
    for (int i = 0; i < HMS; i++)
    {
        for (int j = 0; j < columnNum; j++)
            cout<<HM[i][j];

        cout<<endl;
            
    }
    system("pause");
    return 0;
}