/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *arr, int len)
{
	int i,j,temp;
	if(arr==NULL||len<0)
	return NULL;
	for(i=0;i<len-1;i++)// 10 40 30 20 50
    {
        if(arr[i]>arr[i+1])
        {
            for(j=i;j<len;j++)
            {
                if(arr[j]>arr[i])
                {
                    temp=arr[j-1];arr[j-1]=arr[i];arr[i]=temp;
                    return NULL;
                }
            }
            temp=arr[len-1];arr[len-1]=arr[i];arr[i]=temp;return NULL;

        }
    }

}
