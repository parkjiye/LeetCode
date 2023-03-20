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
    ListNode* reverseList(ListNode* head) {

        ListNode* answer = nullptr;
        
        while(head!=nullptr)
        {
            ListNode* new_node = new ListNode(head->val);
            if(answer==nullptr)
            {
                answer = new_node;
                head = head->next;
            }
            else
            {
                new_node->next = answer;
                answer = new_node;
                head=head->next;
            }
        }

        return answer;
    }
};