int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int>  mst(V, 0);
        vector<int> par(V, -1);
        vector<int> key(V, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        
        key[0] = 0;
        pq.push({key[0], 0});
        
        while(!pq.empty()){
            int node = pq.top().second;
            pq.pop();
            mst[node] = 1;
            for(auto it:adj[node]){
                if(!mst[it[0]] && it[1]<key[it[0]]){
                    key[it[0]] = it[1];
                    pq.push({key[it[0]], it[0]});
                    par[it[0]] = node;
                }
            }
        }
        int ans = 0;
        for(int i=0; i<V; i++){
            ans+= key[i];
        }
        return ans;
    }
