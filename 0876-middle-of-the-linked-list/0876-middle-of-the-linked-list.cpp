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
    ListNode* middleNode(ListNode* head) {
        
        ListNode *temp;
        temp = head;

        int size=1;
        while(temp->next!=nullptr)
        {
            size++;
            temp = temp->next;
        }

        temp = head;
        ListNode *answer = nullptr;
        int idx=1;

        size = size/2+1;

        while(temp!=nullptr)
        {
            if(idx<size)
            {
                temp = temp->next;
            }
            else
            {
                ListNode *new_node = new ListNode(temp->val);

                if(answer!=nullptr)
                {
                    ListNode *tmp = answer;
                    while(tmp->next!=nullptr)
                    {
                        tmp=tmp->next;
                    }
                    tmp->next = new_node;
                }
                else
                {
                    answer = new_node;
                }
                temp = temp->next;
            }
            idx+=1;
        }

        return answer;
    }
};