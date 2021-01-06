#include<bits/stdc++.h>
using namespace std;
int removele(vector<int> &A, int B){
  int j=0;
  int i=0;
  for(;i<A.size();i++){
    if(A[i]!=B){
      A[j]=A[i];// only unique elements are left out
      j++;
    }
  }

  A.erase(A.begin()+j,A.end());
  return j;
}

int main(){
  vector<int> A;
  A={4,1,1,2,1,3};
  int s;
  cin>>s;
  cout<<removele(A,s)<<'\n';
  for(int i=0;i<A.size();i++){
     cout<<A[i]<<" ";
  }
  cout<<'\n';
}
