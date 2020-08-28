#include<iostream>
using namespace std;

template<typename T>
void fun1(T tNo)
{
	cout<<"Size of T is\n"<<sizeof(T);
	if(1==sizeof(T))
		throw tNo;
	else(4==sizeof(T));
		throw tNo;
	cout<<"Exception not found";
}
int main()
{
	try
	{
		fun1(12);
	}
	catch(...)
	{
		cout<<"exception found";
	}
	return 0;
}
