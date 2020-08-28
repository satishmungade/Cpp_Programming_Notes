#include<iostream>// headfile for c++ (.h ha dil nhi manje c++ ch file ahe as compiler la kalte)
using namespace std;// std

//server side
class cAddition
{	
	int M_iNo1;
    int M_iNo2;   //data members
	public:
          cAddition() //(class name(cAddition)  deflaut constructer cAddition(deflault) ) Member function
		{
			M_iNo1=0;
            M_iNo2=0;  //data Members
		}
		  cAddition(int  iNo1,int iNo2) //( class name(cAdditin)  parameterise constructer cAddition(int iNo1,int iNo2)) member function
		{
			M_iNo1=iNo1;
			M_iNo2=iNo2;  //data member
		}
	 	  int sum()   //member function 
		{
			return M_iNo1+M_iNo2;
		}
};

// clint side 
int main()
{
	int iNo1,iNo2,iAns;

    cAddition obj1;//deflaut parameter cha obj (cAdition ha class name obj1 obj nav) 

	iAns=obj1.sum();//obj1 deflaut para navavarun function call kartoy (function ch nav ahe sum())

    cout<<"sum is\t"<<iAns<<endl; //cout hai object yach decleatin headerfile madhe ahe 

    cout<<"enter two numbers\t";  //<< insertion operator its also operater overlaod 

    cin>>iNo1>>iNo2;           //cin suda object ch yach declratin pn headerfile madhe >> extraction oprator its also overlaoed

    cAddition obj2(iNo1,iNo2); // parameterise obj2 (cAdition ha class name obj2 obj nav) 

    iAns=obj2.sum(); //obj2 with parameter navavarun function call kartoy (function ch nav ahe sum())

    cout<<"sum is"<<iAns<<endl; //ans yeil ithe

    cin.get();// haa pn object ahe 

    return 0;// c++ main haa integer pahije tyla retrun pahiject
}     

