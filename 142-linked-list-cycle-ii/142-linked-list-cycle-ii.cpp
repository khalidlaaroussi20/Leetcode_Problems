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
    ListNode *detectCycle(ListNode *head) 
    {
        map <ListNode *, int> m;
        int pos = 1;
        while (head)
        {
            if (m.find(head) != m.end())
                return (head);
            m[head] = pos++;
            head = head ->next;
        }
        return (NULL);
    }
};