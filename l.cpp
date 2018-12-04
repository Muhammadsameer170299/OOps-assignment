#include<iostream>
using namespace std;

#include "l.h"
#include "c.h"

linklist ::	linklist()
	{
		head=NULL;
	}

void linklist :: insertatstart (complex b)

{
	node*n=new node;
	n->ptr=head;
	head=n;
	n->c=b;
}

void linklist :: insertatend ( complex b)
  {
    node *pre=new node;
    node *cur=new node;
    node *temp=new node;
    cur=head;
    while(cur!=NULL)
    {
      pre=cur;
      cur=cur->ptr;
    }
    
	temp->c=b;
    pre->ptr=temp;	
    temp->ptr=cur;
  }
  
void linklist::deleteatgivenposition (int l)
{
	node*c=head;
	node*p=head;
	for(int i=1;i<=l-1;i++)
	{    p=c;
		c=c->ptr;
	}
	p->ptr=c->ptr;
	delete c;
}
void linklist:: insertatgivenposition (int x,complex b)
{
	node *temp=head;
	
	for(int i=1;i<x-1;i++)
	{
		temp=temp->ptr;
	}

	node*n=new node;
	n->ptr=temp->ptr;
	temp->ptr=n;
	
	n->c=b;
}

void linklist :: valueatposition (int a)
{
	node *g = head;
	for(int i=1;i<a;i++)
	{          g=g->ptr;
	   	     
	}
	g->c.showdata();
	
	
	
}


void linklist :: display ()
{
	node* temp=head;

	while(temp!= NULL)
	{
		temp->c.showdata();
		temp = temp->ptr;
	}
}
	

void linklist ::deleteatstart ()
{ 
	node*temp=head->ptr;
	delete head;
	head=temp;
}
