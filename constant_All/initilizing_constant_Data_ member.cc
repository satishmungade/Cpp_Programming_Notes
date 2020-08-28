#include<iostream>
using namespace std;

/*
class cDemo
{
  const int iNo;
		int iNo2;
	public:
		cDemo():iNo(10),iNo2(20)//we can write non-const data member also in member initilizing list
	{
	
	}

   void display()
	{
		cout<<iNo<<iNo2;
    }
};

*/
class cDemo
{
  const int m_iNo;
		int m_iNo2;
	public:
			cDemo(int iNo):m_iNo(10),m_iNo2(20)//we con initilizing member prsent in initializting list by constrtour parameter also
			{
		
			}
    void display()
	       {
				cout<<m_iNo<<endl<<m_iNo2;
   		  }
};
int main()
{
   cDemo obj(10);
   obj.display();
   return 0;
}
					
