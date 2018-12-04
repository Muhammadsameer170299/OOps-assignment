
#include <iostream>
using namespace std;
#include "c.h"
#include "l.h"

int main()
{
	int s=0;
	
complex z1,z2,z3,z4;
z1.setdata(-3,5);
z2.setdata(-1,-3);
z3.setdata(-1,3);

z4=z1+z2;
complex z5=z1-z3;
complex z6=z1/z3;
complex z7=z2*z3;

linklist f;
	cout<<"the three numbers are"<<endl;

	f.insertatstart(z3);
	f.insertatstart(z2);
	f.insertatstart(z1);
		f.display();
	f.deleteatstart();
	f.deleteatstart();	
	f.deleteatstart();
	f.display();

	cout<<"Addition of first two numbers and the result is placed in first place"<<endl;
	f.insertatstart(z4);
	cout<<endl;
	
	f.display();
	cout<<endl;
	cout<<"subtraction of first and third number and storing it in last"<<endl;
	
f.insertatend(z5);
	    cout<<endl;
		
		f.display();
		cout<<endl;
	cout<<"multiplication of 2nd and third number and storing it in last"<<endl;
		f.insertatend(z7);
	cout<<endl;
		f.display(); 
		cout<<endl;
		cout<<"inserting at 4th position"<<endl;
		f.insertatgivenposition(4,z4);
	f.display();
	cout<<endl;
	cout<<"deleting at 4th position "<<endl;
		f.deleteatgivenposition(4);
	cout<<endl;
		f.display();
		cout<<endl;
		cout<<"placing the result of division at 4th position"<<endl;
	f.insertatend(z6);
	cout<<endl;
		f.display(); 
		cout<<endl;
		cout<<"at which position you want to find value"<<endl;
		cin>>s;
		cout<<endl;
		f.valueatposition(s);
		cout<<endl;
return 0;
}






		
		
