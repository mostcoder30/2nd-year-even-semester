#include<bits/stdc++.h>
using namespace std;
int node;
    vector<vector<int>> adj;
    vector<bool> visited;
    stack<int>st;
    vector<int> ans;

void add_edge(int u, int v)
{
    adj[u][v] = 1;
}
void dfs(int v)
{
    visited[v] = true;
    for(int u : adj[v]){
        if(!visited[u]){
            dfs(u);
        }
    }
    ans.push_back(v);
}

int main()
{ 
    node = 11;
    //graph representration with edge
    adj = vector<vector<int>> (node,vector<int>(node,0));
    add_edge(7,9);
    add_edge(8,9);
    add_edge(1,3);
    add_edge(2,3);
    add_edge(3,4);
    add_edge(3,10);
    add_edge(3,5);
    add_edge(5,7);
    add_edge(10,7);
    add_edge(4,7);
    add_edge(8,7);


    cout<<"show adj"<<endl;
    int n = adj.size();
    for(int i = 0 ;i < n; i++){
        for(int  j = 0; j < n; j++){
            {
                cout<<adj[i][j]<<" ";
            }
        }cout<<endl;
    }
//topological sort
    visited.assign(node,false);
    ans.clear();
    for(int i = 0 ; i < node ; i++){
        if(!visited[i]){
            dfs(i);
        }
    }
    //reverse(ans.begin(),ans.end());

    for(auto e : ans)
    {
        cout<<e<<" ";
    }cout<<endl;
    return 0;
}