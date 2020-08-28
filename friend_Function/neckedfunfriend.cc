//necked function as friend 
#include<iostream>
using namespace std;
class cDemo
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
    friend void fun4();   //necked functin declration 
};
void fun4()
{
   cDemo obj;
  obj.fun1();
  obj.fun2();
  obj.fun3();   //Allowed becouse fun4 is friend necked function of obj manject obj sangt ahe fun4 ha cDemo ch  friend ahe munun sangt ahe mnun tyla tiith (cDemo )saglch access ahe  
}

void fun5()
{
  cDemo obj;
  //obj.fun1();//error becouse private
  obj.fun2();   //allwed becouse public
  // obj.fun3();//error becouse protected
}
int main()
{
   fun4();
   fun5();
}
