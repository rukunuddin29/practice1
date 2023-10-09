
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data; //member variable
	struct node *next; //member variable
};  //self referencing structure
struct node *start=NULL;
struct node *new_node,*temp;

void insert_end()
{
	new_node=(struct node*)malloc(1*sizeof(struct node));
	printf("\n Enter the value of new node");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
		start=new_node;
	else
	{
		temp=start;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=new_node;
	}
	
}

void create_list()
{
	char ch='y';
	int n,c=1,pos;
	while(ch=='Y'||ch=='y')
	{
		insert_end();
		printf("want to create another node?");
		scanf(" %c",&ch);
	}
}
void insert_begin()
{
	printf("\n Inserting a node at begining of the list");
	new_node=(struct node*)malloc(1*sizeof(struct node));
	printf("\n Enter the value of new node");
	scanf("%d",&new_node->data);
	new_node->next=start;
	start=new_node;
}
void display() 
{
	temp=start;
	while(temp!=NULL)
	{
		printf("%d----->",(*temp).data);
		temp=temp->next;
	}
	printf("NULL");	
	
}

int count()
{
	int c=0;
	temp=start;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
void insert_pos()
{
	//printf("\n The no of nodes=%d",count());
	int pos,n,c=1;
	n=count();
	printf("\n Enter postion where you want to insert");
	scanf("%d",&pos);
	if(pos==1)
		//insert at begining
		insert_begin();
	else if(pos==n+1)
		insert_end();
		//insert at end
	else if(pos>n+1)
		printf("\n Invalid position");
	else
	{
		temp=start;
		while(c<pos-1)
		{
			temp=temp->next;
			c++;		
		}
		new_node=(struct node*)malloc(1*sizeof(struct node));
		printf("\n Enter the value of new node");
		scanf("%d",&new_node->data);
		new_node->next=temp->next;
		temp->next=new_node;
	}
}
int main()
{
	int ch;
	printf("1.Create List\n2.Display List\n3.Insert Begin\n4.Insert End\n5.Insert Position\n6.Exit");
	while(1)
	{
		printf("\n Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					create_list();
					break;
			case 2:
					display();
					break;
			case 3:
					insert_begin();
					break;
			case 4:
					insert_end();
					break;
			case 5:
					insert_pos();
					break;
			case 6:
					exit(1);
					break;
					
		}
	}

	return 0;
}

