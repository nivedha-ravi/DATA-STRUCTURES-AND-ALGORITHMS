#include<stdio.h>
typedef struct Node Node;
struct Node
{
  int val;
  Node* next;
};
Node* head=NULL;
Node* tail=NULL;
void append(int val)
{
        Node* newNode=(Node*)malloc(sizeof(Node));
        newNode->val=val;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=tail=newNode;
        }
        else
        {
        tail->next=newNode;
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
    append(value);
  }
  Node* ptr=head;
  while(ptr!=NULL)
  {
    printf("%d->",ptr->val);
    ptr=ptr->next;
  }
  printf("NULL");
}
