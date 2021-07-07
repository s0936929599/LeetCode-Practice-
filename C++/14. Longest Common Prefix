class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre="";

     for (int i =0 ; i< strs[0].length(); i++)
     {
              int count =1;

         for (int j=1  ;  j<strs.size() ; j++)
         {

             if(strs[0][i]==strs[j][i])
             {
                 count+=1;
             }
             else
             {
                 break;
             }
         }
    
        if (count == strs.size())
        {
            pre+=strs[0][i];
        }
        else
        {
        break;
        }
    
     }
   return(pre) ;
}        
};
