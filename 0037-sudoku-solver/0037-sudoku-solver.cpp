class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        int ans=help(board,0,0);
    }
    int help(vector<vector<char>>& b ,int i,int j){
        // cout<<i <<","<<j<<" "<<endl;
        if(b[i][j]!='.'){
            if(i==8 && j==8)return 1;
            next(i,j);
            return help(b,i,j);
        }
        else{
            vector<int>op(9,1);
            for(int k=0;k<9;k++){
                if(b[i][k]!='.'){
                    op[b[i][k]-'1']=0;
                }
                if(b[k][j]!='.'){
                    op[b[k][j]-'1']=0;
                }
                int q = (i<3)?0:(i<6)?3:6;
                int y = (j<3)?0:(j<6)?3:6;
                for(int k=q;k<q+3;k++){
                    if(b[k][y]!='.')op[b[k][y]-'1']=0;
                    if(b[k][y+1]!='.')op[b[k][y+1]-'1']=0;
                    if(b[k][y+2]!='.')op[b[k][y+2]-'1']=0;

                }
            }
           
            cout<<endl;
            for(int k=0;k<9;k++){
                if(op[k]){
                    // cout<<"op"<<'1'+k<<" ";
                    b[i][j]= '1'+k;
                    if(i==8 && j==8)return 1;
                    int t=i,tt=j;
                    next(t,tt);
                    int res = help(b,t,tt);
                    if(res) return res;
                }
            }
        
        }
         b[i][j]='.';
        return 0;
    }
    void next(int &i,int &j){
        if(j==8){
            i++;
            j=0;
        }
        else j++;
    }
};