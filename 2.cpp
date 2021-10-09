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
        int temp = 0;
        ListNode* result = new ListNode(); 
        ListNode* d = result;
         
        while (l1 != nullptr || l2 != nullptr){
            temp /= 10;
            
            if (l1 != nullptr){
                temp += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr){
                temp += l2->val; 
                l2 = l2->next;
            }
            
            d->next = new ListNode(temp%10); 
            d = d->next;
        }
        
        if (temp/10 == 1)
            d->next = new ListNode(1);
        
        return result->next; 
    }
};