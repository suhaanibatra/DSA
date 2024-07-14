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
    ListNode* findMiddle(ListNode* head){
        ListNode* fast = head -> next;
        ListNode* slow = head;

        while(fast && fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(curr){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void printList(ListNode* head){
        ListNode* tmp = head;
        while(tmp){
            cout << tmp -> val << "  ";
            tmp = tmp -> next;
        }
        cout << endl;
    }
    void reorderList(ListNode* head) {
        if(!head || !head -> next) return;
        
        ListNode* mid = findMiddle(head);
        ListNode* revHead = reverseList(mid -> next);
        mid -> next = NULL;

        ListNode* curr1 = head;
        ListNode* curr2 = revHead;
        ListNode* next1 = NULL;
        ListNode* next2 = NULL;

        while(curr1 != NULL && curr2 != NULL){
            next1 = curr1 -> next;
            curr1 -> next = curr2;
            curr1 = next1;

            next2 = curr2 -> next;
            curr2 -> next = curr1;
            curr2 = next2;
        }
    }
};
