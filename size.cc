#include<iostream>
using namespace std;
class cBase
{ 
 private:

    int iNo1;//4
	int iNo2;//4
    //char chChar1;
	//char chChar2;
	
 };

class cDerivde:cBase
{
   protected:

    int iNo1;//4
	int iNo2;//4
    //char chChar1;
	//char chChar2;
};

  int main()
{
  cBase obj;
  cDerivde dobj;

  cout<<sizeof(dobj);//total size is 16 byte   & empty class object size is 1byte minimum ky deyach khi tri deyach mnun one byte deto
}  
