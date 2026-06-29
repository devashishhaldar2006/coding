bool cmp(vector<int>& v1,vector<int>& v2){
    return v1[1]>v2[1];
}
class Solution {
public:
 
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int n=boxTypes.size();
        int profit=0;
        for(int i=0;i<n;i++){
            if(boxTypes[i][0]<=truckSize){
                profit+=(boxTypes[i][0]*boxTypes[i][1]);
                truckSize-=boxTypes[i][0];
            }
            else{
                profit+=(truckSize*boxTypes[i][1]);
                break;
            }
        }
        return profit;
    }
};