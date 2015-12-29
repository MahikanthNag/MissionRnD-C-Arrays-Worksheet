/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/
#include<malloc.h>
#include <stdio.h>

void* removeArrayDuplicates(int *arr, int len)
{
    int i,j,t,x,k=1,*arr1;arr1=(int*)malloc(100);
    if(arr==NULL||len<0)
        return NULL;

    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;
            }
        }
    }
    x=arr[0];arr1[0]=arr[0];
    for(i=1;i<len;i++)
    {
        if(arr[i]!=x)
        {
            arr1[k]=arr[i];x=arr[i];k++;
        }
    }
    for(i=0;i<k;i++)
    {
        arr[i]=arr1[i];
    }

	return NULL;
}
/*int main()
{
    int i;
    int arr[5]={1,2,3,2,1};removeArrayDuplicates(arr, 5);
    for(i=0;i<5;i++)
    {
        printf("%d  ",arr[i]);
    }

}*/
