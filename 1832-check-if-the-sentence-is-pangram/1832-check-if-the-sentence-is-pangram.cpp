class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        int occurs[27] = {0};
        for (int i = 0; i < sentence.length() ; i++)
            occurs[sentence[i] - 'a']++;
        for (int i = 0; i < 26 ; i++)
        {
            if (!occurs[i])
                return (false);
        }
        return (true);
    }
};