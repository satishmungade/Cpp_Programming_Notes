//what is need of function overriding ????
#include<iostream>
using namespace std;
class cBase
{
	int M_iNo1;
	int M_iNo2;
	public:
		void fun1()
		{
			cout<<"in base fun1"<<endl;
		}
		virtual void fun2()
		{
			cout<<"in cBase fun2"<<endl;
		}
		virtual void fun3()
		{
			cout<<"in Cbase fun3"<<endl;
		}
                void fun4()
		{
			cout<<"in Cbase fun4"<<endl;
		}
};
class cDerived:public cBase
{
	int M_iNo1;
	int M_iNo2;
	public:
		void fun1()
		{
			cout<<"cDerived fun1"<<endl;
		}
		void fun3()
		{
			cout<<"cDerived fun3"<<endl;
		}
		virtual void fun5()
		{
      		cout<<"cDerived fun5"<<endl;
		}
		void fun6()
		{
			cout<<"in cDerived fun6"<<endl;
		}
		
};
int main()
{
	cBase bobj;
	cDerived dobj;

	

  cBase *BP=NULL;
  cDerived *DP=NULL;

	bobj.fun1();
    bobj.fun2();
    bobj.fun3();
    bobj.fun4();
    //bobj.fun5();/// thise to is not paresent in cBase class
    //bobj.fun6();
  
    dobj.fun1();
    dobj.fun2();
    dobj.fun3();
    dobj.fun4();
    dobj.fun5();
    dobj.fun6();
  
    BP=&bobj;//upcasting   upcasting   manje varcha class khalch class madhe yen

    BP->fun1();
	BP->fun2();
	BP->fun3();
	BP->fun4();
	//BP->fun5();
	//BP->fun6(); //this is not paresent cBase class


   DP=&dobj;

   DP->fun1();
	DP->fun2();
	DP->fun3();
	DP->fun4();
	DP->fun5(); 
	DP->fun6();
    
    //DP->bobj;// error downcasting

    cBase &bref=dobj;// upcating 

	bref.fun1();
    bref.fun2();
    bref.fun3();
    bref.fun4();
   // bref.fun5();
    //bref.fun6();
   
   	cout<<sizeof(bobj)<<endl<<sizeof(dobj)<<endl; 
 /*    bobj=8 dobj=8 virtual size is =8 becouse this pc 64bite os so size  of virual keyword 8 total size is 24
     virtual is like pointer and pointer size depened operating system bite 64bite=8,32bit=4 16bite=2 
     and  */
    return 0;

}
