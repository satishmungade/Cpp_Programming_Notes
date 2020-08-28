#include<iostream>
using namespace std;
/*//call by value program
void fun(int);
int main()
{ 
	int iNo=10;
	cout<<iNo<<endl;//10
	fun(iNo);       //call by value
	cout<<iNo<<endl;//10//changes are not refeclted 
	return 0;
}
void fun(int iNo)
{
   cout<<iNo<<endl;//10
  iNo++;
  cout<<iNo<<endl;//11
} */


	
/* //call by address
void fun(int *p );
int main()
{ 
	int iNo=10;
	cout<<iNo<<endl;//10
	fun(&iNo) ;      //call by address  
	cout<<iNo<<endl; //11 changes are refelacted
	return 0;
}
void fun(int *p)
{
   cout<<*p<<endl;//10
  (*p)++;
  cout<<*p<<endl;//11
}

*/

//call by referenece 

void fun(int &);
int main()
{ 
	int iNo=10;
	cout<<iNo<<endl;//10
	fun(iNo);       //call by referenece 
	cout<<iNo<<endl;//11//changes are  refeclted 
	return 0;
}
void fun(int &ref)
{
   cout<<ref<<endl;//10
   ref++;
  cout<<ref<<endl;//11
}
		
