#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int t;
    cin>>t;
    while(t--){
        lli L,v,l,r;
        cin>>L>>v>>l>>r;
        lli c=0;
        if(L>=v)
        {
        c=L/v;
        lli miss=0;
        /*
        lli i=v*(l/v);
        for(;i<=r;i=i+v){
               if(i>=l && i<=r) miss++; 
        }
        */
        if(l!=r)
        {
        miss=r/v-l/v;
        if(l%v==0 || r%v==0) miss++;
        }

        else{
            if(l%v==0) miss++;
        }
        c=c-miss;
        if(c<=0) c=0;
        cout<<c<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}