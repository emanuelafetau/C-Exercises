#include <stdio.h>

int compare_arrays(char arr1[],int size1,char arr2[],int size2)
{
    if(size1!=size2)
    return 0;

    for(int i=0;i<size1;i++)
    {
        if(arr1[i]!=arr2[i])
        return 0;
    }
    return 1;
}