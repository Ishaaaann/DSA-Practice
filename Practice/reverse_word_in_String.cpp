class Solution {
public:
    string reverseWords(string s) {

        stack<char> st;
        string result = "";

        for(int i = s.size() - 1; i >= 0; i--) {

            if(s[i] != ' ') {
                st.push(s[i]);
            }
            else {

                while(!st.empty()) {
                    result.push_back(st.top());
                    st.pop();
                }

                result.push_back(' ');
            }
        }

        while(!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        string finalResult = "";
        bool previousWasSpace = true;

        for(int i = 0; i < result.size(); i++) {

            if(result[i] != ' ') {
                finalResult.push_back(result[i]);
                previousWasSpace = false;
            }
            else {

                if(!previousWasSpace) {
                    finalResult.push_back(' ');
                    previousWasSpace = true;
                }
            }
        }

        while(!finalResult.empty() && finalResult.back() == ' ') {
            finalResult.pop_back();
        }

        return finalResult;
    }
};
