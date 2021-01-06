#include<bits/stdc++.h>
using namespace std;

class Graph{
  vector<int> *adj;
public:
  Graph(int n){
    adj=new vector<int>[n];
  }
  void addEdge(int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  void DFSutil(int s,vector<bool> &visited){
     visited[s]=true;
     cout<<s<<endl;
     auto i=adj[s].begin();
     for(i=adj[s].begin();i!=adj[s].end();i++){
       if(visited[*i]==false){
         DFSutil(*i,visited);
       }
     }
  }
  void DFS(int start){
     vector<bool> visited(adj->size(),false);
     /*
     for(int i=1;i<=adj.size();i++){
       if(visited[i]==false){
         DFSutil(i);
       }
     }    DFSutil(start,visited);

     */
    DFSutil(start,visited);
  }
};

int main()
{
  Graph g(4);
      g.addEdge(0, 1);
      g.addEdge(0, 2);
      g.addEdge(1, 2);
      g.addEdge(2, 0);
      g.addEdge(2, 3);
      g.addEdge(3, 3);

      cout << "Following is Depth First Traversal"
              " (starting from vertex 2) \n";
      g.DFS(2);

      return 0;

}
