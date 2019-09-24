#ifndef HS_operator_H
#define HS_operator_H
#include "Class.h"
#include "fitness.h"

void swap(vec_1D &, int, int);
void genHM(vec_2D&);
vec_1D improvise();
vec_1D selectHarmony();
vec_1D selectFromHM();
vec_1D newHarmony();
vec_1D pitch(vec_1D&);


// void genHM(vec_2D &HM)
// {
//     for (int i = 0; i < HMS; i++)
//     {
//         for (int j = 0; j < columnNum; j++)
//         {
//             HM[i][j] = rand() % 5;
//         }
//     }
// }

// vec_1D selectHarmony()
// {
//     float probibility = (double) rand() / (RAND_MAX + 1);
//     vec_1D harmony;

//     if( probibility < HMCR)
//         harmony = selectFromHM();
    
//     else
//         harmony = newHarmony();

//     return harmony;  
// }

// vec_1D selectFromHM()
// {
//     int id = rand() % HMS;
//     vec_1D harmony = HM[id];

//     return harmony;
// }

// vec_1D newHarmony()
// {
//     vec_1D harmony(columnNum);

//     for(int i=0;i<columnNum;i++)
//         harmony[i] = rand() % 5;
    
//     return harmony;
// }

// vec_1D pitch(vec_1D &harmony)
// {
//     float probibility = (double) rand() / (RAND_MAX + 1);

//     if(probibility <= PAR)
//     {
//         if(probibility <= PAR/2)
//         {
            
//         }

//         else
//         {
//             /* code */
//         }
        
//     }
// }

#endif