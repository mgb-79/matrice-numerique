#include <stdio.h>
#include <stdlib.h>
#include "alloc.h"

matrix *new_matrix(int dimension)
{
    matrix *m = malloc(sizeof(matrix));
    m->mat = malloc(sizeof(char *) * dimension);
    for (int i = 0; i < dimension; i++)
    {
        m->mat[i] = malloc(sizeof(char) * dimension);
    }
    m->dimension = dimension;
    return m;
}