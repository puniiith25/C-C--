#include <stdio.h>
struct node {
    int data ;
    struct node * next;
};

    


void append(struct node ** head_ref , int data){
    struct  node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node ->data=data;
    new_node ->next=NULL;
    if(*head_ref==NULL){
        *head_ref= new_node;

    }else{
        struct node *temp = *head_ref;
        while (temp->next!=NULL)
        {
           temp=temp->next;
        }
        temp->next=new_node;   
    }
}
int main()
{
   

    return 0;
}