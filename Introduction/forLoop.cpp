#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   char c[11][6]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
   int i,n,a,b;

   cin>>a;
   cin>>b;
   

   for(i=a;i<=b;i++)
   {
       n=(i<=9?i-1:9+i%2);

       cout<<c[n]<<endl;
       
   }
   
   
    // Complete the code.
    return 0;
}
