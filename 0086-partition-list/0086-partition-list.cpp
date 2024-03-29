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
    ListNode* vtoll(vector<int>& res)
    {
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        for(int i=0;i<res.size();i++)
        {
            ListNode* newnode=new ListNode;
            newnode->val=res[i];
            newnode->next=nullptr;
            if(head==nullptr)
            {
                head=newnode;
                tail=newnode;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
        }
        return head;
    }
    ListNode* partition(ListNode* head, int x) {
        vector<int> ans;
        ListNode* ptr=head;
        while(ptr!=nullptr)
        {
            ans.push_back(ptr->val);
            ptr=ptr->next;
        }
        vector<int>res;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]<x)
            {
                res.push_back(ans[i]);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>=x)
            {
                res.push_back(ans[i]);
            }
        }
        ListNode* start=vtoll(res);
        return start;
    }
};