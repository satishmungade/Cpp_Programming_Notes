#include<iostream>
using namespace std;
class cDemo
{
			int m_iNo1;
			int m_iNo2;
		  

    public:
	   	 cDemo()
			{
				m_iNo1=m_iNo2=0;
				cout<<"in default constructor"<<endl;
			}

		cDemo(int iNo)
			{
				m_iNo1=m_iNo2=iNo;
				cout<<"in parameter constructor one"<<endl;
			}

		cDemo(int iNo1,int iNo2)
			{
				m_iNo1=iNo1;
				m_iNo2=iNo2;
				cout<<"parameter constructor two"<<endl;
			}

	/*	cDemo(cDemo&refobj,int iNo)
			{
				m_iNo1=refobj.m_iNo1+iNo;
				m_iNo2=refobj.m_iNo2+iNo;
				cout<<"copy constructor two"<<endl;
			}
*/
       cDemo(cDemo&refobj,int m_iNo1)
			{
				m_iNo1=refobj.m_iNo1+m_iNo1;
				m_iNo2=refobj.m_iNo2+m_iNo2;
				cout<<"copy constructor third"<<endl;
			}
};

int main()
{
  cDemo obj1;
  cDemo obj2(10);
  cDemo obj3(20,30);
  cDemo obj4(obj3);
  cDemo obj5(obj4,40);
  //cDemo obj6(obj5);
}
				
				
				
			
