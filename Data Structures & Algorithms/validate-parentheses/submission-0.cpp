class Solution {
public:
    bool isValid(string s) {
        stack<char> stos;
        for(char c : s){
            if(c == '(' or c == '[' or c == '{'){
                stos.push(c);
            }else{
                if(stos.empty()){
                    return false;
                }else{
                    if((c == ')' and stos.top() != '(') 
                    or c == ']' and stos.top() != '['
                    or c == '}' and stos.top() != '{'){
                        return false;
                    }
                    stos.pop();
                }
            }
        }
        return stos.empty();
    }
};
