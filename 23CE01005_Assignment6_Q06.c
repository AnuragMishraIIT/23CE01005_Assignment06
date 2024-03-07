/*  
    LAB ASSIGNMENT: 06
    Question number: 06

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 01/02/2024
*/

#include <stdio.h>

void avgTemp(int arr[][7],int rows)
{
    int sum=0;
    float avg;
    printf("Average temperatures:\n");

    for(int i=0;i<rows;i++)
    {
        sum=0;
        for(int j=0;j<7;j++)
        {
            sum=sum+arr[i][j];
        }
        avg=(float) sum/7.00;
        printf("City %d: %.2f\n",i+1,avg);        
    }
}

int main()
{
    int n;
    printf("Enter the number of cities:\n");
    scanf("%d",&n);
    int array[n][7];
 
    for(int i=0;i<n;i++)
    {
        printf("Input City %d's temperatures:\n",i+1);

        for(int j=0;j<7;j++)
        {
            scanf("%d",&array[i][j]);   
        }
        printf("\n");
    }

    avgTemp(array,n);
    return 0;
}
