//what is need of function overriding ????
#include<iostream>
using namespace std;
class cBase
{
	public:
		void fun1()
		{
			cout<<"in base fun1"<<endl;
		}
};
class cDerived:public cBase
{
	public:
		void fun1()
		{
			cout<<"in cDerived fun1"<<endl;
		}
		void fun2()
		{
			cout<<"in Cderived fun2"<<endl;
		}
};
  int main()
{
   cBase bobj;
   cDerived dobj;

  cBase *BP=&dobj; is allow becouse upcasting tyachi najar atta base yevth ahe so derived madhe kasa bagel   
   BP->fun1();
  //BP->fun2();
  return 0;
}
   		

