#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "free_matrix.h"

void free_matrix(matrix *m)
{
    for (int i = 0; i < m->dimension; i++)
    {
        free(m->mat[i]);
    }
    free(m->mat);
    return;
}