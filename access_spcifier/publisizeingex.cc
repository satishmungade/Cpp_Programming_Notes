#include<iostream>
using namespace std;
class cBase
{
		int m_Bpri;
	public:

		int m_Bpub;

	protected:

		int m_Bpro;
	public:

		void fun1()
		{
			cout<<"In Base fun1"<<endl;
		}
	protected:

		void fun2()
		{
			cout<<"In base Fun2"<<endl;
		}

	private:
		void fun3()
		{
			cout<<"In Base Fun3"<<endl;
		}
	public:
		//placeholder to diffrantiate it form
		//above fun2 no any memory to
		//prameter will be allocate 
		void fun2(int)
		{
			cout<<"In base fun2 with placehloder"<<endl;
		}
};
class cDerived:private cBase  //we can write any access specifire
{
	public:
			 using cBase::fun1;//both are publicizing  fun2 & fun2
			 using cBase::fun2;
			// using cBase::fun3;//error private in CBase cont be publicizing 

			// using cBase::m_Bpri; //error,private in cBase cont be publicizing  
			 using cBase::m_Bpro;
			  cBase::m_Bpub;   // we can write without using but compiler are warning
};
int main()
{
  	cBase bobj;
	cDerived dobj;

	bobj.fun1();
	//bobj.fun2();//error bcoz fun2 is protected in cBase
	bobj.fun2(10);
	//bobj.fun3();//error bcoz fun3 is private in cBase

	//cout<<bobj.m_Bpri;// error private in CBase not publicizied  
	//cout<<bobj.m_Bpro;// error protected in CBase not publicizied  
	cout<<bobj.m_Bpub;


    dobj.fun1(); // allow as publicizied
	dobj.fun2(); //allow as publicizied
	dobj.fun2(10); //allow as publicizied
	//dobj.fun3(); //error not publicizied

	//cout<<"dobj.m_Bpri"<<endl;// error not publicizied
	cout<<"dobj.m_Bpro"<<endl; //allow as publicizied
	cout<<"dobj.m_Bpub"<<endl;//allow as publicizied


}
				
