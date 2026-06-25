#include<stdio.h>
#include<stdlib.h>

struct traverse
{
    int data;
    struct traverse *next;
};

typedef struct traverse Node;

void printdata(Node *head)
{
    if(head == NULL)
    {
        printf("list is empty\n");
        return;
    }

    Node *ptr = head;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void cont(Node *head)
{
    int count = 0;

    if(head == NULL)
    {
        printf("list is empty\n");
        return;
    }

    Node *ptr = head;

    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }

    printf("%d\n", count);
}

void add_at_end(Node *head, int element)
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    Node *ptr = head;

    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = element;
    temp->next = NULL;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
}

Node* at_begining(Node *head, int ele)
{
    Node *ptr = (Node*)malloc(sizeof(Node));
    ptr->data = ele;
    ptr->next = head;

    return ptr;
}

int main()
{
    Node *head = (Node*)malloc(sizeof(Node));
    head->data = 10;
    head->next = NULL;

    Node *current = (Node*)malloc(sizeof(Node));
    current->data = 20;
    current->next = NULL;
    head->next = current;

    current = (Node*)malloc(sizeof(Node));
    current->data = 4;
    current->next = NULL;
    head->next->next = current;

    add_at_end(head, 8);

    head = at_begining(head, 5);

    cont(head);
    printdata(head);

    return 0;
}