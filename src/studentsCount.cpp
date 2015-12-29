
/*
OVERVIEW:  Write a function that takes ascending sorted student's score array and tells how many number of students got more marks and how many students got less marks than the given student.
E.g.: Input array: [10, 20, 30, 40, 50], score: 30, lessCount value is 2 (10, 20 are less than 30), moreCount value is 2 (40, 50 are greater than 30).

INPUTS: Ascending sorted student marks array, length of the array, one student score, lessCount and moreCount are to be
used to store final results.

OUTPUT: Update lessCount and moreCount with number of students less than and more than given score.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <stdio.h>


void * studentsCount(int *arr, int len, int score, int *lessCount, int *moreCount)
{
    int i,count1=0;
	if(arr==NULL||len<=0) return NULL;
	if(len==1)
    {
        if(arr[0]==score)
            {*lessCount=0;*moreCount=0;}
        if(arr[0]>score){*lessCount=0;*moreCount=1;}
        if(arr[0]<score){*lessCount=1;*moreCount=0;}
    }
    else{
    for(i=0;i<len;i++)
    {
        if(arr[i]<score)
        {
            count1++;
        }
        else if(arr[i]==score)
        {
            break;
        }
       else  if(arr[i]>score)
        {
            break;
        }
    }

    if(arr[i]==score)
    {
        *lessCount=count1;
         if(count1+1<len){
        while(arr[count1+1]==score){count1++;}}
        *moreCount=len-count1-1;

    }
    if(arr[i]>score)
    {
        *lessCount=count1;*moreCount=len-count1;
    }}
}
