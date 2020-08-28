
#include<iostream>
using namespace std;
class cDemo;
int main()
{
	 cDemo *p,*q,*r,*s,*x,*y;
	
	p=(cDemo*)malloc(sizeof(cDemo*));                             	
	if(NULL==p)
	{
		printf("memory allocation falied");
		return -1;
	}
	
	p=new cDemo();
	if(NULL==p)
	{
		printf("memory allocation falied");
		return -1;
	}
 
    q=new cDemo(10);
	if(NULL==r)
	{
		printf("memory allocation falied");
		return -1;
	}

	r=new cDemo(10);
	if(NULL==r)
	{
		printf("memory allocation falied");
		return -1;
	}
	
	s=new cDemo(20,30);
	if(NULL==s)
	{
		printf("memory allocation falied");
		return -1;
	}

	x=new cDemo[3];
	if(NULL==x)
	{
		printf("memory allocation falied");
		return -1;
	}

	y=new cDemo[3];
	if(NULL==y)
	{
		printf("memory allocation falied");
		return -1;
	}

    delete p;
 
	delete q;
	
	delete r;

	delete s;
	
	delete[]x;
	
	delete[]y;
   
    return 0;
}

class cDemo
{
   public:
		cDemo()
		{
			cout<<"defloult constructor"<<endl;
		}
		cDemo(int iNo);
		{
			cout<<"1para constructor"<<endl;
		}
		cDemo(int iNo1,int iNo2)
		{
			cout<<"2para constructor"<<endl;
		}
		~cDemo ()
		{
			cout<<"distructor"<<endl;
		}
};
