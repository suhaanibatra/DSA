/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insert(Node* &head, Node* &tail, int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail -> next = newNode;
        tail = newNode;
    }


    Node* copyRandomList(Node* head) {
        Node* newHead = NULL;
        Node* newTail = NULL;

        Node* temp = head;
        while(temp){
            int val = temp -> val;
            insert(newHead, newTail, val);
            temp = temp -> next;
        }

        Node* curr = head;
        Node* newCurr = newHead;

        while(curr && newCurr){
            Node* next = curr -> next;
            curr -> next = newCurr;
            curr = next;

            next = newCurr -> next;
            newCurr -> next = curr;
            newCurr = next;
        }

        temp = head;
        while(temp){
            if(temp -> next){
                temp -> next -> random = temp -> random ? temp -> random -> next : NULL;
            }
            temp = temp -> next -> next;
        }

        curr = head;
        newCurr = newHead;

        while(curr && newCurr){
            curr -> next = newCurr -> next;
            curr = curr -> next;

            if(curr != NULL){
                newCurr -> next = curr -> next;
                newCurr = newCurr -> next;
            }
        }

        return newHead;
    }
};
