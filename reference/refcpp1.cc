#include<iostream>
using namespace std;
int main()
{	
	int iNo1=10;
	int &refiNo2=iNo1;
	cout<<iNo1<<endl<<refiNo2<<endl;
	cout<<&iNo1<<endl<<refiNo2<<endl      ;
    return 0;

}
// reference is just the anather name give for particular memory  
  // &ref asla tr to LHS la lagto 
  // RHS (int *p=&iNo; )asla tr to &address operand asto
