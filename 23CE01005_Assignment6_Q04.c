/*  
    LAB ASSIGNMENT: 06
    Question number: 05

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 01/02/2024
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int m,n;
    bool subset;

    printf("Enter the size of the integer arrays: arr1[] and arr2[]:\n");
    scanf("%d %d",&m,&n);

    int arr1[m], arr2[n];

    printf("For arr1[], enter the elements one-by-one:\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("For arr2[], enter the elements one-by-one:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    //Checking if arr2[] is a subset of arr1[]

    for(int i=0;i<n;i++) //i is index of arr2[]
    {
        subset=0;

        for(int j=0;j<m;j++) //j is index of arr1[]
        {
            if(arr2[i]==arr1[j])
            {
                subset=1;
                break;
            }
        }
        if(subset==0)
        {
            printf("arr2[] is NOT a subset of arr1[]\n");
            break;
        }
    }
    if(subset==1)
    {
        printf("arr2[] is a subset of arr1[]\n");
    }

    return 0;
}