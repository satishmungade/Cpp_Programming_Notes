#include<iostream>
using namespace std;
class cdemo
{
	int *pPtr2;
	
	int iNo;
	float fNo;
	char chChar;
	double dNo;

public:
		int *pPtr1;
		
	   cdemo()
		{
			pPtr1=NULL;
			pPtr2=NULL;
		
			iNo=0;
			fNo=0.0f;
			chChar='\0';
			dNo=0.0;
		}
		~cdemo()
		{
			pPtr1=NULL;
			if(pPtr2 != NULL)
			{
				delete []pPtr2;
				pPtr2=NULL;
			}
			iNo=0;
			fNo=0.0f;
			chChar='\0';
			dNo=0.0;
		}
	  void set(int iNoparam,float fNoparam,char chCharparam, double dNoparam)
		{
			pPtr1=&iNo;
			pPtr2=new int[3];
			
			//set(pPtr2,0,12);
			iNo=iNoparam;
			fNo=fNoparam;
			chChar=chCharparam;
			dNo=dNoparam;
		}
	  void get()
		{
			cout<<"iNo is:"<<iNo<<endl;
			cout<<"fNo is:"<<fNo<<endl;
			cout<<"chChar is:"<<chChar<<endl;
			cout<<"dNo is:"<<dNo<<endl;	

			cout<<"&iNo is:"<<&iNo<<endl;
			cout<<"pPtr1 is:"<<pPtr1<<endl;
			cout<<"pPtr2 is:"<<pPtr2<<endl;
			
			cout<<"Array is"<<endl;
			for(int iCounter=0;iCounter<3;iCounter++)
			cout<<pPtr2[iCounter];
		}
		cdemo(cdemo &refobj)
		{
			cout<<"In copy constructor:"<<endl;
			iNo=refobj.iNo;
			fNo=refobj.fNo;
			chChar=refobj.chChar;
			dNo=refobj.dNo;
		
			pPtr1=&iNo;
			pPtr2=new int[3];
			for(int iCounter=0;iCounter<3;iCounter++)
			    pPtr2[iCounter]=refobj.pPtr2[iCounter];
		
			
		}
		cdemo& operator =(cdemo &refOpr2)
		{
			cout<<"In overloaded = operator:"<<endl;
			iNo=refOpr2.iNo;
			fNo=refOpr2.fNo;
			chChar=refOpr2.chChar;
			dNo=refOpr2.dNo;
	
			pPtr1=&iNo;

			if(NULL == pPtr2)
			  pPtr2= new int[3];
			for(int iCounter=0;iCounter<3;iCounter++)
		     	pPtr2[iCounter] = refOpr2.pPtr2[iCounter];
	
		
			return *this;
		}
};
int main()
{
	cdemo obj1;
	
	obj1.set(10,63.5f,'D',54.25);
	cout<<"obj1 is:"<<endl;
	obj1.get();
	
	cout<<endl;
	
	cdemo obj2=obj1;

	cout<<"obj2 is:"<<endl;

	obj2.get();
	
	cdemo obj3;
	obj3=obj1;

	cout<<"obj3 is:"<<endl;
	obj3.get();
	
	(*obj2.pPtr1)++;
	cout<<endl;

	cout<<"obj1 is:"<<endl;
	obj1.get();
	cout<<"obj2 is:"<<endl;
	obj2.get();
	cout<<"obj2 is:"<<endl;
	obj2.get();
   
     cin.get();
   return 0;
}
   
