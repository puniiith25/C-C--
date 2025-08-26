#include <stdio.h>
#include<stdlib.h>
 
struct node {
int data;
struct node* next;
};
 
void append(struct node **head_ref, int data)
{
struct node* newNode = (struct node*)  malloc(sizeof(struct node));
newNode -> data = data;
newNode -> next = NULL;
 
if(*head_ref == NULL) {
*head_ref = newNode;
} else {
struct node* temp = *head_ref;
 
while(temp -> next != NULL) {
temp = temp -> next;
}
temp -> next = newNode;
}
}
void printList(struct node **head_ref) {
 
if(*head_ref == NULL) {
printf("List is empty");
} else {
struct node* temp = *head_ref;
 
while(temp != NULL) {
printf("%d =>", temp->data);
temp = temp-> next;
}
printf("NULL\n");
}
}
 
void prepend(struct node** head_ref, int data) {
 
struct node* newNode = (struct node*) malloc (sizeof(struct node));
newNode -> data = data;
newNode -> next = NULL;
 
newNode -> next = *head_ref;
*head_ref = newNode;
}
 
void insertAtPos(struct node** head_ref, int pos, int data) {
 
if(*head_ref == NULL && pos !=1)
 
{
printf("\nPosition not Available: List is empty\n");
}
else if(pos == 1)
{
prepend(head_ref,data);
printf("\nInserted at Position: %d\n",pos);
}
else
{
struct node* newNode = (struct node*)  malloc(sizeof(struct node));
newNode -> data = data;
newNode -> next = NULL;
 
struct node* temp = *head_ref;
int count = 1;
 
while(count < pos-1 && temp->next != NULL) {
count++;
temp= temp->next;
}
if(count == pos-1) {
newNode->next = temp->next;
temp->next = newNode;
printf("\nInserted at Position: %d\n",pos);
} else {
printf("\nPosition %d not Available , Last Position: %d\n",pos, count);
}
}
}
 
void findMiddle(struct node** head_ref){
    
    if(*head_ref == NULL){
        printf("\nList is Empty\n");
    }else{
        
        struct node* slow = *head_ref;
        struct node* fast = *head_ref;
        
        while(fast->next != NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(fast->next== NULL){
            printf("\nMiddle node: %d\n",slow->data);
        }else{
            printf("\nIt is a Even Lengthed List: Enter 1 for 1st Middle 2 for 2nd Middle");
            int pos;
            scanf("%d",&pos);
            if(pos ==1){
                printf("\nMiddle node: %d\n",slow->data);
            }else{
                printf("\nMiddle node: %d\n",slow->next->data);
            }
        }
 
    }
}
 
void appendWithoutDup(struct node** head_ref,int data){
    
    struct node* newNode = (struct node*)  malloc(sizeof(struct node));
newNode -> data = data;
newNode -> next = NULL;
 
    if(*head_ref == NULL){
        *head_ref = newNode;
    }else{
        struct node* temp = *head_ref;
        
        while(temp->next!=NULL){
            if(temp->data == newNode->data){
                printf("DUplicate found\n");
                return;
            }
            temp = temp->next;
        }
        if(temp->data == newNode->data){
            printf("DUplicate found\n");
            return;
        }
        temp->next = newNode;
    }
}
 
 
int main()
{
struct node* head = NULL;
 
int n,n1;
printf("Enter the Initial No of Nodes: ");
scanf("%d",&n);
    n1 = n;
printf("\nEnter data for %d Nodes: ",n);
while(n-->0) {
int val;
scanf("%d",&val);
append(&head,val);
}
printList(&head);
appendWithoutDup(&head,45);
printList(&head);
// int pos, data;
//     printf("\nEnter pos and data for Insertion at Position: ");
    
    
// scanf("%d %d",&pos, &data);
// insertAtPos(&head,pos,data);
// printf("\n\nList After Insertion: ");
// printList(&head);
// findMiddle(&head);
 
return 0;
}



---------------------------------------------------------------------
Linkedlist - Insert at position
---------------------------------------------------------------------
#include <stdio.h>
#include<stdlib.h>
 
struct node {
int data;
struct node* next;
};
 
void append(struct node **head_ref, int data)
{
struct node* newNode = (struct node*)  malloc(sizeof(struct node));
newNode -> data = data;
newNode -> next = NULL;
 
if(*head_ref == NULL) {
*head_ref = newNode;
} else {
struct node* temp = *head_ref;
 
while(temp -> next != NULL) {
temp = temp -> next;
}
temp -> next = newNode;
}
}
void printList(struct node **head_ref) {
 
if(*head_ref == NULL) {
printf("List is empty");
} else {
struct node* temp = *head_ref;
 
while(temp != NULL) {
printf("%d =>", temp->data);
temp = temp-> next;
}
printf("NULL\n");
}
}
 
void prepend(struct node** head_ref, int data) {
 
struct node* newNode = (struct node*) malloc (sizeof(struct node));
newNode -> data = data;
newNode -> next = NULL;
 
newNode -> next = *head_ref;
*head_ref = newNode;
}
 
void insertAtPos(struct node** head_ref, int pos, int data) {
 
if(*he
 
{
printf("\nPosition not Available: List is empty\n");
}
else if(pos == 1)
{
prepend(head_ref,data);
printf("\nInserted at Position: %d\n",pos);
}
else
{
struct node* newNode = (struct node*)  malloc(sizeof(struct node));
newNode -> data = data;
newNode -> next = NULL;
 
struct node* temp = *head_ref;
int count = 1;
 
while(count < pos-1 && temp->next != NULL) {
count++;
temp= temp->next;
}
if(count == pos-1) {
newNode->next = temp->next;
temp->next = newNode;
printf("\nInserted at Position: %d\n",pos);
} else {
printf("\nPosition %d not Available , Last Position: %d\n",pos, count);
}
}
}
 
int main()
{
struct node* head = NULL;
 
int n,n1;
printf("Enter the Initial No of Nodes: ");
scanf("%d",&n);
    n1 = n;
printf("\nEnter data for %d Nodes: ",n);
while(n-->0) {
int val;
scanf("%d",&val);
append(&head,val);
}
printf("\nList Before Insertion: ");
printList(&head);
 
int pos, data;
    printf("\nEnter pos and data for Insertion at Position: ");
    
scanf("%d %d",&pos, &data);
insertAtPos(&head,pos,data);
 
printf("\n\nList After Insertion: ");
printList(&head);
 
 
return 0;
}
------------------------------------------------------------
LinkedList with Insertion and deletion at begin,end
----------------------------------------------------------
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