#include<iostream>
using namespace std;
int main()
{	
	int iNo1=10;
	int &ref1=iNo1;
    int &ref2=ref1;
	int &ref3=ref2;
     
    cout<<iNo1<<endl<<ref1<<endl<<ref2<<endl<<ref3<<endl;
	cout<<"ADDRESS"<<endl;
	cout<<&iNo1<<endl<<&ref1<<endl<<&ref2<<endl<<&ref3<<endl;
  return 0;
}
