//binary operator as member function
#include<iostream>
using namespace std;
class cdemo
{
	public:
			int M_iNo1;
			int M_iNo2;
			int temp;
		cdemo(int iNo1=10,int iNo2=20)
		{
			M_iNo1=iNo1;
			M_iNo2=iNo2;
			cout <<M_iNo1 << M_iNo2<<endl;
		}
		cdemo operator +(cdemo& refobj)
		{
			cout<<"binary +:"<<endl;
			return cdemo(M_iNo1 + refobj.M_iNo1, M_iNo2 + refobj.M_iNo2);
		}
		cdemo operator <<(cdemo& refobj)
		{
			cout<<"binary left shit<<:"<<endl;
			return cdemo(M_iNo1 << refobj.M_iNo1, M_iNo2 << refobj.M_iNo2);
		}
		cdemo operator >>(cdemo& refobj)
		{
			cout<<"binary Right shit>>:"<<endl;
			return cdemo(M_iNo1 >> refobj.M_iNo1, M_iNo2 >> refobj.M_iNo2);
		}
		cdemo& operator +=(cdemo& refobj)
		{
			cout<<"binary plus equal +=:"<<endl;
			M_iNo1+=refobj.M_iNo1;
			M_iNo2+=refobj.M_iNo2;
			return *this;
		}
		cdemo& operator -=(cdemo& refobj)
		{
			cout<<"binary minuse equal -=:"<<endl;
			M_iNo1-=refobj.M_iNo1;
			M_iNo2-=refobj.M_iNo2;
			return *this;
		}
			cdemo& operator ==(cdemo& refobj)
		{
			cout<<"binary  equal to ==:"<<endl;
			M_iNo1==refobj.M_iNo1;
			M_iNo2==refobj.M_iNo2;
						
			return *this;
		}
};
int main()
{
	cdemo obj1,obj2,obj3;
	
	obj3=obj1+obj2;
	obj1<<obj2;
	obj1>>obj2;
	obj2+=obj1;
	obj2-=obj1;
	obj1 == obj2;


}
