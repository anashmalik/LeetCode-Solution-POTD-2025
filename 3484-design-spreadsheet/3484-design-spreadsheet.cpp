class Spreadsheet {
public:
    vector<vector<int>>sp;
    Spreadsheet(int rows) {
        vector<vector<int>>s(26,vector<int>(rows,0));
        sp=s;
    }
    
    void setCell(string cell, int value) {
        auto x = convertf(cell);
        sp[x.first][x.second]=value;
        
    }
    
    void resetCell(string cell) {
        auto x = convertf(cell);
        sp[x.first][x.second]=0;
    }
    
    int getValue(string s) {
    s = s.substr(1); // remove '='

    int result = 0;
    char op = '+';   // default operator

    string token;
    for (char c : s + "+") { // add '+' at end to flush last token
        if (c == '+' || c == '-' || c == '*' || c == '/') {
            // process token
            if (!token.empty()) {
                int val;
                if (isalpha(token[0])) {
                    auto [r, c] = convertf(token);
                    val = sp[r][c];
                } else {
                    val = stoi(token);
                }

                // apply operator
                if (op == '+') result += val;
                else if (op == '-') result -= val;
                else if (op == '*') result *= val;
                else if (op == '/') result /= val;
            }
            token.clear();
            op = c;
        } else {
            token += c;
        }
    }

    return result;        
    }
private:
    pair<int ,int > convertf (string s){
        return {s[0]-'A',stoi(s.substr(1))};
    }

};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */