    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ls;
        int vis[V]={0};
        vis[0]=1;
        queue<int> q;
        //push the intial starting node
        q.push(0);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ls.push_back(node);
            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return ls;
    }