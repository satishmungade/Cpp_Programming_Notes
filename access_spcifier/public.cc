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
					cout<<m_Bpro<<endl;
					
				}
};
class cDerivde :public cBase
{
	int m_Dpri;
		public:
				int m_Dpub;
		protected:
				int m_Dpro;
		public:
				void fun()
				{
					//m_Bpri=10; //cBase class is private can not be access
					//cout<<m_Bpri<<endl;

					m_Bpub=20;//cBase class is public so we can access
   					cout<<m_Bpub<<endl;

					m_Bpro=30; //cBase class is protected child can be access
					cout<<m_Bpro<<endl;

					m_Dpri=40; // allow 
					cout<<m_Dpri<<endl;

					m_Dpub=50; //allow
					cout<<m_Dpub<<endl;

					m_Dpro=60; //allow
					cout<<m_Dpro<<endl;
					
				}
};
// main class is clint
int main()
{
	cBase bobj;
	cDerivde dobj;
   
    bobj.fun();
	dobj.fun();
	

     //bobj.m_Bpri=10; //private member can not be access outsider class
    //bobj.m_Bpro=30;// protected member can not be access outsider class
    bobj.m_Bpub=20;
    cout<< bobj.m_Bpub<<endl;
	

     //bobj.m_Bpub=40;//this no declear

    //dobj.m_Dpri=50;// private member can not be access outsider class
	//dobj.m_Dpro=60;//protected member can not be access outsider class
    dobj.m_Dpub=70;
	cout<<dobj.m_Dpub<<endl;

	//dobj.m_Dpri=80;// private member can not be access outsider class
	//dobj.m_Dpro=90;//  protected member can not be access outsider class
	dobj.m_Dpub=100;
    cout<<dobj.m_Dpub<<endl;
}

