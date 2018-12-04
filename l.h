#ifndef link_H
#define link_H

#include "c.h"

#include<iostream>
using namespace std;

struct node
{   complex c;
	node*ptr;
};
class linklist 
{
private:
node *head;
public:
	linklist();
	
	void insertatstart (complex  );
	void deleteatstart ();
	void insertatend ( complex );
	void deleteatgivenposition (int );
	void insertatgivenposition (int ,complex );
	void display ();
	void valueatposition(int );

};
#endif
