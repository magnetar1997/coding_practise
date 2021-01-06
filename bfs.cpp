#include<bits/stdc++.h>
using namespace std;
class Graph{
  vector<int> *adj;
public:
  Graph(int n){
    adj=new vector<int>[n+1];
  }
  void addEdge(int u,int v){
    adj[u].push_back(v);
   adj[v].push_back(u);
  }
  void BFS(int s){
     vector<bool> visited(adj->size()+1,false);
     queue<int> q;
     visited[s]=true;
     q.push(s);
      while(!q.empty()){
        int t=q.front();
        q.pop();
        cout<<t<<endl;
         vector<int>:: iterator i;
        for(i=adj[t].begin();i!=adj[t].end();i++){
          if(visited[*i]==false){
            visited[*i]=true; // queue lo andaru visited ne
            q.push(*i);
          }
        }

      }
  }
};



int main(){
  Graph g(4);
 g.addEdge(0, 1);
 g.addEdge(0, 2);
 g.addEdge(1, 2);
 g.addEdge(2, 0);
 g.addEdge(2, 3);
 g.addEdge(3, 3);

 cout << "Following is Breadth First Traversal "
      << "(starting from vertex 2) \n";
 g.BFS(2);

 return 0;
}
