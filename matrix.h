#ifndef MATRIX_H
#define MATRIX_H
#include "struct.h"

// Create a new matrix with the right dimension.
matrix *create_matrix_blank(int dimension);

// Prints the matrix.
void print_matrix(matrix *m);

// Fill the matrix with a color.
void fill_matrix(matrix *m, pixel *p);

// Gets the pixel located in the i row and j column.
pixel *get_cell_matrix(matrix *m, int i, int j);

// Sets the c character in the i row and j column.
void set_cell_matrix(matrix *m, int i, int j, pixel p);

// Gets the dimensions of the matrix
int get_dimension_matrix(matrix *m);
#endif