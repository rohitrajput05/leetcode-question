class Solution {
public:
    bool isValid(string s) { 
        int n = s.size();
        stack<char>st;
        char temp;
        for(int i =0; i<n; i++){
            temp = s[i];
            if(st.empty()){
                st.push(temp);
            }
            else if(temp == '(' || temp == '{' || temp == '['){
                st.push(temp);
            }
            else{
                if(st.empty()) return false;
                else if(st.top() == '(' &&temp ==')' || st.top()== '{' && temp == '}' || st.top()== '[' && temp == ']'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};