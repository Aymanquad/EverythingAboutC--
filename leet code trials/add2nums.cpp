
//  * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int nums[] = {};
        int carry = 0;

        ListNode* l3 = new ListNode(0);
        l3->val = l1->val + l2->val;

        while(l1->next != nullptr  &&  l2->next != nullptr){
            l1 = l1->next;
            l2 = l2->next;

            l3->next = new ListNode(0);
            l3 = l3->next;

            l3->val = l1->val + l2->val;
        }
        // for(int )
        return (l3);;
    }
};