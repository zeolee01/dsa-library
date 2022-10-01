#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void lltraversal(struct node *ptr)
{
	while(ptr != NULL)
	{
	printf("%d\n",ptr->data);
	ptr = ptr->next;	
	}

}
struct node* delFirst(struct node *head)
{
	head = head->next;
	return head;
}

struct node* delEnd(struct node *head)
{
	struct node *p = head,*ptr = head;
	int count=0,i=0;
	while(p->next != NULL)
	{
		p = p->next;
		count++;
	}
	for(i=0;i<count-1;i++)
	{
		ptr = ptr->next;
	}
	ptr->next = NULL;
	
	return head;
}

struct node* delIndex(struct node *head,int index)
{
	struct node *p = head;
	struct node *ptr = head;
	int i=0,j=0;
	while (i < index)
	{
		p = p->next;
		i++;
	}
	while (j<index-1)
	{
		ptr = ptr->next;
		j++;
	}
	ptr->next = p->next;
	return head;
}

void main()
{
	struct node *head;
	struct node *second;
	struct node *third,*fourth;
    int inp;
	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));
	head->data = 25;
	head->next = second;
	second->data = 29;
	second->next = third;
	third->data = 27;
	third->next = fourth;
	fourth->data=28;
	fourth->next=NULL;
	printf("Linked list without deletion\n");
	lltraversal(head);	 
    do
    {
        printf("Enter:-\n1 to delete\n2 to display\n0 to exit\n");
        scanf("%d",&inp);
        if(inp==1)
        {
            int choice;
            printf("Enter 1 to delete at head 2 to delete at end and 3 to delete at index\n");
            scanf("%d",&choice);
            if (choice ==1)
            {
                head = delFirst(head);
            }
            else if(choice == 2)
            {
                head = delEnd(head);
            }
            else if(choice == 3)
            {
                int i;
                printf("Enter the index\n");
                scanf("%d",&i);
                head = delIndex(head,i);
            }
        }
        else if(inp==2)
        {
            lltraversal(head);
        }           
    }while(inp != 0);
}
