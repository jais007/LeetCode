/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* l3=NULL;
        ListNode* t3=NULL;
        ListNode *c=new ListNode(0);
        ListNode* temp=NULL;
        while(t1&&t2)
        {
            int sum=t1->val+t2->val;
            t3=new ListNode((sum+c->val)%10);
            if(l3==NULL)
                l3=t3;
            else
            {
                temp=l3;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=t3;
            }
            c->val=(sum+c->val)/10;
            t1=t1->next;
            t2=t2->next;
        }
        while(t1)
        {
            int sum=t1->val;
            t3=new ListNode((sum+c->val)%10);
            if(l3==NULL)
                l3=t3;
            else
            {
                temp=l3;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=t3;
            }
            c->val=(sum+c->val)/10;
            t1=t1->next;
        }
        while(t2)
        {
            int sum=t2->val;
            t3=new ListNode((sum+c->val)%10);
            if(l3==NULL)
                l3=t3;
            else
            {
                temp=l3;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=t3;
            }
            c->val=(sum+c->val)/10;
            t2=t2->next;
        }
          if(c->val!=0)
          {
           t3=new ListNode(c->val);
                temp=l3;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=t3;
          }
        
        return l3;
    }
};
