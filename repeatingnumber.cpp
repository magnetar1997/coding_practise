#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[]={ 7, 7, 8, 8, 9, 1, 1, 4, 2, 2},i=1,m=10;
  // it might be rotated
  if(a[0]==a[m-1]){
    i=2;
    m=m-1;
  }

  // simple but elegant solution
  for(;i<m;i++){
    if(a[i]==a[i-1]){
      i++;// deni valla rendu skip avtadhi idhi
    }
    else{
      printf("%d \n",a[i-1]);
    }
  }
  return 0;

}
