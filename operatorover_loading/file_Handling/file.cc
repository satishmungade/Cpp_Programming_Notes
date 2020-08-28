#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin1("file1.txt");
	ofstream fin2("file2.txt");

//	fin1.open,ios::in);
//	fin2.open("file2.txt",ios::out);
	if(!fin1)
	{
		cout<<"File Not Exist";
	}
	else
	{
		char ch;
		while(!fin1.eof());
		{
			fin1.get(ch);
			if(ch==' ');
			{
				fin2.put('$');
			}
		}
		cout<<"successfully wrrite";
	}
		fin1.close();
		fin2.close();
}
