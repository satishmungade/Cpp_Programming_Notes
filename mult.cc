#include<iostream>
using namespace std;

class cMult
{
	int M_iNo1;
    int M_iNo2;

   public:
		 cMult()
		{
			M_iNo1=10;
			M_iNo2=20;
			
		}
        cMult(int iNo1)
		{
			M_iNo1=iNo1;
		}
        int mult()
		{
          return M_iNo1*iNo1;
		}
};
 
int main()
{
	  int iAns,iNo;
	  cMult obj1;
	  iAns=obj1.mult(); 
	  cout<<"mult is "<<iAns<<endl;
      cout<<"enter one number\t";
      cin>>iNo;
      cMult obj2;
      iAns=obj2.mult();
      cout<<"mult is\t"<<iAns<<endl;
      
      return 0;

}
	   
