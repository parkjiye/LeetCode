/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* num=head;
    struct ListNode* ans=head;
    
    int count=1;
    
    while(num->next!=NULL)
    {
        count++;
        num=num->next;
    }
        
    for(int i=0;i<count;i++)
    {
        if(n==1 && head->next==NULL)
        {
            return NULL;
        }
        if(count==n)
        {
            head=head->next;
            ans=head;
            break;
        }
        if(i==count-n-1)
        {
            head->next=head->next->next;
            break;
        }
        head=head->next;
    }
    
    printf("%d ", count);
    return ans;
}