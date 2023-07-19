#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node* insert(struct node *);
void display(struct node *);
void sort(struct node *head,int n);
struct node*newnode,*temp,*head,temp1;
int main()
{
    struct node*head = NULL;
    int n;
    printf("enter n   \n");
    scanf("%d",&n);
    printf("enter data\n");
    for(int i=0;i<n;i++)
    {
            newnode=(struct node*)malloc(sizeof(struct node));

            scanf("%d",&newnode->data);
            head=insert(newnode);
    }
    display(head);
    sort(head,n);




}

struct node* insert(struct node *newnode)
{
    if(head==NULL)
    {
        head=newnode;
        head->next=NULL;
        return(head);
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=newnode;
        newnode->next=NULL;
        return(head);

    }
}

void display(struct node *head)
{ printf("linked  list is \n");
    if(head==NULL)
    {
        printf("the linkded list is empty\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void sort(struct node *head,int n)
{ struct node*temp=head;
struct node*temp1=temp->next;
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if (temp->data>temp->next->data)
           {
               temp1=temp->data;
               temp->data=temp->next->data;
               temp->next->data=temp1;
           }
       }
   }
   printf("after sort\n");
   display(head);
}
