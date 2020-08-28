#include<iostream>
using namespace std;
class cDemo
{
	  int M_iNo1;
	  int M_iNo2;
		public: 
		cDemo()
		{

		}
		void fun1()
		{
	
		}
		void fun2() const
		{
	
		}
		void fun3 (cDemo *pPtr)
		{
		
		}
		void fun4(cDemo const *pPtr)
		{
	
		}
};
  int main ()
{
  cDemo obj1;
  const cDemo obj2;
  
  obj1.fun1();
  obj1.fun2();
  //obj1.fun3(&obj1);
  //obj1.fun3(&obj2);
  //obj1.fun4(&obj1);
  //obj1.fun4(&obj2);


   //obj2.fun1();
   obj2.fun2();
   //obj2.fun3(&obj2);
   //obj2.fun4(&obj1);
   //obj2.fun4(&obj2);

  return 0;
}


