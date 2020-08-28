#include<iostream>
#include<exception>

using namespace std;

template<typename T>

void fun(T tNo) throw (int,char)
{
	cout<<"size of T is"<<sizeof(T)<<endl;
	if(1==sizeof(T))
		throw tNo;
	else if(4==sizeof(T))
		throw tNo;
	else
		cout<<"exception not found"<<endl;
}

#include<stdlib.h>

void my_unexcepected()
{
	cout<<"In my version my of unexcepted"<<endl;
	exit(10);
}
int main()
{
	my_unexcepected (my_unexcepected);
	try
	{
		fun(10);
	}
	catch(...)
	{
		cout<<"exception found"<<endl;
	}
	return 0;
}
