#include<bits/stdc++.h>
using namespace std;
int main(){
  string str="BANANANAS";
  int n=str.size();
  int max_len=0;
  int left,right;
  for(int i=0;i<n;i++){
     int l=0;
     while(((i-l)>=0) && (i+l<n) ){
        string le="";
        string ri="";
        for(int j=i-l;j<=i;j++){
          le=le+str[j];
        }
        for(int j=i;j<=i+l;j++){
          ri=str[j]+ri;
        }
        //reverse(le.begin(),le.end());
        if( le.compare(ri)!=0  ){
          break;
        }
        l++;
     }
     if(max_len<  2*l-1){
       max_len= 2*l-1;
       left=i-(l-1);
       right=i+(l-1);
     }

  }
  cout<<max_len<<endl;
  cout<< left<<" "<<right<<endl;
  return 0;
}
