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
    int length(ListNode* head){
        int len = 0;
        ListNode* tmp = head;
        while(tmp){
            len++;
            tmp = tmp -> next;
        }

        return len;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL) return head;
        int len = length(head);  
        k = k % len;  
        int cnt = 0;
        ListNode* newLastNode = head;
        for(int i = 0; i < len - k - 1; i++){
            newLastNode = newLastNode -> next;
        }

        ListNode* newHead = newLastNode -> next;
        ListNode* tmp = newHead;
        while(tmp -> next){
            tmp = tmp -> next;
        }

        tmp -> next = head;
        newLastNode -> next = NULL;
        return newHead;
    }
};
