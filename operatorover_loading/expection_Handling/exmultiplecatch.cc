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
		fun1(10.2f);
		fun1('A');
	}
	catch(int exception)
	{
		cout<<"Interger exception found"<<endl;
	}
	catch(float exception)
	{
		cout<<"float exception found"<<endl;
	}
	catch (char exception0)
	{
		cout<<"char exception found"<<endl;
	}
    return 0;

}
