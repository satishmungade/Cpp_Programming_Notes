#include<iostream>
using namespace std;
class cBase
{
  public:
		static int iNo1;
		 int iNo2;
			
		cBase ()
		{
          iNo2=20;
		}
};
int cBase::iNo1=10;

class cDerived: public cBase
{

};

int main()
{
    cBase bobj;
    cDerived dobj;
  
cout<<sizeof(cBase)<<endl<<sizeof(bobj)<<endl;//4,4
cout<<sizeof(cDerived)<<endl<<sizeof(dobj)<<endl;//4,4

cout<<endl;

cout<<bobj.iNo1<<endl;//10
cout<<bobj.iNo2<<endl;//20
cout<<dobj.iNo1<<endl;//10
cout<<dobj.iNo2<<endl;//20

cout<<endl;

cout<<cBase::iNo1<<endl<<cDerived::iNo1<<endl;//10,10

dobj.iNo1++;//10
dobj.iNo2++;//20

cout<<endl;

cout<<bobj.iNo1<<endl<<bobj.iNo2<<endl;//11,20
cout<<endl;

cout<<dobj.iNo1<<endl<<dobj.iNo2<<endl;//11,21
cout<<cBase::iNo1<<endl<<cDerived::iNo1<<endl;//11,11

return 0;
}	
