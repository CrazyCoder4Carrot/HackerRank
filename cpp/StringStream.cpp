#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
   // 
   stringstream streamer(str);
   int number;
   char ch;
   std::vector<int> result;
   while(streamer>>number)
   {
   	result.push_back(number);
   	streamer>>ch;
   	cout<<"character"<<ch<<endl;
   }
   return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
