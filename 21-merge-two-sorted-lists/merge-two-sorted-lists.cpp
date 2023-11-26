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
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
       if(left==0)  return right;
       if(right == 0) return left;

       ListNode* ans=new ListNode(-1);
       ListNode *mptr=ans;   // merged pointer

       while(left && right)
       {
           if(left->val <= right->val)
           {
               mptr->next=left;
               mptr=left;
               left=left->next;
           }
           else    //(left->val > right->val)
           {
               mptr->next=right;
               mptr=right;
               right=right->next;
           }
       }

       if(left)
       {
           mptr->next = left;  //if left LL is exist, then connect entire remain LL to last node of mptr.
        //    mptr=left;
        //    left=left->next;
       }
       
       if(right)  //if right LL is exist, then connect entire remain LL to last node of mptr.
       {
           mptr->next = right;
        //    mptr=left;
        //    left=left->next;
       }

       return ans->next;   //bcz first node contain -1 so we return ans->next
    }
};