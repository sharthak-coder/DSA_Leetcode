class Solution {
public:
    int maxDistinct(string s) {
        set<char> dosa;
        for (int i=0;i<s.length();i++)
        {
            dosa.insert(s[i]);
        }
        return dosa.size();
    }
};