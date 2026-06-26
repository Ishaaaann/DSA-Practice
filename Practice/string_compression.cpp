class Solution {
public:
    int compress(vector<char>& chars) {

        vector<char> temp;
        int k = 1;

        for (int i = 1; i <= chars.size(); i++) {

            // Same character
            if (i < chars.size() && chars[i] == chars[i - 1]) {
                k++;
            }
            else {
                // Push the character
                temp.push_back(chars[i - 1]);

                // Push the count if > 1
                if (k > 1) {
                    string cnt = to_string(k);

                    for (char c : cnt)
                        temp.push_back(c);
                }

                k = 1;
            }
        }

        // Copy back into original array
        for (int i = 0; i < temp.size(); i++) {
            chars[i] = temp[i];
        }

        return temp.size();
    }
};
