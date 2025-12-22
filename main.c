#include <stdio.h>
#include "alloc.h"
#include "struct.h"
#include "matrix.h"
#include "free_matrix.h"

int main()
{
    matrix *m = create_matrix_blank(6);
    print_matrix(m);
    free_matrix(m);
    return 0;
}