class Solution {
public:
    string convert_reverse(int x)
    {
       string num,num1;
       num=to_string(x); //converted to string
       if(x<0) num1+='-'; //if negative, then - should be at 1st position in the reversed string
       for(int i=num.size()-1;i>=1;i--)
           num1+=num[i];
       if(x>=0) num1+=num[0]; // if the num is negative then we have to skip the 0th position, 
	                          //i.e -123 will be -321- after reversing if we add 0th position
       return num1;
    }
    int reverse(int x) {
       string reversed;
       reversed=convert_reverse(x); // first converted to string and then reversed
       if(x<0 and reversed.length()==11 and reversed>"-2147483648")  return 0; 
       if(x>0 and reversed.length()==10 and reversed>"2147483647")   return 0;
       return stoi(reversed); // again converted to int
    }
};


/*fase
class Solution {
public:
int reverse(int x) {
long int ans=0;
while(x)
{
ans=ans*10+x%10;
x/=10;
}
if(ans<INT_MIN||ans>INT_MAX)
return 0;
return ans;
}
};
*/
