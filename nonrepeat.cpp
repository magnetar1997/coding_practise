#include<bits/stdc++.h>
using namespace std;
#define CHARN 256
int firstNonRepeat(char *str,int n){
  int arr[CHARN];
  for(int i=0;i<256;i++){
    arr[i]=-1;
  }

  //int n= sizeof(str)/sizeof(*str);
//  cout<<n<<endl;
  for(int i=0;i<n;i++){
    if(arr[str[i]]==-1){
      arr[str[i]]=i;
    }
    else{
      arr[str[i]]=-2; // idhi rendo sari vachindhi
    }
  }
  int res=n+1;
  for(int i=0;i<256;i++){
    if(arr[i]>=0)
      res=min(arr[i],res);
  }
  return res;
}

int main(){
  char a[]={'g','e','e','k','s','f','o','r','g','e','e','k','s'};
  int n= sizeof(a)/sizeof(*a);
  cout<<a[firstNonRepeat(a, n)]<<endl;

  return 0;
}
