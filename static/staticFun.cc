#include<iostream>
using namespace std;
class cDemo
{
	public:
			cDemo()
			{
				cout<<"constructors"<<endl;
				//cout<<endl;
			}
			~cDemo()
			{
				cout<<"destructors"<<endl;
				//cout<<endl;
			}
};
			void fun1()
			{
				cout<<"IN Fun1"<<endl;
				cDemo obj;
				cout<<"leaving Fun1"<<endl;
				cout<<endl;
			}
			void fun2()
			{
				cout<<"IN Fun2"<<endl;
				static cDemo obj1;     //static madhe constructors pn ekdach class hot and destrctor pn ekdach call hoto
				cout<<"leaving Fun2"<<endl;
				cout<<endl;
			}
 
int main()
{  
   
 
    
         cout<<"IN Main"<<endl;
	int iCounter;
	cout<<"calling fun1 three Time"<<endl;
	for(iCounter=0;iCounter<3;iCounter++)
		fun1();
	
	cout<<"calling fun2 three time"<<endl;
	for(iCounter=0;iCounter<3;iCounter++)
	    fun2();		
	cout<<"leaving main"<<endl;
    return 0;
}

