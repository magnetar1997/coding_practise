#include<bits/stdc++.h>
#include<time.h>
using namespace std;


int minimum(int a,int b, int c){
  return min(min(a,b),c);
}

int minCost(vector< vector<int> > cost ,int m,int n){  // yenaka ninchi start chestavu nuvvu
  if(m<0 || n<0){
    return INT_MAX;
  }
  else if(m==0 && n==0){
    return cost[m][n];
  }
  else{
    return cost[m][n]+minimum(minCost(cost,m-1,n-1),minCost(cost,m,n-1),minCost(cost,m-1,n));
  }

}

int mincost(vector< vector<int> > cost,int m,int n){
  vector< vector<int> > dp(m+1, vector<int>(n+1));
  dp[0][0]=cost[0][0];
  for(int i=1;i<=m;i++){
    dp[i][0]=cost[i][0]+dp[i-1][0];
  }

  for(int i=1;i<=n;i++){
    dp[0][i]=cost[0][i]+dp[0][i-1]; // idhi enduko ardham chesuko
  }

  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      dp[i][j]= cost[i][j]+minimum(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
    }
  }

  return dp[m][n];
}



int main(){
    vector< vector<int> > cost={{1,2,3},{4,8,2},{1,5,3}};
    clock_t t1,t2,t3,t4;
    t1=clock();
    cout<<mincost(cost,2,2)<<endl;
    t2=clock();

    cout<<(double)(t2-t1)/CLOCKS_PER_SEC<<endl;
    t3=clock();
    cout<<minCost(cost,2,2)<<endl;
    t4=clock();
    cout<<(double)(t4-t3)/CLOCKS_PER_SEC<<endl;
    return 0;
}
