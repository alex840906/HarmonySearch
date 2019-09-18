#include <vector>
#ifndef GA_ARG_H
#define GA_ARG_H
#define HMCR 0.95
#define PAR 0.1
#define HMS 5
#define columnNum 3

typedef vector<int> vec_1D;
typedef vector<vector<int>> vec_2D;

vec_2D HM(HMS, vec_1D(columnNum, 0));
#endif