#include<stdio.h>
#include<stdlib.h>
struct createnodre
{
    int data;
    struct createnodre *next;
};
typedef struct createnodre Node;

int main()
{
    Node *first;
    first=(Node*)malloc(sizeof(Node));
    first->data=10;
    first->next=NULL;
    printf("%d",first->data);
    return 0;
}