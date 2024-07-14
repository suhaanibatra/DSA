/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans = {-1, -1};

        ListNode* prev = head;
        if(!prev) return ans; //no nodes

        ListNode* curr = head -> next;
        if(!curr) return ans; //only one node - no CP

        ListNode* next = head -> next -> next;
        if(!next) return ans; //only two nodes - CP not possible

        int minDistance = INT_MAX;
        int firstCP = -1, lastCP = -1;
        int pos = 1;
        while(next){
            if((curr -> val > prev -> val && curr -> val > next -> val) || (curr -> val < prev -> val && curr -> val < next -> val)){
                //it is a CP
                if(firstCP == -1){
                    firstCP = pos;
                    lastCP = pos;
                }
                else{
                    minDistance = min(minDistance, pos - lastCP);
                    lastCP = pos;
                }
                
            }

            pos++;
            prev = curr;
            curr = next;
            next = next -> next;
        }

        if(lastCP == firstCP){
            //only one CP
            return ans;
        }
        else{
            ans[0] = minDistance;
            ans[1] = lastCP - firstCP;
        }
        return ans;
    }
};
