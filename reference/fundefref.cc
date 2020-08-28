#include<iostream>
using namespace std;
class cBase
{
	public:
			void fun1()
			{
				cout<<"1 0para"<<endl;
			}

			void fun1(int iNo)
			{
				cout<<"1 1para"<<endl;
			}

				void fun2()
			{
				cout<<"2 0para"<<endl;
			}

			void fun2(int iNo)
			{
				cout<<"2 1para"<<endl;
			}

			void fun3()
			{
				cout<<"3 0para"<<"/n"<<endl;
				cout<<"-----"<<endl;
			}
};           
class cDerived: public cBase
{
	public:
				void fun1(int )
			{
				cout<<"1 1para"<<endl;
			}
			void fun2(int ,char )
			{
				cout<<"2 2para"<<endl;
			}
			void fun4()
			{
  				cout<<"4 0para"<<endl;
				cout<<"---"<<endl;
			}
};
int main()
{

   cBase bobj;
   cDerived dobj;
	bobj.fun1();
	bobj.fun1(10);
	bobj.fun2();
	bobj.fun2(20);
	bobj.fun3();
   
    //bobj.fun1(30);
    //bobj.fun2(40,50);
	//obj.fun4();//////thise three is not present in cBase class



     //dobj.fun1();  function hidden zal mul fun1(10)  karan hideen zal ahe
	dobj.fun1(10);
	//dobj.fun2();
	//dobj.fun2(20); fun2 hiaden zal fun2 (40,50); karan fun2 tithe 2parameter ahet mg to tyanch pahile wala hiad karto
	dobj.fun3();
   
   dobj.fun1(30);
    dobj.fun2(40,45);
	dobj.fun4(); 


/* !!!!!!!!!!!!!!!!!!! first read the line and check the code you will prof for hiaden or remove!!!!!!!!!!!!!!!!!!1
 in abave code if any now we able to call base class hiadden function thorwe derived class then why we are saying 'hiadden'why are not saying fuction gatting remove ?
----->>thise bcoz function are actual getting hiaden not remove
  */ 
	
	cBase *BP=&dobj;
     
    BP->fun1();
	BP->fun1(10);
	BP->fun2();
	BP->fun2(10);
	BP->fun3();
	

return 0;
}










    


