#include<iostream>
using namespace std;
class cDemo
{
	const int M_iNo1; //declratin order to values is put
	int M_iNo2;
	int M_iNo3;
    
	public:cDemo (int iNo):M_iNo2(++iNo),M_iNo3(++iNo),M_iNo1(++iNo)
	{
		
	}
	void display()
	{
              	cout<<M_iNo1<<endl;
              	cout<<M_iNo2<<endl;
              	cout<<M_iNo3<<endl;
	}
};

int main()
{
        cDemo obj(10);
        obj.display();
        return 0;
}	
//evalutin of member initilizatin list is note as per initilizing list order rather is note as per declratin list order
