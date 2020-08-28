#include<iostream>
using namespace std;
class cDemo
{
	int M_iNo1;
	int M_iNo2;	
	
	public:
		cDemo()
		{
			M_iNo1=10;
			M_iNo2=20;
		}
	void fun1()
		{
			M_iNo1 ++;
			M_iNo2 ++;
			(this ->M_iNo1)++;
			(this ->M_iNo2)++;
		}
	
	void fun2() const 
	{
			//M_iNo1 ++;
			//M_iNo2 ++; 
			//(this ->M_iNo1)++;  //error constant member function 
	
			//(this ->M_iNo2)++;
		}

	void fun3(cDemo *const pPtr)const 
		{
			//M_iNo1 ++;
			//M_iNo2 ++;
			//(this ->M_iNo1)++;
			//(this ->M_iNo2)++;
			(pPtr ->M_iNo1)++;
			(pPtr ->M_iNo2)++;
		}
 	void display ()
		{
			cout<<M_iNo1<<M_iNo2;
		}
};
int main ()
{
  cDemo obj;
  obj.fun1();
  obj.fun2();
  obj.fun3(&obj); //caller object con't be change  internall fun (&obj,&obj) non const la point karto 
  obj.display();
  return 0;
} 
		

