#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


bool isPrime(lli num){
   for(lli i=2;i<sqrt(num);i++){
       if(num%i==0){
           return false;
       }
   }
   return true;
}

int main(){
    
    int q;
    cin>>q;
    while(q--){
        lli a,b;
        cin>>a>>b;
        lli sum=abs(a+b);
        lli diff=abs(a-b);
        if(diff==0)
           cout<<"NO"<<endl;    
        else if(diff==1){
               bool prime=isPrime(sum); 
               if(prime)
                  cout<<"YES"<<endl;
               else 
                  cout<<"NO"<<endl;   
        }
    
        else{
            cout<<"NO"<<endl;
        }

    }
   

}