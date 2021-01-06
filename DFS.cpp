#include<bits/stdc++.h>
using namespace std;
class Graph
{
  vector<int> * adj;
 public:
   Graph(int v){
     adj= new vector<int>[v];
   }

   void addEdge(int u,int v){
     adj[u].push_back(v);
     adj[v].push_back(u);// undirected graph
   }

   void DFSUtil(int n){
    bool visited[n];
    memset(visited,false,n);
    for(int i=0;i<n;i++){
      cout<<"The staring node is "<<i<<" --";
      DFS(i,visited);
      memset(visited,false,n);
      cout<<endl;
    }

   }
   void DFS(int s,bool visited[]){
     visited[s]=true;// true cheyyagane print chese ra !
     cout<<s<<" ";
     std::vector<int> :: iterator i;
     for(i=adj[s].begin();i!=adj[s].end();i++){
        if(visited[*i]==false){
          DFS(*i,visited);
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
  g.DFSUtil(4);
  return 0;
}
