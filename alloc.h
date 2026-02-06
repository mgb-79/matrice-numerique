#ifndef FREE_H
#define FREE_H

#include "struct.h"
#include <stdio.h>

// Allocates a matrix with the right dimension.
matrix *new_matrix(int dimension);

// Allocates a pixel with the right colors.
pixel *new_pixel();

#endif