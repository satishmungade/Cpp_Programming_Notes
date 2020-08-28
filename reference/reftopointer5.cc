#include<iostream>
using namespace std;
int main()
{  /* //reference to pointer chalte 
	int iNo=10;
	int *pPtr=&iNo;
	int*(ref)=pPtr;
	
   cout<<pPtr;
	cout<<*ref;*/
  
	int iNo=10;
	int &ref=iNo;
	int *pPtr=&ref;   //pointer to reference pn chalte but ek ch pointer asl tr chalte manjech samhuh parvadt nhi pn ek chalte 
	cout<<*pPtr;
//	cout<<*ref;
	




 return 0;
}
