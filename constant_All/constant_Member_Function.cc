#include<iostream>
using namespace std;
class cDemo
{
	int M_iNo1;
	const int M_iNo2;

	public:cDemo():M_iNo1(10),M_iNo2(20)
	{
	
	}
	void fun1() //internal form (cDemo * const this)
	{
		M_iNo1 ++;
		//M_iNo2 ++;//error becoz const data member 
	}
	void fun2()const //internal form (cDemo const *const this
	{
		//M_iNo1 ++; error constant member function 
		//M_iNo2 ++;
	}
	void display ()
	{
		cout<<M_iNo1<<M_iNo2;
	}
};

int main()
{

	cDemo obj;
	obj.fun1();
	obj.fun2();// object tr non constant asel tr chalte
	obj.display();
	return 0;
}
