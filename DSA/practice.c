#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

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

int main(){
    struct node* head =NULL;
    append(&head ,10);
    printList(&head);
    return 0;

}
