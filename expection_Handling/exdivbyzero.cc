#include<iostream>
using namespace std;
int main()
{
	int iNum,iDen,iAns;
	cout<<"enter the Number and Denonter\t";
	cin>>iNum>>iDen;
	try
	{
		if(0==iDen)
			throw iDen;
		else
			iAns=iNum/iDen;
	}
	catch(int exception )
	{
		cout<<"exception found\t"<<exception<<endl;
		return 0;
	}
	
	cout<<"exception not found\t"<<endl;
	cout<<"Ans\t"<<iAns;
    return 0;
}
