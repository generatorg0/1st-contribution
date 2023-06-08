#include <iostream>
using namespace std;


long long factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1); 
}


int main(){
    long long mod=10^9+7;

    int t;
    cin>>t;
while(t--){
   long long n,k;
   cin>>n>>k;
   if(k<=n){
       cout<<factorial(k)%mod<<endl;
   }
   
   
   else if(k>n){
       long long comb=1;
          //comb = factorial(k) / (factorial(k-n));
           for(int i=k;i>=k-n+1;i--){
               comb=(comb)*(i);
           }
           cout<<comb%mod<<endl;
   }
   
   
   
}
   return 0;
}