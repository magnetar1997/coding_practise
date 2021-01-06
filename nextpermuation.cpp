#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int q;
	cin>>q;
	while(q--){

	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int i=n-1;
	    while(a[i]<a[i-1]){
	        i--;
	    }
	    if(i<=0)
	    {
	        sort(a.begin(),a.end());
	        for(int j=0;j<n;j++){
	            cout<<a[j]<<" ";
	        }
	        cout<<endl;
	    }
	    else{
	        //cout<<"hello"<<endl;
	        int ele=a[i-1];
	        int l;
	        for(l=n-1;l>i;l--){
	            if(ele>a[l]){
	                continue;
	            }
	            else{
	                break;
	            }
	        }
	        int t= a[i-1];
          a[i-1]=a[l];
          a[l]=t;
	        sort(a.begin()+i,a.end());
	        for(int j=0;j<n;j++){
	            cout<<a[j]<<" ";
	        }
	        cout<<endl;
	    }


	}
	return 0;
}
