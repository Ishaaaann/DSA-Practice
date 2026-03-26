class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||x%10==0&&x!=0)
        return false;
    int reversed=0;
    while(x>reversed){
        int add=x%10;
        reversed= reversed*10 + add;
        x/=10;
    }
    return (x==reversed||x==reversed/10);
};
};
//only half of the palindrome reversed and checked with the the other orginal half to see if its the same along the middle
