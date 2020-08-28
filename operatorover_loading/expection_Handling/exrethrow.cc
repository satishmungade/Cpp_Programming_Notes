#include<iostream>
using namespace std;

template<typename T>
void fun1(T tNo)
{
	cout<<"Size of T is\n"<<sizeof(T);
	try
	{
	
		if(1==sizeof(T))
			throw tNo;
		else(4==sizeof(T));
			throw tNo;
	}
	catch(...)
	{
		cout<<"Exception rethrow";
	}	
//	cout<<"exception not found"<<endl;
}
int main()
{
	try
	{
		fun1('f');
	}
	catch(int exception)
	{
		cout<<"Integer found"<<endl;
	}
	catch(char exception)
	{
		cout<<"char found"<<endl;
	}
	catch(float exception)
	{
		cout<<"float found"<<endl;
	}
		return 0;
}
