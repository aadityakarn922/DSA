#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(2*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory could not be allocated");
    }
    else
    {
        printf("memory allocated ");
            
        
    }
    
}