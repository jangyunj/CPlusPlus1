class Solution
{
public:
    string mergeAlternatively(string word1, string word2)
    {
        string merged = "";
        int len1 = word1.length();
        int len2 = word2.length();
        for (int i = 0; i < max(len1, len2); i++)
        {
            if (i < len1)
            {
                merged += word1[i];
            }
            if (i < len2)
            {
                merged += word2[i];
            }
        }
        return merged;
    }
};
