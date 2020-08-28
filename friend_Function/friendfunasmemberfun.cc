
#include<iostream>
using namespace std;
class cDemo2
{
   public:
	void fun4();
	void fun5();
};
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
  friend void cDemo2::fun5();//declear as frined functin member function as friend 
  friend void cDemo2::fun4();
};

   void cDemo2::fun4() // member function madhun varche obj1 cya member funcatin la use kart ahe
	{
      cDemo1 obj1;
	  obj1.fun1();
      obj1.fun2();
      obj1.fun3();
	}
   void cDemo2::fun5()//member function madhun varche obj1 cya member funcatin la use kart ahe

	{
      cDemo1 obj1;
		
	   obj1.fun1();
       obj1.fun2();
       obj1.fun3();

	}

int main()
{
	  cDemo2 obj2;
		obj2.fun4();
		obj2.fun5();
	return 0;
}	
