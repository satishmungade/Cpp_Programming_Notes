#include<iostream>
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
int main()
{
	try
	{
		fun(5);
	}
	catch(...)
	{
		cout<<"exception found"<<endl;
	}
	return 0;
}
/*
 if we call function as fun(10.2f) them internally unexception -
> internal -> call Aborted (core dumped)
we hence we can give above version set_unexpeatted call.
*/
