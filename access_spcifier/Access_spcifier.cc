#include<iostream>
using namespace std;
class cBase
{
	int m_iNO1;

	public:
		
			int m_iNO2;    //int m_iNO1,int m_iNO2.int m_iNO3 :allow as accssible in same class
		
       protected:
		
			int m_iNO3;
			
		        void fun()
			{
				cout<<"In Fun";
			}
	public:
		void display()
			{
				cout<<"m_iNO1"<<endl;//allow as accessible for in same class
				cout<<"m_iNO2"<<endl;
				cout<<"m_iNO3"<<endl;
			}
};
class cDerivde:cBase
{
	public:
			void display()
			{		
				
				cout<<"m_iNO1"<<endl;//Error as private in base
				cout<<"m_iNO2"<<endl;//allow as public in base
				cout<<"m_iNO3"<<endl;//allow protected in base
			}
};

int main()
{
	cBase bobj;
	cDerivde dobj;
    
    
		cout<<"dobj.m_iNO1"<<endl;//Error as private in base
		cout<<"bobj.m_iNO2"<<endl;//allow as public in base
		cout<<"bobj.m_iNO3"<<endl;//error protected in base

                bobj.display();//allow base class in public in 
               // dobj.fun();
		dobj.display();//allow public in derivde class
 
		return 0;
}
