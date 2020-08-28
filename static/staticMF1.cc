#include<iostream>
using namespace std;
class cDemo
{
	int M_iNo1;
	static int iNo2;
    public:
		void fun1()
		{
			M_iNo1=10;
			cout<<M_iNo1;

		 	iNo2=20;
			cout<<iNo2;

			this->M_iNo1=30;
                        cout<<M_iNo1;

			this->iNo2=40;
			cout<<iNo2<<endl;
		}
	        static void fun2()
		{
			//iNo1=10;//error non static 
			iNo2=20;
			cout<<iNo2;
			//this->iNo1=30;//error non static
			//this->iNo2=40;//error non static tyla this ch nahi
		}
                void fun3() const
		{
				
	
		}
                 void fun4() const 
		{

		
		} 
};
int cDemo::iNo2=20;
int main()
{
	  cDemo obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();

	//cDemo::fun1();//error 
	cDemo::fun2();
	//cDemo::fun3();//error non const
  
	//cDemo::iNo2=10;// error as private 
}




		
