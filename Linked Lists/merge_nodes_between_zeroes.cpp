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
    ListNode* mergeNodes(ListNode* head) {
        if(head == NULL) return head;

        ListNode* forw = head -> next;
        ListNode* back = head;
        ListNode* lastNode = head;
        int sum = 0;
        while(forw){
            if(forw -> val != 0){
                sum += forw -> val;
            }
            else{
                back -> val = sum;
                lastNode = back;
                back = back -> next;
                sum = 0;
            }

            forw = forw -> next;
        }
        lastNode -> next = NULL;
        return head;
    }
};
