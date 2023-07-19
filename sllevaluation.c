#include<stdio.h>

struct node
{
    char owner[20];
    int number;
    int vehicle_num;
    char city_of_passing[20];
    struct node *next;

};
struct node *head,*newnode;
struct node*insert_at_end(struct node *newnode);
void search(struct node*head);
int count_node(struct node*head);
void display(struct node*head);
 main()
{
    struct node*newnode;
    int op,c;
   struct node *head=NULL;


    while(1)
    {   printf("\n");
        printf("1 -- enter data of driver\n");
        printf("2 -- count the number of vehicle crossed\n");
        printf("3 -- search the vehicle\n");
        printf("4 -- display the list \n");
        printf("5-- exit\n");
        printf("enter option\n");
        scanf("%d",&op);
        printf("\n");
        switch(op)
        {
        case 1:
            newnode = (struct node*)malloc(sizeof(struct node));
            printf("enter the owners name  : ");
            scanf("%s",&newnode->owner);
              printf("enter the mobile number  : ");
            scanf("%d",&newnode->number);
              printf("enter the vehicle number  :  ");
            scanf("%d",&newnode->vehicle_num);
              printf("enter the city of passing  :  ");
            scanf("%s",newnode->city_of_passing);

            head=insert_at_end(newnode);
            break;
        case 2 : c = count_node(head);
            printf("number of vehicle crossed = %d\n",c);
            break;
        case 3 :
             search(head);
            break;
        case 4:
            display(head);
            break;
        case 5 :exit(0);
        break;
        default :printf("invalid choice\n");
}

}
}

struct node*insert_at_end(struct node *newnode)
{
    struct node *temp;
//struct node*head=NULL;
    if(head == NULL)
    {
        head=newnode;
        head->next== NULL;
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
    printf("\n");
}

void display(struct node*head)
{
    struct node*temp;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf(" owner name :  %s\n",temp->owner);
            printf("mobile number : %d\n",temp->number);
            printf("vehicle number : %d\n",temp->vehicle_num);
            printf("city of passing : %s\n",temp->city_of_passing);
            temp=temp->next;
        }
      printf("\n");
    }
}
int count_node(struct node*head)
{
    int m=0;
    struct node*temp;
    if(head==NULL)

    {
        return m;
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            m++;
            temp=temp->next;
        }
        return m;
    }
}
void search(struct node*head)
{
    int a;
    printf("enter number to search\n");
    scanf("%d",&a);
    struct node*temp;
    if (head==NULL)
    {
        printf("list empty\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            if(temp->vehicle_num == a)
            {
            printf(" owner name :  %s\n",temp->owner);
            printf("mobile number : %d\n",temp->number);
            printf("vehicle number : %d\n",temp->vehicle_num);
            printf("city of passing : %s\n",temp->city_of_passing);
            }
            temp=temp->next;
        }
    }


}

