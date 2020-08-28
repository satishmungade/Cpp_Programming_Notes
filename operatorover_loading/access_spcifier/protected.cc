#include<iostream>
using namespace std;
//  is server side
class cBase
{
	int m_Bpri;
		public:
				int m_Bpub;
		protected:
				int m_Bpro;
		public:
				void fun()
				{
				   	m_Bpri=10;
					cout<<m_Bpri<<endl;

					m_Bpub=20;
					cout<<m_Bpub<<endl;

					m_Bpro=30;
					cout<<m_Bpro<<endl;
					
				}
};
class cDerivde :protected cBase
{
	int m_Dpri;
		public:
				int m_Dpub;
		protected:
				int m_Dpro;
		public:
				void fun()
				{
					//m_Bpri=10; 
					//cout<<m_Bpri<<endl;

					m_Bpub=20;
   					cout<<m_Bpub<<endl;

					m_Bpro=30; 
					cout<<m_Bpro<<endl;

					m_Dpri=40; 
					cout<<m_Dpri<<endl;

					m_Dpub=50; 
					cout<<m_Dpub<<endl;

					m_Dpro=60; 
					cout<<m_Dpro<<endl;
					
				}
};

// main  is clint side

int main()
{
	cBase bobj;
	
	cDerivde dobj;
   
    
   
    bobj.fun();
	dobj.fun();
	

	//bobj.m_Bpri=10; 
    //bobj.m_Bpro=30;
    bobj.m_Bpub=20;
    cout<< bobj.m_Bpub<<endl;
	

	bobj.m_Bpub=40;

    //dobj.m_Dpri=50;
	//dobj.m_Dpro=60;
    dobj.m_Dpub=70;
	cout<<dobj.m_Dpub<<endl;

	//dobj.m_Dpri=80;
	//dobj.m_Dpro=90;  
	dobj.m_Dpub=100;
    cout<<dobj.m_Dpub<<endl;
}

