class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int sum = 0;
        int sum1 = 0;

        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            sum += c;
        }

        for (int j = 0; j < t.length(); j++)
        {
            char c = t[j];
            sum1 += c;
        }

        int diff = abs(sum - sum1);
        return char(diff);
    }
}