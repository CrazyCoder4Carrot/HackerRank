#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count = 0;
    cin>>count;
    int number[count];
    for(int i =0;i < count; i++)
    {
    	cin>>number[i];
    }
    for(int i = count - 1; i >= 0 ; i--)
    {
    	cout<<number[i]<<" ";
    }
    return 0;
}
