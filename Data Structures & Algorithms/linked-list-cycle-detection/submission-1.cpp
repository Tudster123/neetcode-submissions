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

    ListNode* iteratePtr(ListNode* head, int step = 0)
    {
        if(head == nullptr)
            return nullptr;
        
        while(step > 0)
        {
            if(head->next !=nullptr)
                head = head->next;
            else
                break;
            step --;
        }
        return head;
    }

    bool hasCycle(ListNode* head) {
        if(head ==nullptr)
            return false;

        ListNode* slowPtr = iteratePtr(head, 0);
        ListNode* fastPtr = iteratePtr(head, 2);
        
        while(slowPtr->next != nullptr && fastPtr->next != nullptr)
        {
            if(slowPtr == fastPtr)
                return true;

            slowPtr = iteratePtr(slowPtr, 1);
            fastPtr = iteratePtr(fastPtr, 2);

        }
        return false;
    }
};
