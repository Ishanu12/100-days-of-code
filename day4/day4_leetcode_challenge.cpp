<<<<<<< HEAD
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges)
    {
        if(n==1){
          return {0};
      }
      vector<vector<int>>graph(n);
      vector<int>degree(n,0);
      for(vector<int>&edge: edges){
          graph[edge[0]].push_back(edge[1]);
          graph[edge[1]].push_back(edge[0]);
          degree[edge[0]]++;
          degree[edge[1]]++;
      }
      queue<int>q;
      for(int i=0; i<n; i++){
          if(degree[i]==1){
              q.push(i);
          }
      }
      while(n>2){
        int sz = q.size();
        n-=sz;
        for(int i=0 ;i<sz; i++){
            int t =q.front();
            q.pop();
            for(int j=0; j<graph[t].size(); j++){
                degree[graph[t][j]]--;
                if(degree[graph[t][j]]==1){
                    q.push(graph[t][j]);
                }
            }
        }  
    }
    vector<int>res;
    while(!q.empty()){
        res.push_back(q.front());
        q.pop();
    }
    return res;
    }
    
=======
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges)
    {
        if(n==1){
          return {0};
      }
      vector<vector<int>>graph(n);
      vector<int>degree(n,0);
      for(vector<int>&edge: edges){
          graph[edge[0]].push_back(edge[1]);
          graph[edge[1]].push_back(edge[0]);
          degree[edge[0]]++;
          degree[edge[1]]++;
      }
      queue<int>q;
      for(int i=0; i<n; i++){
          if(degree[i]==1){
              q.push(i);
          }
      }
      while(n>2){
        int sz = q.size();
        n-=sz;
        for(int i=0 ;i<sz; i++){
            int t =q.front();
            q.pop();
            for(int j=0; j<graph[t].size(); j++){
                degree[graph[t][j]]--;
                if(degree[graph[t][j]]==1){
                    q.push(graph[t][j]);
                }
            }
        }  
    }
    vector<int>res;
    while(!q.empty()){
        res.push_back(q.front());
        q.pop();
    }
    return res;
    }
    
>>>>>>> 09f0469c78ab56ded2d10c33f44a94cb5aac11ad
};