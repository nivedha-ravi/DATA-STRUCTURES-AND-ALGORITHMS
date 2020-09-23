#include<stdio.h>
typedef struct Node Node;
struct Node
{
  int val;
  Node* next;
};
Node* head=NULL;
Node* tail=NULL;

void prepend(int price)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->price=price;
    newNode->next=head;
    head=newNode;
    if(tail==NULL)
    {
        tail=newNode;
    }
}
int main()
{
  int n,value;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    scanf("%d ",&value);
    prepend(value);
  }
  Node* ptr=head;
  while(ptr!=NULL)
  {
    printf("%d->",ptr->val);
    ptr=ptr->next;
  }
  printf("NULL");
}
