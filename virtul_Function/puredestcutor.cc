#include<iostream>
using namespace std;
class cBase

{
    int M_iNo1;
	public:

	
};
class cDerived:public cBase
{
  int *pPtr;
  public:
	cDerived()
	{
		cout<<"in Derived constructor"<<endl;
  		pPtr=(int *)malloc(10000);
	}
	virtual ~cDerived=0
	{
		cout<<"dest destructor"<<endl;
		free(pPtr);
	}
};
int main()
{
  cDerived *BP=NULL;
  
  BP=new cDerived;
  delete BP;
}
 
