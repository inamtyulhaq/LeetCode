// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

// if head is null return null
// else
// keep a pointer to head
// while next is not null
// if current value is equal to next value
// set current next to next next
// else
// move current to next
// return head

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) 
        {
            return nullptr;
        }
        ListNode* tempHead = head;
        while(tempHead->next != nullptr)
        {
            if(tempHead->val == tempHead->next->val)
            {
                tempHead->next = tempHead->next->next;
            }
            else
            {
                tempHead = tempHead->next;
            }
        }
        return head;
    }
};