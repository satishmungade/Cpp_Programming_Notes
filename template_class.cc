#include<iostream>
using namespace std;
   
int mymax(int iNo1,int iNo2)
{
	cout<<"narmal template fun1"<<endl;
	if(iNo1>iNo2)
		return iNo1;
	else
	 	return iNo2;
}

template<typename T>
T mymax(T tiNo1,T tiNo2)
{
	cout<<"IN Template fun2"<<endl;
	if(tiNo1>tiNo2)
		return tiNo1;
	else
		return tiNo2;
}

template<typename T>
T mymax(T tiNo1,T tiNo2 ,T tiNo3)
{
	cout<<"IN Template fun3"<<endl;
	if(tiNo1>tiNo2)
		return tiNo1;
	else
		return tiNo2;
}

int main()
{
	mymax(10,20,30);
	mymax(10,20); 
	mymax(20.25,52.20);
	mymax('A','B');
	mymax(20.25f,37.20f);
	mymax(20,'A');
	mymax <>(10,20);



    mymax <float>(20.25,20.5);
  // mymax(10,20,'A'); error: no matching function for call to ‘mymax(int, int, char)’
}
