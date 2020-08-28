#include<iostream>
using namespace std;
class cDemo
{ 
	int iNo;
	int &ref;  //referenece  as Data member  ref constant sarkh inlitize karav lagte sperise of calculete size tenha sperate size pn milte
    public:cDemo():iNo(10),ref(iNo)
	{
	
	}
	void display()
	{
    	cout<<iNo<<endl<<ref<<endl;
		cout<<&iNo<<endl<<&ref<<endl;
	}
};

int main()
{ 
	cout<<sizeof(cDemo)<<endl;//&16 size nd without & 8
	cDemo obj;
	obj.display();
	return 0;
}	//
