class Solution
{
	public:
	void dfs(int node, vector<int> adj[],vector<int>&visit,vector<int>&res)
	{
	    visit[node]=1;
	    for(auto s:adj[node])
	    {
	         if(visit[s]!=1)
	        {
	            dfs(s,adj,visit,res);
	        }
	    }
	    res.push_back(node);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>res;
	    vector<int>visit(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(visit[i]!=1)
	        {
	            dfs(i,adj,visit,res);
	        }
	    }
	    reverse(res.begin(),res.end());
	    return res;
	}
};
