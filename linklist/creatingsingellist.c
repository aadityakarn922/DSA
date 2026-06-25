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
    printf("%d\n",first->data);
    Node *current;
    current=(Node*)malloc(sizeof(Node));
    current->data=100;
    current->next=NULL;
    printf("%d\n",current->data);
    first->next=current;
    printf("%d",first->next);
    current=(Node*)malloc(sizeof(Node));
    current->data=3;
    current->next=NULL;
    first->next->next=current;
    printf("%d",first->next->next);


    return 0;
}