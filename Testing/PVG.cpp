#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool vis[105];
vector<int> adj[105];
int beu[105];


int dfs(int ind,int &loc){
    vis[ind] = true; 
    loc = max(loc , beu[ind]);
    for(int  i = 0;i < adj[ind].size();i++){
        if(! vis[ adj[ind][i] ]){
            dfs( adj[ind][i] , loc);
        }
    }
    return loc;
}

int main() {
    int n,m;
    cin>>n>>m;
    for(int i = 0;i <= n;i++){
        vis[i] = false;
        adj[i].clear();
    }  
    
    for(int i = 0; i < n;i++){
        cin>>beu[i+1];
    }
    while(m--){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans = 0;
    for(int i = 1;i <= n;i++){
        if(!vis[i]){
            int loc = -1;
            ans += dfs(i,loc);
        }
    }
    cout<<ans<<endl;
    return 0;
}
