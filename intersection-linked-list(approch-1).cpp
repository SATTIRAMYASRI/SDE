160:leetcode:Intersection of Two Linked Lists
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
        ListNode* temp1=headB;
        while(headA!=NULL)
        {
            while(temp1!=NULL)
            {
                if(headA==temp1)
                {
                    return headA;
                }
                temp1=temp1->next;
            }
            temp1=headB;
            headA=headA->next;
        }
        return 0;
    }
};
