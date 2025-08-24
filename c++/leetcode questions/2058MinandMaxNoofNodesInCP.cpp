#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <algorithm>
#include <climits>
using namespace std;
class ListNode{//LL node  
public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    if(!head || !head->next || !head->next->next) 
        return {-1, -1};
    
    vector<int> critical_indices; 
    ListNode* prev=head;         // Previous node
    ListNode* curr=head->next;   // Current node
    ListNode* next=head->next->next; // Next node
    int idx=1; // Start with the second node (index 1 if head is index 0)
    while(next) {
        // Check if current node is a peak or valley
        if((curr->val > prev->val && curr->val > next->val) ||
            (curr->val < prev->val && curr->val < next->val)) {
            critical_indices.push_back(idx);
        }
        // Move ahead
        prev=curr;
        curr=next;
        next=next->next;
        idx++;
    }
    
    // If less than two critical points, return {-1, -1}
    if(critical_indices.size()<2)
        return {-1,-1};
    
    int min_dist= INT_MAX,max_dist=critical_indices.back()-critical_indices.front();
    // Find minimum distance between consecutive critical points
    for(int i=1;i<critical_indices.size();i++) {
        min_dist=min(min_dist,critical_indices[i]-critical_indices[i-1]);
    }
    
    return {min_dist,max_dist};
}
int main(){
   
}
