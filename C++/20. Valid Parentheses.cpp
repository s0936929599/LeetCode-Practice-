class Solution {
public:
    bool isValid(string s) 
    {
       stack <char> ans ; 
      
      for (int i=0 ; i<s.size();i++)
      {
         if (ans.empty() or s[i]=='[' or s[i]=='(' or s[i]=='{')
           {
               ans.push(s[i]);
           }
        else if (s[i] == ')')
        {
            if(ans.top()=='(')
            {
                ans.pop();
            }
           else
           {
               ans.push(s[i]);
           }
        }
        else if (s[i] == ']')
        {
            if(ans.top()=='[')
            {
                ans.pop();
            }
           else
           {
               ans.push(s[i]);
           }
        }
        else if (s[i] == '}')
        {
            if(ans.top()=='{')
            {
                ans.pop();
            }
           else
           {
               ans.push(s[i]);
           }
        }

      }
    return (ans.empty());
    }
}; 
