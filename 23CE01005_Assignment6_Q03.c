/*  
    LAB ASSIGNMENT: 06 
    Question number: 03

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 01/03/2024
*/

#include <stdio.h>

void recFunc(int array[],int size)
{
    int first=0, last=size-1,temp;

    if(first<last)
    {
        temp=array[first];
        array[first]=array[last];
        array[last]=temp;
        recFunc(array+1,size-2);
    }

}
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements one-by-one:\n");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    recFunc(array,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}