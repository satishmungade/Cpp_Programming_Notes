#include<iostream>
using namespace std;
class cBase
{
	public:
        cBase()
		{
			cout<<"In Base constructor"<<endl;
		}
	~cBase()
		{
			cout<<"In cBase is distructor"<<endl;
		}
};
class cDerivde1: public cBase
{
   public:
          cDerivde1()
		{
			cout<<"In cDerivde1 constructor"<<endl;
		}
	~cDerivde1()
		{
			cout<<"In cDerivde1 is distructor"<<endl;
		}
};
class cDerivde2: public cDerivde1
{
   public:
        cDerivde2()
		{
			cout<<"In cDerivde2 constructor"<<endl<<endl;
		}
	~cDerivde2()
		{
			cout<<"In cDerivde2 is distructor"<<endl;
		}
};
int main()
{ 
        // cBase obj1;
        //cDerivde1 obj2;   

         cDerivde2 obj3;

        cout<<sizeof(obj3)<<endl;;
        //exit (0);
        return 0;

}
