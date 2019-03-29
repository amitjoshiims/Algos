#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int item);
void printPreOrder(struct Node *head);
void printInOrder(struct Node *head);
void printPostOrder(struct Node *head);

int main()
{

    struct Node *head = NULL;
    head = newNode(1);
    head->left = newNode(2);
    head->right = newNode(3);
    head->left->left = newNode(4);
    head->left->right = newNode(5);

    printInOrder(head);
    printf("\n");
    // printPreOrder(head);
    // printf("\n");
    // printPostOrder(head);
}

void printPreOrder(struct Node *head)
{
    if (head == NULL)
        return;

    printf("%d",head->data);
    printPreOrder(head->left);
    printPreOrder(head->right);
}

void printInOrder(struct Node *head)
{

    if (head == NULL)
        return;

    printInOrder(head->left);
    printf("%d",head->data);
    printInOrder(head->right);
}
void printPostOrder(struct Node *head)
{

    if (head == NULL)
        return;

    printPostOrder(head->left);
    printPostOrder(head->right);
    printf("%d",head->data);
}

struct Node *newNode(int item)
{
    struct Node *newItem = (struct Node *)malloc(sizeof(struct Node));
    newItem->data = item;
    newItem->left = NULL;
    newItem->right = NULL;

    return newItem;
}
