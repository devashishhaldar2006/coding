class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char,int> m;
        for(auto ch:s){
            m[ch]++;
        }
        priority_queue<pair<char,int>> pq;
        for(auto p:m){
            pq.push(p);
        }
        string res="";
        while(pq.size()){
            auto largest=pq.top();
            pq.pop();
            int len=min(repeatLimit,largest.second);
            for(int i=0;i<len;i++){
                res+=largest.first;
            }
            pair<char,int> secondLargest;
            if(largest.second-len>0){
                if(pq.size()){
                    secondLargest=pq.top();
                    pq.pop();
                    res+=secondLargest.first;
                }
                else return res;
                if(secondLargest.second-1>0){
                    pq.push({secondLargest.first,secondLargest.second-1});
                }
                pq.push({largest.first,largest.second-len});
            }

        }
        return res;
    }
};