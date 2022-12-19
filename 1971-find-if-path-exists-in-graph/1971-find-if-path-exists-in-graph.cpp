class Solution {
public:
    bool visited[200001];
    vector<int> myGraph[200001];

    void dfs(int x)
    {
        visited[x]=true;

        for(int i=0;i<myGraph[x].size();i++)
        {
            int current = myGraph[x][i];

            if(visited[current]==false)
            {
                dfs(current);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        memset(visited, 0, sizeof(visited));
        
        for(int i=0;i<edges.size();i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            myGraph[a].push_back(b);
            myGraph[b].push_back(a);
        }

        dfs(source);
        
        if(visited[destination]) return true;
        else return false;

    }
};