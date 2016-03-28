#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
   string stringA, stringB;
   cin>>stringA>>stringB;
   cout<<stringA.size()<<" "<<stringB.size()<<endl;
   cout<<stringA + stringB<<endl;
   string stringC = stringA;
   stringA[0] = stringB[0];
   stringB[0] = stringC[0];
   cout<<stringA<<" "<<stringB<<endl;
    return 0;
}
