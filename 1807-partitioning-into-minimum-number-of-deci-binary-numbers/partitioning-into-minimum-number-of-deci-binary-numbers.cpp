class Solution {
public:
    int minPartitions(string n) {
        int dosa=0;
        for(int O=0;O<n.length();O++)
        {
            dosa=max(dosa,n[O]-'0');
        }
        return dosa;
    }
};