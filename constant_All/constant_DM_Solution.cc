#include<iostream>
using namespace std;
/*class cDemo
{ 
  const int iNo=10;//error
  public:
       cDemo:
	{
               iNo=20;//error
	}
};

int main()   as lihal tr error ahe 
{
  cDemo obj;
  return 0;
 
}
 solution for const how to write
*/

class cDemo
{
   const int iNo;
   
	public: cDemo():iNo(10) //member initilization list 
	{
	
	}
        void display()
	{
		cout<<iNo;
        }
};
int main()
{
   cDemo obj;
   obj.display();
   return 0;
}
