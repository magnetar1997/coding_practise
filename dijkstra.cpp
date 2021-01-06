#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f
class Graph{
vector<pair<int,int> >* G;


public:
Graph(int n){
  G=new vector< pair<int,int> >[n];
}

void addEdge(int u,int v,int w){
  G[u].push_back({v,w});// directed graph
  G[v].push_back({u,w});//undirected graph
}
void dijkstra(int src,int N){

vector<int> distfromsource(N);
distfromsource.assign(N,inf);

priority_queue< pair<int,int>, vector< pair<int,int> >,greater< pair<int,int> > > pq;// min priority_queue

distfromsource[src]=0;
pq.push({0,src}); // first is weight
while(!pq.empty()){
  int u=pq.top().second;
  pq.pop();

  vector<pair<int,int> >:: iterator i;
  for(i=G[u].begin();i!=G[u].end();i++){
      int v=(*i).first;
      int w=(*i).second;
      if(distfromsource[v]>distfromsource[u]+w){
        distfromsource[v]=distfromsource[u]+w;
        pq.push({distfromsource[v],v});
      }
  }


}
cout<<"Distance from source vertex "<<endl;
for(int i=0;i<distfromsource.size();i++){
  cout<<i<<"  "<<distfromsource[i]<<endl;
}
}


};

int main(){
  int V = 9;
    Graph g(V);

    //  making above shown graph
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.dijkstra(0,9);

    return 0;
}
