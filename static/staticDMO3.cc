#include<iostream>
using namespace std;
class outer
{
  public:
       class inner
		{
		  public:
			static int iNo1;
	    };
};
int outer::inner::iNo1=20; //we can initilizing inner class  static data member
int main()
{
  outer obj;
  cout<<outer::inner::iNo1; //we can access inner class static iNo1 value
  
  return 0;
}

/*

////////////////////////////static Data member in class 
mense class written inside function in local class static data member is not allowod become we member is not allowed become we con note define itoutside the function

void fun()]
{
   class cDemo
    {
		public:
			static int iNo;
	}
}
we can not define here as classname  is not Assessible here


*/
