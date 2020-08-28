//function redefination

#include<iostream>
using namespace std;
class cBase
{
   public:
		void fun1()
		{
		  cout<<"cBase fun1 0para "<<endl;
		}
		void fun2()
		{
			cout<<"cBase fun2 0para"<<endl;
		}
};
class cDerived :public cBase
{
  public:
		void fun1()
		{
			cout<<"cDerived fun1 0para"<<endl;
		}
};
	int main()
{
     cBase bobj;
	 cDerived dobj;
	
	bobj.fun1();//cBase fun1 0para
	bobj.fun2();//cBase fun2 0para
	dobj.fun1();//cDerived fun1 0para
    dobj.fun2();//fuction refination zal eth  :cBase fun2 0para 
}

//if derived class such function which paresnt in base class with same same prototype then its function redefination
