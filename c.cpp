#include<iostream>
#include "c.h"
using namespace std;

void complex::setdata (int x,int y)
{
	a=x;
	b=y;
}
 
 
 
complex  complex::operator +(complex c)
{
	complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return temp;
}
 
 
complex complex:: operator -(complex c)
{
	complex temp;
	temp.a=a-c.a;
	temp.b=b-c.b;
	return temp;
}
complex  complex::operator *(complex c)
{
	complex temp;
	temp.a=(a*c.a)-(b*c.b);
	temp.b=(a*c.b)+(b*c.a);
	return temp;
}
complex  complex::operator /(complex c)
{
	complex temp;
	temp.a=((b*c.b)+(a*c.a))/((c.b*c.b)+(c.a*c.a));
	temp.b=((a*c.b)+(b*c.a))/((c.b*c.b)+(c.a*c.a));
	return temp;
}
	
void complex:: showdata ()
{
	if(b < 0){
		cout<<a  << b << endl;
	}
	else{
		cout<<a << "+" << b << endl;
	}
}
