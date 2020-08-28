#include<iostream>
using namespace std;
int main()
{ /*	//array to reference not posiable   karan array jat astata mh reference kas deil 
	int iNo1=10;
    int &ref1=iNo1;
    int &ref2=iNo1;
	int &ref3=iNo1;
     
  int &arr[]={ref1,ref2,ref3}; error becouse reference dont have own memory  */
	 
  //  reference to array is posiable  karan eth declaer kelo na aarry tena reference deta yeto munun hai posiable ahe 
	int arr[3]={10,20,30};
	int (&ref)[3]=arr;
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;
	cout<<ref<<endl;
    cout<<arr<<endl<<ref<<endl;
    cout<<sizeof(ref);

    
    return 0;

}

