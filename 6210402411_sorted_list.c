//6210402411 Nataset Tanabodee
#include<stdio.h> 
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void append(int i, struct node **root);

void sort(struct node *root);

void print_list(struct node *root);

void swapped(struct node *a, struct node *b);

int main() 
{
    int i;
    struct node *root = NULL;
    
    while (1)
    {
        scanf("\n%d", &i);
        if (i <= -1)
            break;
        append(i, &root);
    }

    sort(root);

    print_list(root);

}

void append(int i, struct node **root) 
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = i;
    temp->next = NULL;
    if (*root == NULL)
        *root = temp;
    else {
        struct node *temp_loop = *root;
        while (temp_loop->next != NULL)
            temp_loop = temp_loop->next;
        temp_loop->next = temp ;
    }
    return;
}

void swapped(struct node *a, struct node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 

void sort(struct node *root) 
{ 
    int swap, i; 
    struct node *temp; 
    struct node *temp_check = NULL; 
  
    if (root == NULL) 
        return; 
  
    do
    { 
        swap = 0; 
        temp = root; 
  
        while (temp->next != temp_check) 
        { 
            if (temp->data > temp->next->data) 
            {  
                swapped(temp, temp->next); 
                swap = 1; 
            } 
            temp = temp->next; 
        } 
        temp_check = temp; 
    } 
    while (swap); 
} 

void print_list(struct node *root) 
{
    while (root != NULL) {
    printf("%d\n", root->data); 
     root = root->next; 
    }
}