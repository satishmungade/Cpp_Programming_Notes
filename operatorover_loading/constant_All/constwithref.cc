//constant with refernce 


#include<iostream>
using namespace std;
int main()
{
  /* //varsion 1
    int iNo=10;
   int &ref=iNo;
  cout<<&ref<<endl; //address print
  cout<<iNo<<endl;  //iNo value print 10
  iNo++;				//Allow 
  cout<<iNo<<endl;   //11
  ref++;               //Allow
  cout<<ref<<end;	//12
  cout<<&ref<<endl;  // same address print  */
 
 /*  //version 2

	const int iNo=10;
	const int &ref=iNo;

	cout<<&ref<<endl;
	cout<<iNo<<endl;
	 iNo++;          //error: increment of read-only variable ‘iNo++’

	cout<<iNo<<endl;  
 	ref++;			// error: increment of read-only reference ‘ref’
     

 cout<<ref<<endl;  */



/*
    //virsion 3
	 int iNo=10;
	const int &ref=iNo;//allow becouse sequrity milt ahe na 
    //const int &ref=10; this type will be accept hear consider as normal const variable 10 is const value  
  
	cout<<&ref<<endl;//address
	cout<<iNo<<endl;//10
	 iNo++;          //allow //11

	cout<<iNo<<endl;  
 	//&ref++;			// error: increment of read-only reference ‘ref’  const */
     

   
/*
viresion 4

		const  int iNo=10;
		int &ref=iNo;//error ahe sequrity jat ahe

	cout<<&ref<<endl;//address
	cout<<iNo<<endl;//10
	// iNo++;          //allow //11

	cout<<iNo<<endl;  
 	//&ref++;			
     

return 0;
}
