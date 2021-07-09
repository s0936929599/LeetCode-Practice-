class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        vector <int> ans;
        
        while (l1 !=NULL)
        {
            ans.push_back(l1->val);
            l1=l1->next;
        }
        while (l2 !=NULL)
        {
            ans.push_back(l2->val);
            l2=l2->next;
        }
        
       if (ans.empty())
       {    
           ListNode *ansL = NULL;
           return(ansL);
       }
       sort( ans.begin(),ans.end() );
       
       ListNode *ansL = new ListNode(ans[0]);
       
       ListNode * copy =  ansL ;

        for (int i =1 ; i<ans.size() ; i++)
        {   
            ListNode *a = new ListNode(ans[i]);
            copy -> next = a;
            copy=copy->next;
        }

       
        return(ansL);
    }
};
