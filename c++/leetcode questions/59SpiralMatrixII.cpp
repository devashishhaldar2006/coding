class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int> (n));
        int minr=0,minc=0,maxr=n-1,maxc=n-1;
        int count=1;
        while(minr<=maxr && minc<=maxc){
            for(int i=minr;i<=maxc;i++){
                ans[minr][i]=count++;
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            for(int j=minr;j<=maxr;j++){
                ans[j][maxc]=count++;
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            for(int k=maxc;k>=minc;k--){
                ans[maxr][k]=count++;
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            for(int l=maxr;l>=minr;l--){
                ans[l][minc]=count++;
            }
            minc++;
        }
        return ans;
        
    }
};