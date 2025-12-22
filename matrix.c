#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "alloc.h"

matrix *create_matrix_zero(int dimension)
{
    matrix *m = new_matrix(dimension);
    for (int i = 0; i < m->dimension; i++)
    {
        m->mat[i] = calloc(sizeof(char), dimension);
    }
    return m;
}