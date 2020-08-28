#include<iostream>
using namespace std;
class cBase
{



};
class cDerived:public cBase
{


};
int main()
{
  cBase bobj;
  cDerived dobj;
  

  cBase *BP=NULL;
  cDerived *DP=NULL;
  
  BP=&bobj;
  DP=&dobj;
  
  BP=&dobj;//upcasting   manje varcha class khalch class madhe yen ex:base class ha derived class madhe yen 
  //DP=&bobj;  down costing  manje derived class base class madhe jan hai posiable nhi majech error ex :mulache goon papa madhe kas jatil br 
  
  cBase&bref=dobj;
  //cDerived&dref=bobj;
 
  return 0;
 
}
