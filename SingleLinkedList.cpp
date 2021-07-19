#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *link;
};

int main()
{
struct node *head = (struct node *) malloc(sizeof(struct node *));
  cout<<"enter the first element of linked list";
  int item;
  cin>>item;
  //creating the head of the linked list...
  head->data = item;
  head->link = NULL;
  cout<<endl<<"enter the second element of the linked list...";
  struct node *current =(struct node *)  malloc(sizeof(struct node *));
  	  int item2;
  	  cin>>item2;
  	  current->data = item2;
  	  current->link = NULL;
  	  head->link = current;
  	  cout<<endl<<"enter the number of element you want to add in linked list...";
  	  int n;
  	  cin>>n;
  	  while(n--)
  	     {
  	     	struct node *temp =(struct node *)  malloc(sizeof(struct node *));
  	     	  int value;
  	     	  cin>>value;
  	     	  temp->data = value;
  	     	  temp->link = NULL;
  	     	  current->link = temp;
  	     	  current = temp;
		   }
	//print the linked list..
	cout<<endl;
	node* head1 = head;
	cout<<endl<<"before reversing the linked list is.."<<endl;
	while(head1 != NULL)
	  {
	  	cout<<head1->data<<" ";
	  	head1 = head1->link;
	  }  
	//reverse the linked list....
	node* prev = NULL;
	node* curr = head;
	node* next = NULL;
		 while(curr != NULL)
		    {
		    	next = curr->link;
		    	curr->link = prev;
		    	prev = curr;
		    	curr = next;
			  }
	cout<<endl<<"after reversing the linked list is....";		  
	cout<<endl;
	node* nprev = prev;		  
	while(prev != NULL)
	  {
	  	cout<<prev->data<<" ";
	  	prev = prev->link;
	  }  
	  
	  
	  
	  
//Middle element of the linked list............	  		  
cout<<endl<<"The middle element of our current reversed list is....";
  node* slow;
  node* fast;
  //because in our reversed list nprev is our new head of reversed linked list.....
  slow = nprev;
  fast = nprev;
  int count = 0;
  while((fast != NULL)&&(fast->link != NULL))
   {
   	  slow = slow->link;
   	  fast = fast->link->link;
   	   count++;
	}   
  while(count--)
   {
   	 nprev = nprev->link;
   }
  cout<<nprev->data;			    
	return 0;
}
