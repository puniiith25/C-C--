#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void append(struct node** head_ref, int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = newNode;
    } else {
        struct node* temp = *head_ref;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void palindrome(struct nide **head_ref){
    if(*head_ref==NULL){
        printf("List is Empty");
        return;
    }
    struct node* temp = *head_ref;
    if(temp->next==NULL){
        printf("The List is Palindrome");
        return;

    }
}
void printList(struct node* head) {
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        struct node* temp = head;
        while (temp != NULL) {
            printf("%d => ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
void Sort(struct node ** head_ref1 , struct node ** head_ref2){
    
}
int main() {
    struct node* h1 = NULL;  
    int n1, val1;

    printf("Enter number of nodes: ");
    scanf("%d", &n1);

    while (n1-- > 0) {
       
        scanf("%d", &val1);
        append(&h1, val1);
    }

   
    printList(h1);

    return 0;
}
