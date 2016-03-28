#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int start, end;
	string numberList[9] = {"one","two","three","four","five","six","seven","eight","nine"};
	cin>>start>>end;
	for(int i =start;i <= end; i++)
	{
		if(i <= 9)
			cout<<numberList[i - 1]<<endl;
		else
			if(i % 2 == 0)
				cout<<"even"<<endl;
			else
				cout<<"odd"<<endl;
	}
	return 0;
}