//accessable using class 
#include<iostream>
using namespace std;
class cDemo
{
	public:
			int iNo1;
			static int iNo2;
			cDemo ()
			{
				iNo1=10;
			}
};
 int cDemo::iNo2=20;
//static int cDemo::iNo1=10; //non static data member iNO1 we con't write this type &initilizing 
int main()
{
 	cout<<cDemo::iNo2;// accessable using class (Datamember) 
	//cout<<cDemo::iNo1=10;  //non static data member we con not access iNO1 
	cDemo obj;
	cout<<obj.iNo1;
	cout<<obj.iNo2;
	return 0;
}
