#ifndef ALGO_H
#define ALGO_H

#include <stdlib.h>
#include <stdio.h>

#define max(a, b) ((a) > (b) ? (a) : (b))
/*
 * a - first array, x - length of a;
 * b - second array, y - length of b;
 */
int *merge_sorted_arrays(int *a, int x, int *b, int y);

#endif //ALGO_H
