#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void print_bfs(int v, vector<int> adj[],bool* visited,queue<int>& q,vector<int>& ans){
       if (q.empty())return;
       int x = q.front();
       q.pop();
       ans.push_back(x);
       for (int i = 0 ;i< adj[x].size();i++){
           if (!visited[adj[x][i]]){
               q.push(adj[x][i]);
               visited[adj[x][i]] = true;
           }
       }
       print_bfs(v,adj,visited,q,ans);
       
    }
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    queue<int> q;
	    bool visited[V];
	    vector<int> ans;
	    for (int i = 0 ;i< V;i++){
	        visited[i] = false;
	    }
	    q.push(0);
	    print_bfs(V,adj,visited,q,ans);
	    return ans;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
