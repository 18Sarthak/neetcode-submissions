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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode =new ListNode(-1);
        ListNode* curr=dummyNode;
        ListNode* tempNode1=l1;
        ListNode* tempNode2=l2;
        int carry=0;
        while(tempNode1!=NULL || tempNode2!=NULL){
            int sum=carry;
            if(tempNode1){
                sum+=tempNode1->val;
            }
            if(tempNode2){
                sum+=tempNode2->val;
            }
            ListNode* newNode =new ListNode(sum%10);
            carry=sum/10;
            curr->next=newNode;
            curr=curr->next;

            if(tempNode1){
                tempNode1=tempNode1->next;
            }
            if(tempNode2){
                tempNode2=tempNode2->next;
            }   
        }
        if(carry){
            ListNode* newNode=new ListNode(carry);
            curr->next=newNode;
        }
        return dummyNode->next;

    }
};
