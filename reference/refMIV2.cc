#include<iostream>
using namespace std;
int main()
{	
	int iNo1=10;
	int &ref1=iNo1;
	int &ref2=iNo1;
	int &ref3=iNo1;
   
	cout<<iNo1<<endl<<ref1<<endl<<ref2<<endl<<ref3;
	cout<<&iNo1<<endl<<&ref1<<endl<<&ref2<<endl<<&ref3;
}

