// C program to check a given matrix is an identity matrix or not
#include <stdio.h>

int isIdentityMatrix(int Matrix[][3])
{
    int flag = 0;
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j && Matrix[i][j] != 1) {
                flag = -1;
                break;
            }
            else if (i != j && Matrix[i][j] != 0) {
                flag = -1;
                break;
            }
        }
    }

    return flag;
}
int main(void)
{
    int Matrix1[3][3] = {
        { 1, 0, 0 },
        { 0, 1, 0 },
        { 0, 0, 1 }
    };

    int Matrix2[3][3] = {
        { 1, 0, 0 },
        { 0, 1, 1 },
        { 0, 0, 1 }
    };

    if (isIdentityMatrix(Matrix1) == 0)
        printf("Matrix1 is an IDENTITY MATRIX\n");
    else
        printf("Matrix1 is NOT an identity matrix\n");

    if (isIdentityMatrix(Matrix2) == 0)
        printf("Matrix2 is an IDENTITY MATRIX\n");
    else
        printf("Matrix2 is NOT an identity matrix\n");

    return 0;
}