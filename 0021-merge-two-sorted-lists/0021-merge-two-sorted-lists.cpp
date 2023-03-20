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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* head = nullptr;

        if(list1==nullptr && list2==nullptr)
        {
            return nullptr;
        }
        else if(list1==nullptr && list2!=nullptr)
        {
            return list2;
        }
        else if(list1!=nullptr && list2==nullptr)
        {
            return list1;
        }

        while(1)
        {
            int list1_num=1000;
            int list2_num=1000;

            if(list1==nullptr && list2==nullptr)
            {
                break;
            }

            if(list1!=nullptr) list1_num = list1->val;
            if(list2!=nullptr) list2_num = list2->val;

            if(list1_num<list2_num)
            {
                ListNode* new_node = new ListNode(list1_num);
                if(head==nullptr)
                {
                    cout<<"init"<<endl;
                    head = new_node;
                }
                else
                {
                    ListNode* temp = head;
                    while(temp->next!=nullptr)
                    {
                        temp = temp->next;
                    }
                    temp->next = new_node;

                }
                list1 = list1->next;
            }
            else
            {
                ListNode* new_node = new ListNode(list2_num);
                if(head==nullptr)
                {
                    cout<<"init"<<endl;
                    head = new_node;
                }
                else
                {
                    ListNode* temp = head;
                    while(temp->next!=nullptr)
                    {
                        temp = temp->next;
                    }
                    temp->next = new_node;
                }
                list2 = list2->next;
            }

        }

        return head;
    }
};