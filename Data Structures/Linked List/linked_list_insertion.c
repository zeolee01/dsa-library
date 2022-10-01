#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void lltraversal(struct node *ptr)
{
    printf("Elements:-\n");
	while(ptr != NULL)
	{
        if(ptr->data == 0)
        {
            ptr = ptr->next;
        }
        else
        {
	        printf("%d\n",ptr->data);
	        ptr = ptr->next;
        }
	
	}
}
struct node* insertFirst(struct node *head,int data)
{
	struct node *ptr = (struct node *)malloc(sizeof(int));
	ptr->next = head;
	ptr->data = data;
    return ptr;
}

struct node* insertEnd(struct node *head,int data)
{
	struct node *ptr = (struct node *)malloc(sizeof(int));
	ptr->data = data;
	struct node *p = head;
	
	while(p->next != NULL)
	{
		p = p->next;
	}
	p->next = ptr;
	ptr->next = NULL;
	return head;
}
struct node* insertIndex(struct node *head,int data,int index)
{
    struct node* ptr = head;
    int c=0;
    while(ptr->next !=NULL)
    {
        ptr = ptr->next;
        c++;
    }
    if (index>c)
    {
        printf("Index out of range\n");
    }
    else
    {
	struct node *ptr = (struct node *)malloc(sizeof(int));
	struct node *p = head;
	int i=0;
	while (i != index-1)
	{
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
    }
	return head;
}
void main()
{
	struct node *head;
    int inp,c=0;
	head = (struct node *)malloc(sizeof(struct node));
    head->data=0;
	head->next = NULL;
    do
    {
    printf("Enter:-\n1 to insert\n2 to display\n0 to exit\n");
    scanf("%d",&inp);
    if (inp==1)
    {
        if (c==0)
        {
            int e;
            printf("Enter the element\n");
            scanf("%d",&e);
            head = insertEnd(head,e);
            c++;   
        }
        else
        {
            int choice;
            printf("Enter 1 to insert at head 2 to insert at end and 3 to insert at index\n");
            scanf("%d",&choice);
            if (choice==1)
            {
                int e;
                printf("Enter the element\n");
                scanf("%d",&e);
                head = insertFirst(head,e);
            }
            else if(choice==3)
            {
                int e,i;
                printf("Enter the element and index\n");
                scanf("%d%d",&e,&i);
                head = insertIndex(head,e,i);
            }
            else if(choice == 2)
            {
                int e;
                printf("Enter the element\n");
                scanf("%d",&e);
                head = insertEnd(head,e);
            }
        }
    }
    else if(inp==2)
    {
        lltraversal(head);
    }
    }while(inp != 0);
}
