#include<iostream>
using namespace std;
class cDemo
{
	int M_iNo1;
    int M_iNo2;
	
	public:
		void fun1(int iNo1)
			{
				M_iNo1=iNo1;
				M_iNo2=iNo1;

               cout<<M_iNo1;
                cout<<M_iNo2<<endl;
			}
		void fun2(int M_iNo1)
			{
				M_iNo1=M_iNo1;
				M_iNo2=M_iNo1;

                cout<<M_iNo1;
				cout<<M_iNo2<<endl;	
			}
		void fun3(int M_iNo1)
			{
				this->M_iNo1=M_iNo1;
				      M_iNo2=M_iNo1;

 				cout<<M_iNo1;
				cout<<M_iNo2<<endl;
			}
		void fun4(int iNo)
			{
				(*this).M_iNo1=iNo;
				(*this).M_iNo2=iNo;

  				cout<<M_iNo1;
				cout<<M_iNo2<<endl;
			}
		cDemo fun5(int iNo)
			{
				M_iNo1=iNo;
				M_iNo2=iNo;

				cout<<M_iNo1;
				cout<<M_iNo2<<endl;
   
				return *this;
				

			}
		cDemo fun6(cDemo &refobj)
			{
				M_iNo1=refobj.M_iNo1;
				M_iNo2=refobj.M_iNo2;

				cout<<M_iNo1;
				cout<<M_iNo2<<endl;
				return refobj;
			}
};

int main()
{
  cDemo obj1,obj2,obj3,obj4,obj5,obj6,obj7;
  obj1.fun1(10);
  obj2.fun2(20);
  obj3.fun3(30);
  obj4.fun4(40);
  obj6=obj5.fun5(50);	
  obj7.fun6(obj6);
  return 0;
}


