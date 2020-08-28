#include<iostream>
using namespace std;
class cdemo 
{
	int iNo;
	public :
	cdemo()
	{
		iNo =20;
		cout<<"Constctor"<<endl;
	}
	~cdemo()
	{
		cout<<"Destrctor"<<endl;
	}
};
int main()
{
	cdemo obj;
	exit(0); /* exit zero kel process direct 
	close karel pn destrctor la pn call janar nhi mg aple object tasch rahun zail 
	mg tya sadhi return 0 kara mg to zero sangle main sangel destrctor mg sagal delete 
	karel succefull sagal delete hoil */ 
	// return 

}
