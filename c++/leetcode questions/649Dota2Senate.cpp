class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.size();
        queue<int> q;
        queue<int> r;
        queue<int> d;
        for(int i=0;i<n;i++){
            if(senate[i]=='R'){
                r.push(i);    
            }
            else{
                d.push(i);
            }
            q.push(i);
        }
        while(q.size()>1){
            if(senate[q.front()]=='X') q.pop();
            else if(senate[q.front()]=='R'){
                //check for victory
                if(d.size()==0) return "Radiant";
                else{//take rights of next D
                    senate[d.front()]='X';
                    d.pop();
                    //kaam ho gya
                    q.push(q.front());
                    q.pop();
                    r.push(r.front());
                    r.pop();

                }
            }
            else{
                //check for victory
                if(r.size()==0) return "Dire";
                else{//take rights of next R
                    senate[r.front()]='X';
                    r.pop();
                    //kaam ho gya
                    q.push(q.front());
                    q.pop();
                    d.push(d.front());
                    d.pop();

                }
            }
        }
        return senate[q.front()]=='R'? "Radiant":"Dire";
    }
};