#include<iostream>
using namespace std;
class cDemo
{
	public:
			int iNo1;
			static const int iNo2=20;//static & const both are combine we write so we con initilizing it
			//static int iNo=20; error we con not initilizing static data member bcoz class memory obj create kele natar milte  munn initilize kel nhi kart  //tya sadhi magche program check kr
			//const int iNo=20; error
			cDemo ()
			{
				iNo1=10;
			}
};
 
int main()
{
 	cout<<cDemo::iNo2;
    //cDemo::iNo2++;  we cont not incriment  const data member 
	cDemo obj;
	cout<<obj.iNo1;
return 0;
}

