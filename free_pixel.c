#include "free_matrix.h"
#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

void free_pixel(pixel *p) { free(p); }