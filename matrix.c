#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "alloc.h"
#include "matrix.h"

matrix *create_matrix_blank(int dimension)
{
    matrix *m = new_matrix(dimension);
    for (int i = 0; i < m->dimension; i++)
    {
        for (int j = 0; j < m->dimension; j++)
        {
            m->mat[i][j] = ' ';
        }
    }
    return m;
}

void print_matrix(matrix *m)
{
    for (int i = 0; i < m->dimension; i++)
    {
        for (int j = 0; j < m->dimension; j++)
        {
            printf("|%c", m->mat[i][j]);
        }
        printf("|\n");
    }
}

char get_cell_matrix(matrix *m, int i, int j)
{
    return m->mat[i][j];
}

void set_cell_matrix(matrix *m, int i, int j, char c)
{
    m->mat[i][j] = c;
}