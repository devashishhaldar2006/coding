class Solution {
  public:
    string findOrder(vector<string> &words) {
        // code here
        int n=words.size();
        vector<vector<int>> adj(26);
        vector<int> indegree(26,0);
        vector<int> visit(26,0);
        for(auto word:words){
            for(auto ch:word){
                visit[ch-'a']=1;
            }
        }
        for(int i=0;i<n-1;i++){
            auto curr=words[i];
            auto nxt=words[i+1];
            int j=0;
            int len=min(curr.size(),nxt.size());

            while(j<len && curr[j]==nxt[j]) {
                j++;
            }
            // invalid prefix case
            if(j==len) {
                if(curr.size()>nxt.size()) return "";
                continue;
            }
            int u=curr[j]-'a';
            int v=nxt[j]-'a';
            adj[u].push_back(v);
        }
        for(int u=0;u<26;u++){
            for(auto v:adj[u]){
                indegree[v]++;
            }
        }
        
        // kahns algo
        queue<int> q;
        int total=0;
        for(int i=0;i<26;i++){
            if(visit[i]){
                total++;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
        }
        string ans="";
        while(q.size()){
            int u=q.front();
            q.pop();
            
            ans+=char(u+'a');
            for(auto v:adj[u]){
                indegree[v]--;
                if(indegree[v]==0) q.push(v);
            }
            
        }
        if(ans.size()!=total){
            return "";
        }
        return ans;
    }
};