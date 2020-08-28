	//nacked function as friend accepcting referenece

#include<iostream>
using namespace std;

class cDemo1;
class cDemo2;

void swap(cDemo1 &,cDemo2 &);	
class cDemo1
{ 
	
	int M_iNo1;
	public:
	void set(int iNo)
	{
		M_iNo1=iNo;
	}
	void get()
	{
    	cout<<M_iNo1;
	}
   
   friend void swap(cDemo1 &ref1,cDemo2 &ref2);
};

class cDemo2
{
    
	int M_iNo2;
    public:
	void set(int iNo)
	{
		M_iNo2=iNo;
	}
	void get()
	{
		cout<<M_iNo2;
	}

	friend void swap(cDemo1 &ref1,cDemo2 &ref2);
};

void swap(cDemo1 &ref1,cDemo2 &ref2)
{
  	ref1.M_iNo1=ref1.M_iNo1+ref2.M_iNo2;
  	ref2.M_iNo2=ref1.M_iNo1-ref2.M_iNo2;
  	ref1.M_iNo1=ref1.M_iNo1-ref2.M_iNo2;
}
int main()
{
  cDemo1 obj1;
  cDemo2 obj2;
  int iNo;
  
   cout<<"Enter the obj1 value\t";
   cin>>iNo;
 
   obj1.set(iNo);
 
 
   cout<<"enter the obj2 value\t";
   cin>>iNo;
  
   obj2.set(iNo);
   

    cout<<"before swap value\t";
	 obj1.get();
     obj2.get();
 	 
     cout<<endl;
  
     swap( obj1, obj2);

    cout<<"After swap value\t";
  
	obj1.get();
	obj2.get();
    return 0;
}
