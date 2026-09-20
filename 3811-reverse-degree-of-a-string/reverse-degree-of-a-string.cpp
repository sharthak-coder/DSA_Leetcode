class Solution {
public:
    int reverseDegree(string s) {
        int cake=0;
        for(int i=0;i<s.length();i++)
        {
            int dosa=26-(s[i]-'a');
            cake+=dosa*(i+1);
        }
        return cake;
    }
};