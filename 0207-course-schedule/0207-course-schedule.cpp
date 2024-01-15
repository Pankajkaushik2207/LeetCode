class Solution {
private: 
    bool topoSortBfs(int n, unordered_map<int,list<int> >& adjlist){
        vector<int>ans;
  queue<int>q;
  unordered_map<int,int>indegree;
  for(auto i:adjlist){
    int src = i.first; 
    for(auto nbr:i.second){
      indegree[nbr]++;
    }
  }
  for(int i=0;i<n;i++){
    if(indegree[i]==0){
      q.push(i);
    }
  }

  while(!q.empty()){
    int frontNode=q.front();
    q.pop();
    ans.push_back(frontNode);
    for(auto nbr:adjlist[frontNode]){
      if(--indegree[nbr]==0){
        q.push(nbr);
      }
    }
  }
        if(ans.size()==n){
            return true;
        }else{
            return false;
        }
  
}



public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, list<int>> adjList;
        
        for(auto task: prerequisites){
            int u= task[0];
            int v= task[1];
            adjList[v].push_back(u);
        }
        
        bool ans=topoSortBfs(numCourses, adjList);
        return ans;
    }
};