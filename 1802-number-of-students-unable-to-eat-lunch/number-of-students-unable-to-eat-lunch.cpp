class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c0=0,c1=0;
        for(int i=0;i<students.size();i++)
        {
            if(students[i]==0) c0++;
            else c1++;
        }
        for(int i=0;i<sandwiches.size();i++)
        {
            if(sandwiches[i]==0){
                if(c0==0) return c1;
                c0--;
            }
            if(sandwiches[i]==1){
                if(c1==0) return c0;
                c1--;
            }
        }
        return 0;
    }
};