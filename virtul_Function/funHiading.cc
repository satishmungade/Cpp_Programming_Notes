#include<iostream>
using namespace std;
class cBase
{
	public:
		void fun()
		{
			cout<<"cBase fun1 0para"<<endl;
		}
};
class cDerived:  cBase
{ 
   public:
	void fun(int iNo)
	{
		cout<<"cDerived fun1 0para";
	}
};
int main()
{
  cBase bobj;
  cDerived dobj;

  bobj.fun();
  //bobj.fun(20);//not present in base class 
  //dobj.fun(); //function hiading
  dobj.fun(10);
  return 0;
}
