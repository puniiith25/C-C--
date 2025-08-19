#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void append(struct node **head_ref, int data)
{
    struct node* newNode = (struct node*)  malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = NULL;
    
    if(*head_ref == NULL){
        *head_ref = newNode;
    }else{
        struct node* temp = *head_ref;
        
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
}
void prepend(struct node** head_ref, int data){
    
    struct node* newNode = (struct node*) malloc (sizeof(struct node));
    newNode -> data = data;
    newNode -> next = NULL;
    
    newNode -> next = *head_ref;
    *head_ref = newNode;
}
void delFront(struct node** head_ref){
    
    if(*head_ref == NULL)
    {
        printf("List is empty");
    }else 
    {
        struct node* temp = *head_ref;
        *head_ref = temp->next;
        free(temp);
    }
}
void delLast(struct node** head_ref){
    if(*head_ref == NULL){
        printf("List is empty");
    }else
    {
        struct node* temp = *head_ref;
        if(temp->next == NULL){
            *head_ref = NULL;  
            free(temp);
        }else{
            while(temp -> next -> next != NULL){
                temp = temp->next;
            }
            // struct node* temp1 = temp-> next;
            // temp->next = NULL;
            free(temp->next);
            temp->next = NULL;
        }
        
        
    }
}
 
void printList(struct node **head_ref){
    
    if(*head_ref == NULL){
        printf("List is empty");
    }else{
        struct node* temp = *head_ref;
        
        while(temp != NULL){
            printf("%d =>", temp->data);
            temp = temp-> next;
        }
        printf("NULL\n");
    }
}


void del(struct node**head_ref ,int pos){
    if(*head_ref==NULL){
        printf("Linked list is empty");
    
    }else if()
}

int main()
{
     struct node* head = NULL;
     
     append(&head, 340);
     append(&head, 333);
     append(&head, 999);
     append(&head, 3990);
     delLast(&head);
    printList(&head);
    prepend(&head, 30);
    prepend(&head,90);
    prepend(&head, 888);
    delFront(&head);
    printList(&head);

    return 0;
}