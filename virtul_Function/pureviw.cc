#include<iostream>
using namespace std;
class cBase
{
	virtual void fun ()=0;
};
void cBase ::void fun();
{
  cout<<"parshally "<<endl;
}
class cDerived : public cBase
{
  public:
 		void fun1()
		{
			cout<<"in derived fun1"<<endl;
			cBase::fun1();
		}
};
int main()
{
 // cBase bobj;
  cDerived dobj;
 cBase->&dobj;
BP->fun1 ();
return 0;
}
