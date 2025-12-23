#ifndef MATRIX_H
#define MATRIX_H
#include "struct.h"

// Create a new matrix with the right dimension.
matrix *create_matrix_blank(int dimension);

// Prints the matrix.
void print_matrix(matrix *m);

// Gets the character located in the i row and j column.
char get_cell_matrix(matrix *m, int i, int j);

// Sets the c character in the i row and j column.
void set_cell_matrix(matrix *m, int i, int j, char c);

#endif