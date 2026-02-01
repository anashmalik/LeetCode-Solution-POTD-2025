class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        int n=students.size(),t=0,x=0;
        for(int i=0;i<n;i++)q.push(i);
        while(!q.empty() && q.size() !=t){
            int h=q.front();
            q.pop();
            if(students[h]==sandwiches[x]){
                x++;
                t=0;
            }
            else{
                t++;
                q.push(h);
            }
        }
        return q.size();
    }
};