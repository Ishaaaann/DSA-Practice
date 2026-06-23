class Solution {
public:
    string reverseVowels(string s) {

        vector<int> vowelIndices;

        for(int i = 0; i < s.size(); i++) {

            char c = s[i];

            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
               c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {

                vowelIndices.push_back(i);
            }
        }

        int left = 0;
        int right = vowelIndices.size() - 1;

        while(left < right) {

            swap(s[vowelIndices[left]], s[vowelIndices[right]]);

            left++;
            right--;
        }

        return s;
    }
};
