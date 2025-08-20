#include <stdio.h>

void check_characters(char arr[],int size,int *uppercase,int *lowercase,int *digits){
    *uppercase=0;
    *lowercase=0;
    *digits=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
        {
            (*uppercase)++;
        }
        else if(arr[i]>='a' && arr[i]<='z')
        {
            (*lowercase)++;
        }
        else if(arr[i]>='0' && arr[i]<='9')
        {
            (*digits)++;
        }
    }
}

int main()
{
    char arr[]={'A','b','C','9','x','Z','3','m'};
    int upper,lower,digit;

    check_characters(arr,sizeof(arr)/sizeof(arr[0]),&upper,&lower,&digit);
    
    printf("Uppercase: %d\n", upper);
    printf("Lowercase: %d\n", lower);
    printf("Digits: %d\n", digit);

}