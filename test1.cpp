#include<bits/stdc++.h>
using namespace std;

class Graph
{
  int V; // number of vertices
  std::vector<int> *adj;
  public:
  Graph(int n){
    this->V=n;
    adj=new vector<int>[n];// syntax gurthu pettuko howle ga
  }
  void addEdge(int u,int v){
      adj[v].push_back(u);
      adj[u].push_back(v);
  }


  void DFSUtil(int v, bool visited[] ){
    visited[v]=true;
    cout<<v<<" ";
    vector<int> :: iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++){
      if(visited[*i]==false){
        DFSUtil(*i,visited);
      }
    }
  }


  // starting vertex for DFS
  void DFS(int v){
      bool visited[v];
      memset(visited,false,v);
      DFSUtil(v,visited);
  }
};


int main(){
  // Create a graph given in the above diagram
     Graph g(4);
     g.addEdge(0, 1);
     g.addEdge(0, 2);
     g.addEdge(1, 2);
     g.addEdge(2, 0);
     g.addEdge(2, 3);
     g.addEdge(3, 3);
     int stsrt=0;
     cout << "Following is Depth First Traversal"
             " (starting from vertex ) "<< stsrt<<" \n";
     g.DFS(stsrt);
     cout<<endl;
     return 0;

   }
