#include<iostream>
using namespace std;
class cDemo
{
	int M_iNo1;
	mutable int M_iNo2;
	public:
		void fun()const//mutable keyword jar lavlo tr const deta member chi pn value change hote
		{
       //   M_iNo1++;
		  M_iNo2++;
		}
        void display()
		{
          cout<<M_iNo1<<M_iNo2;
		}
};
int main ()
{
 cDemo obj;
  obj.fun();
  obj.display();
  return 0;

}
