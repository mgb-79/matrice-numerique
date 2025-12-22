#include <stdio.h>
#include "alloc.h"
#include "free.h"
#include "matrix.h"

int main()
{
    matrix *m = create_matrix_zero(2);
    free_matrix(m);
    return 0;
}