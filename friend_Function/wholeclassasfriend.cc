#include<iostream>
using namespace std;
class cDemo1
{
  
  	void fun1()
	{
		cout<<"in private fun1"<<endl;
	}
	public:
	void fun2()
	{
		cout<<"in piblic fun2"<<endl;
	}
	protected:
	void fun3()
	{
		cout<<"in protected fun3"<<endl;
	}
    friend class cDemo2;//whole class as friend without obj1 call obj2 madhin call kelo
};
class cDemo2
{
 	public:
	   void fun4()  //yaa ,madun varche obj1 function call kele
	{
		cDemo1 obj1;
		obj1.fun1();
		obj1.fun2();
		obj1.fun3();
	}
      void fun5() //yaa ,madun varche obj1 function call kele
	{
		cDemo1 obj1;
		obj1.fun1();
		obj1.fun2();
		obj1.fun3();
	}
};
int main()
{
   
	cDemo2 obj2;
    obj2.fun4();
    obj2.fun5();
} 
