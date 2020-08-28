#include<iostream>
using namespace std;
class Test
{ /*
	private:
			int marks=75;
	public:
		Test(int marks)
		{
			cout<<this->marks;
			cout<<endl;
		}
};
int main()
{
	Test t(95);
	return 0;
}
*/
int i=5;
int &j=i;
j*=j;
i*=i;
cout<<"i="<<i<<"j="<<j;
}
