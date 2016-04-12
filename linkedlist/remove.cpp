/* Driver program to test above functions */
#include <iostream>
#include <stdio.h>
using namespace std;

/* structure of a linked list node */
struct node
{
    int data;
    struct node *next;
};


void remove(node* head,int removeRequest[], int remove_length)
{
    int i = 0, j=0;
    node* temp = head;
    node* temp1;
    while(temp != NULL)
    {
        if(i== (removeRequest[j]-1)){
            temp1 = temp->next;
            temp->next = temp->next->next;
            delete(temp1);
            j++;
        }else{
            temp = temp->next;
        }
        i++;
    }
}

    
/* Utility function to insert a node at the begining */
void push(struct node **head_ref, int new_data)
{
    node *new_node  = new node;
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

/* Utility function to print a linked list */
void printList(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

int main()
{
    struct node *head = NULL;

    /* Create following linked list
      12->15->10->11->5->6->2->3 */
    push(&head,3);
    push(&head,2);
    push(&head,6);
    push(&head,5);
    push(&head,11);
    push(&head,10);
    push(&head,15);
    push(&head,12);

    printf("Given Linked List: ");
    printList(head);

    int rm[] = {2,3,7};
    int n= sizeof(rm)/sizeof(rm[0]);
    remove(head,rm,n);
    
    printf("\nModified Linked List: ");
    printList(head);  

    getchar();
    return 0;
}
