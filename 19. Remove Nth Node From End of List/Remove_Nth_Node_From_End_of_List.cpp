/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    
    if(head->next==0)
    {
        head=0;
        return head;
    }
    
    struct ListNode *t,*p,*q;
    
    t=head;int count=0;
    p=head;
    q=head;
    while(t)
    {
        t=t->next;
        count++;
    }
    
    if(count==n)
    {
        head=head->next;
        return head;
        
    }
    
    for(int i=1;i<=count-n;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    return head;

}
