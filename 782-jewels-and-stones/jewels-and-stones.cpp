class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char>cake;
        int dosa = 0;
        for (int i=0;i<jewels.length();i++)
            cake.insert(jewels[i]);
        for (int i=0;i<stones.length();i++)
            if (cake.find(stones[i]) != cake.end())
                dosa++;
        return dosa;
    }
};