#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number;
    cin>>number;
    string numberList[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    if(number <= 9 )
    	cout<<numberList[number-1];
    else
    	cout<<"Greater than 9"<<endl;
   return 0;
}
