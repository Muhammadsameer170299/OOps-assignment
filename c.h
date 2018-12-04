#ifndef complex_H
#define complex_H

#include<iostream>
using namespace std;
class complex
{
private:
	int a, b;
public:

	void setdata (int x,int y);
	complex operator +(complex c);
	complex operator -(complex c);
	complex operator *(complex c);
	complex operator /(complex c);
	void showdata();

};
#endif
