#ifndef MATRIX_H
#define MATRIX_H
#include "struct.h"

// Create a new matrix with the right dimension.
matrix *create_matrix_blank(int dimension);

// Prints the matrix.
void print_matrix(matrix *m);

// Fill the matrix with a color.
void fill_matrix(matrix *m, unsigned char r, unsigned char g, unsigned char b);

// Gets the character located in the i row and j column.
char get_cell_matrix(matrix *m, int i, int j, char color);

// Sets the c character in the i row and j column.
void set_cell_matrix(matrix *m, int i, int j, char color, unsigned char c);

// Gets the dimensions of the matrix
int get_dimension_matrix(matrix *m);
#endif