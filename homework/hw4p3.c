#include <stdio.h>
void main(void){
    int row1=0, column1=0, row2=0, column2=0;
    printf("Enter row and column for the first matrix A: ");
    scanf("%d %d",&row1,&column1);
    printf("\nEnter row and column for the first matrix B: ");
    scanf("%d %d",&row2,&column2);

    int A[5][5]={0}, B[5][5]={0}, matrix[5][5]={0};
    printf("\nEnter elements of the first matrix:\n");
    for(int i=0; i<row1; i++){
        printf("Enter row %d:  ",i+1);
        for(int j=0; j<column1; j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEnter elements of the second matrix:\n");
    for(int i=0; i<row2; i++){
        printf("Enter row %d:  ",i+1);
        for(int j=0; j<column2; j++){
            scanf("%d",&B[i][j]);
        }
    }

    printf("The resultant matrix of A*B:\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<column2; j++){
            matrix[i][j]=A[i][j]*B[j][i];
            printf("%-2d ",matrix[i][j]);
        }
        printf("\n");
    }
}
