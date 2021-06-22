class Solution {
public:
    bool isPalindrome(int x) 
    {    
        if ( x< -2147483648 or x> 2147483647)
        {
            return (0);
        }
        string xx ;
       xx = to_string(x);
        string  ss ="";

        for (int i = xx.length()-1 ; i>=0 ; i--)
       {   
       ss =ss + xx[i];
       }
     return(!ss.compare(xx)); 

  return(0);  }
};
