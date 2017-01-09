#include <stdio.h>

typedef struct node
{
 int data;
 node* next;
}

int size(node* head)
{
 node* temp=head;
 int size=0;
 if( head != NULL)
 {
  while(temp!=NULL)
  {
   temp=temp->next;
   size++;
  }
 }
 return size;
}



bool empty(node* head)
{
 return (head == NULL)?true:false;
}

int value_at(int index, node *head)
{
 int current_index=0;
 node* temp=head;
 
 while(temp != NULL && index> current_index)temp-temp->next;
 
 if(index<current_index || temp==NULL)
 {
  printf("Index out of bounds");
  exit(EXIT_FAILURE);
 }
 
 return temp->data;
}

int main()
{
 return 0;
}
