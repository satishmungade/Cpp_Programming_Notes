#include<iostream>
using namespace std;
// class is server
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
					cout<<m_Bpro<<"\tcBase fun End\n"<<endl;
					
				}
};
class cDerivde :private cBase
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
					cout<<m_Dpro<<"\tcDerivde fun End\n"<<endl;
					
				}
};

// main class is clint

int main()
{
	cBase bobj;
	cDerivde dobj;
   
        bobj.fun();
	dobj.fun();
	

	//bobj.m_Bpri=10; 
	//cout<<bobj.m_Bpri<<endl;

        //bobj.m_Bpro=30;
	//cout<<bobj.m_Bpro<<endl;

       bobj.m_Bpub=20;
       cout<< bobj.m_Bpub<<endl;
	

	

        //dobj.m_Dpri=50;
	//cout<<dobj.m_Dpri<<endl;

	//dobj.m_Dpro=60;
       //cout<<dobj.m_Dpro<<endl;

       dobj.m_Dpub=70;
	cout<<dobj.m_Dpub<<endl;

	//dobj.m_Dpri=80;
	//cout<<dobj.m_Dpri<<endl;

	//dobj.m_Dpro=90; 
	//cout<<dobj.m_Dpro<<endl; 

	dobj.m_Dpub=100;
    cout<<dobj.m_Dpub<<endl;
}

