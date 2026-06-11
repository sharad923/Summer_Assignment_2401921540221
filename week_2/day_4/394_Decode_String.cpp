class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> words;

        string curr = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                counts.push(num);
                words.push(curr);

                num = 0;
                curr = "";
            }
            else if (ch == ']') {
                int repeat = counts.top();
                counts.pop();

                string temp = words.top();
                words.pop();

                for (int i = 0; i < repeat; i++) {
                    temp += curr;
                }

                curr = temp;
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};