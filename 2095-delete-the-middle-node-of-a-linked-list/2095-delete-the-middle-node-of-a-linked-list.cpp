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
    ListNode* deleteMiddle(ListNode* head) {
        if (head ->next == NULL)
                return (NULL);
        ListNode* prev  = NULL , *slow = head, *speed = head;
        while (speed && speed ->next)
        {
            speed = speed ->next ->next;
            prev =  slow;
            slow = slow ->next;
        }
        prev ->next = slow ->next;
        return (head); 
        
    }
};