/*  
    LAB ASSIGNMENT: 06
    Question number: 02

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 01/03/2024
*/

#include <stdio.h>

void func(int arr[],int size)
{
    int sum=0;
    float avg;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    avg=(float) sum/ (float) size;

    printf("Output:\n");
    for(int i=0;i<size;i++)
    {
        if(((float)arr[i])>avg)
        {
            printf("%d, ",arr[i]);
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the integer array:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements one-by-one:\n");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    func(array,n);

    return 0;
}