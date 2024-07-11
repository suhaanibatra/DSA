/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //traverse
        ListNode* a = headA;
        ListNode* b = headB;

        while(a -> next && b -> next){
            if(a == b) return a;
            a = a -> next;
            b = b -> next;
        }

        //since no intersection found yet 
        
        if(a -> next){
            //b -> next is null
            int len = 0;
            while(a -> next){
                a = a -> next;
                len++;
            }

            while(len--){
                headA = headA -> next;
            }
        }

        if(b -> next){
            int len = 0;
            while(b -> next){
                b = b -> next;
                len++;
            }
            while(len--){
                headB = headB -> next;
            }
        }

        while(headA != headB){
            headA = headA -> next;
            headB = headB -> next;
        }

        return headA;
    }
};
