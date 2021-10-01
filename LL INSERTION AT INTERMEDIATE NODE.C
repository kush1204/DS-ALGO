
#include<stdlib.h>
#include<stdio.h>

struct node{
       int data;
       struct node *next;
};

struct node *head; /*global variable */
void insert(int x,int n);
void print();

int main(){
    head=NULL;
    insert(10,1);
    insert(20,2);
    insert(30,3);
    insert(40,2);
    insert(50,2);
    print();     /*printing all the linked list*/
    }

void insert( int x,int n)
{
    struct node* temp1 =(struct node*)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->next=NULL;
    if(n==1){              // list is empty
        temp1->next=head; //null
        head=temp1;       //head is pointing to temp now
        return;
    }
    struct node* temp2 =(struct node*)malloc(sizeof(struct node));
    temp2=head;
    int i;
    for(i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}

void print(){
    struct node *temp= head;
    while(temp!=NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }
   printf("\n");
}
