#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int main(){
    map<int,int> m;
    m.insert(ii(1,2));
    m.insert(ii(2,4));
    m.insert(ii(3,6));

    map<int,int> :: iterator i;
    cout<<"the size of map is "<<m.size()<<endl;
    for(i=m.begin();i!=m.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}