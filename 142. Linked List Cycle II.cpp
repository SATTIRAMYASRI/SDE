142. Linked List Cycle II(leetcode)
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *s=head;
        ListNode *f=head;
        ListNode *temp=head;
        int i=0;
        while(f!=NULL and f->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
            if(s==f)
            {
                i++;
                break;
            }
        }
        if(i==0)
        {
            return NULL;
        }
        while(temp!=s)
        {
            s=s->next;
            temp=temp->next;
        }
        return temp;
    }
};
