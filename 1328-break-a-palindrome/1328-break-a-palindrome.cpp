class Solution {
public:
    string breakPalindrome(string palindrome) {
        if (palindrome.length() == 1)
            return "";
        int i = 0, j = palindrome.length() - 1;
        bool flag = false;
        while (i < palindrome.length())
        {
            if (palindrome[i] != 'a')
            {
                if (i == palindrome.length() / 2)
                {
                    if (palindrome.length() % 2 == 0)
                    {
                        flag = true;
                        palindrome[i] = 'a';
                        break;
                    }
                }
                else
                {
                    flag = true;
                    palindrome[i] = 'a';
                    break;
                }
            }
            i++;
        }
        if (!flag)
            palindrome[palindrome.length() - 1] = 'b';
        return (palindrome);
    }
};