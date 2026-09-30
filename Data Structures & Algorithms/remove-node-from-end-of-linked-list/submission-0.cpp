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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        for(ListNode* p=head;p!=nullptr;p=p->next){
            size++;
        }
        int target=size-n;
        
        if(target==0){
            ListNode* newHead=head->next;
            delete head;
            return newHead;
        }
        ListNode* prev=head;
        for(int i=0;i<target-1;i++){
            prev=prev->next;
        }
        ListNode* del=prev->next;
        prev->next=del->next;
        delete del;
        return head;
    }
};
