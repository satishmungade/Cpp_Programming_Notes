#include<iostream>
using namespace std;
class cBase
{
		int M_iNo1;
		public:
				void fun1()
				{
					cout<<"cBase class  fun1"<<endl;
				}
				
				virtual void fun2()=0;
				
				virtual void fun3()
				{
					cout<<"Cbase fun3 with virtual"<<endl;
				}
				
				void fun4()
				{
					cout<<"Cbase class fun4"<<endl;
				}
				
				virtual void fun5()=0;
};
class cDerived1 :public cBase
{
			int M_iNo2;
			public:
					void fun1()
					{
						cout<<" cDerived 1 fun1 "<<endl;
					}

					void fun2()
					{
						cout<<" Derived1 fun2 virtual fun2"<<endl;
					}

					void fun3()
					{
						cout<<" cDerived1 fun3"<<endl;
					}

					virtual void fun6()
					{
						cout<<" class Derived 1 fun6"<<endl;
					}

					void fun7()
					{
						cout<<" class derived 1 fun7"<<endl;
				
					}

					virtual void fun8()=0;
					
};

class cDerived2:public cDerived1
{
		int M_iNo3;
		public:
				void fun5()
				{
					cout<<" Derived 2 fun5"<<endl;
				}
				void fun6()
				{
					cout<<" derived 2 fun6"<<endl;
				}
 				void fun8()
 				{
 					cout<<"derived 2 fun8"<<endl;
 				
				}
};
class cDerived3 : public cDerived2
{
		int M_iNo4;
		public:
				void fun7()
				{
					cout<<"derived 3 fun7"<<endl;
					
				}
				void fun8()
				{
					cout<<" derived 3 fun8"<<endl;
				}	
};
int main()
{
	  //cBase bobj;
	 // cDerived1 dobj1;

	  cDerived2 dobj2;
	  cDerived3 dobj3;
	   
	   cBase *BP=NULL;
	   cDerived1 *DP=NULL;
	   
	   dobj2.fun1();
	   dobj2.fun2();
	   dobj2.fun3();
	   dobj2.fun4();
	   dobj2.fun5();
	   dobj2.fun6();
	   dobj2.fun7();
	   dobj2.fun8();
	   
	   
	   dobj3.fun1();
	   dobj3.fun2();
	   dobj3.fun3();
	   dobj3.fun4();
	   dobj3.fun5();
	   dobj3.fun6();
	   dobj3.fun7();
	   dobj3.fun8();
	   
	   
	   BP=&dobj2;
	   BP->fun1();
	   BP->fun2();
	   BP->fun3();
	   BP->fun4();
	   BP->fun5();
	  //BP->fun6();
	   //BP->fun7();
	   //BP->fun8();
	   
	   BP=&dobj3;
	   BP->fun1();
	   BP->fun2();
	   BP->fun3();
	   BP->fun4();
	   BP->fun5();
	  // BP->fun6();
	   //BP->fun7();
	   //BP->fun8();
	   
	   
	   DP=&dobj2;
	   DP->fun1();
	   DP->fun2();
	   DP->fun3();
	   DP->fun4();
	   DP->fun5();
	   DP->fun6();
	   DP->fun7();
	   DP->fun8();
	   
	   DP=&dobj3;
	   DP->fun1();
	   DP->fun2();
	   DP->fun3();
	   DP->fun4();
	   DP->fun5();
	   DP->fun6();
	   DP->fun7();
	   DP->fun8();
	   
	   cDerived2&ref=dobj3;
	   ref.fun1();
	   ref.fun2();
	   ref.fun3();
	   ref.fun4();
	   ref.fun5();
	   ref.fun6();
	   ref.fun7();
	   ref.fun8();
	   
	  // cout<<sizeof(bobj)<<endl;
	   //cout<<sizeof(dobj1)<<endl;
	 cout<<sizeof(dobj2)<<endl;
	 cout<<sizeof(dobj3)<<endl;
	  
	   
	  return 0;
}
