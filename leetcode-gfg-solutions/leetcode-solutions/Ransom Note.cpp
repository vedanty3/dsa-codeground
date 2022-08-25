// https : // leetcode.com/problems/ransom-note/

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> mpp;

        for (auto ch : magazine)
        {
            mpp[ch]++;
        }

        for (auto ch : ransomNote)
        {
            mpp[ch]--;
            if (mpp[ch] < 0)
                return false;
        }

        return true;
    }
};