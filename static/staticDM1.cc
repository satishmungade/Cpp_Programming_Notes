//static data member shear between obj
#include<iostream>
using namespace std;
class cDemo
{
	public:
			static int iNo1;
			int iNo2;
			cDemo()
			{
				iNo2=20;
			}
};
int cDemo::iNo1=10;
int main()
{
  cDemo obj1,obj2;
  cout<<sizeof(obj1)<<endl;//4size
  cout<<sizeof(obj2)<<endl;//4size
  cout<<sizeof(cDemo)<<endl;//4size
  cout<<endl;
  cout<<obj1.iNo1<<endl;//10
  cout<<obj1.iNo2<<endl;//20
  cout<<endl;
  cout<<obj2.iNo1<<endl;//10
  cout<<obj2.iNo2<<endl;//20
  
   
  cout<<endl;

  cout<<obj1.iNo1++<<endl;//10
  cout<<obj2.iNo2++<<endl;//20

  cout<<endl;
 
  cout<<obj1.iNo1<<endl;//11
  cout<<obj1.iNo2<<endl;//20

  cout<<obj2.iNo1<<endl;//11
  cout<<obj2.iNo2<<endl;//21
 
  cout<<cDemo::iNo1;//11


  return 0;

}
