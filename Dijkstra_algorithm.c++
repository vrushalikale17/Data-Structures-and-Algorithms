#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e5 + 10;
vector<int> dist(N, INF);
vector<vector<pair<int,int>>> g(N);
void dijkstra(int source){
    dist[source] = 0;
        set<pair<int, int>> s;
        s.insert({0, source});
    while(!s.empty()){
        auto node = *(s.begin());
        s.erase(node);
        for(auto child : g[node.second]){
            if(dist[child.first] > dist[node.second] + child.second){
                    s.erase({dist[child.first], child.first});
                    dist[child.first] = dist[node.second] + child.second;
                    s.insert({dist[child.first], child.first});
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y, wt});
        g[y].push_back({x, wt});
    }
    dijkstra(1);
    for(int i=1; i<=n; i++){
            if(dist[i] < INF){
                cout<<dist[i]<<" ";
            }
            else{
                cout<<-1<<" ";
            }
    }
}
