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
    
    ListNode *findMid (ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        
         while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    ListNode * reverseIT(ListNode *head)
    {
       ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *nxt = cur->next;
        
        while(cur!=NULL)
        {
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur=nxt;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) 
    {
        if(head->next==NULL) return true;
        if(head->next->next==NULL)
        {
            if(head->val==head->next->val) return true;
            else return false;
            
        }
        
        ListNode *mid = findMid(head);
        
        ListNode *slow = reverseIT(mid->next);
        mid->next = slow;
        slow = mid;
        slow = slow->next;
        ListNode *dummy = head;
        
        
        while(slow!=NULL)
        {
            if(head->val==slow->val)
            {
                head = head->next;
                slow = slow->next;
            }
            else
                return 0;
        }
        return true;
    }
};