class Solution {
public:
    void bfs(int i,vector<int>& isVisit,vector<vector<int>>& rooms){
        queue<int> q;
        isVisit[i]=1;
        q.push(i);
        while(q.size()){
            int front=q.front();
            q.pop();
            for(auto ele:rooms[front]){
                if(isVisit[ele]==0){
                    isVisit[ele]=1;
                    q.push(ele);
                }
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int> isVisit(n,0);
        bfs(0,isVisit,rooms);
        for(int i=0;i<n;i++){
            if(isVisit[i]==0) return false;
        }
        return true;
    }
};