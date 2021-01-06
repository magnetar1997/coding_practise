
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// Writing output to STDOUT
	int q;
	cin>>q;
	while(q--){
	    int N,k;
	    cin>>N>>k;
	    int i=1;
	    int t=0;
	    while(t<=N){
	        t=t+2*pow(k,i);
	        i++;
	    }
	    i--;
	    if(t<=N){
	        //cout<<turns<<endl;
	        cout<<2*i<<endl;
	    }
	    
	    else{
	        if(t-pow(k,i)<=N){
	            cout<<2*(i)-1<<endl;
	        }
	        else if(t-2*pow(k,i)<=N){
	            cout<<2*(i)-2<<endl;
	        }
	    }
	  
	}
}
