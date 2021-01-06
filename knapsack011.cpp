#include<bits/stdc++.h>
using namespace std;

int knapsackrecur(int target,int i,vector<int> &w, vector<int> &v){ /// maximum value you can get for a given Target weight of knapsack
        
        if(i==w.size()){
             return 0;  // you cannot get any more value or check for any more value    
        }

        if((target-w[i])<0){ // that means do not include this element 
            return knapsackrecur(target,i+1,w,v);
        }
        return max((knapsackrecur(target-w[i],i+1,w,v)+v[i]),knapsackrecur(target,i+1,w,v));//max of these two will give us maximum value; include or dont include
}


int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int target;
        cin>>target;
        vector<int> v(n);
        vector<int> w(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        //cout<<knapsackrecur(target,0,w,v)<<endl;
        vector<vector<int> > dp(w.size()+1,vector<int>(target+1,0));
        for(int i=1;i<w.size()+1;i++){
            
            for(int j=0 ;j<target+1;j++){
                if(w[i-1]>j)
                   dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);   
            }
        }
        cout<<dp[w.size()][target]<<endl;
    }
}