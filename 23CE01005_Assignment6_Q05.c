/*  
    LAB ASSIGNMENT: 06
    Question number: 05

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 01/02/2024
*/

#include <stdio.h>

int main()
{
    int r,c;
    printf("Enter the number of rows and the number of columns:\n");
    scanf("%d %d",&r,&c);

    printf("Enter the elements of the matrix matrix one-by-one:\n");

    int matrix[r][c],trans[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter element (%d,%d):\n",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nInput:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            trans[j][i]=matrix[i][j];
        }
        printf("\n");
    }

    printf("\nOutput:\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}