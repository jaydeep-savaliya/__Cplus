#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string timeConversion(string s) {
        if (s.substr(s.length() - 2, 2) == "PM") {
            if (stoi(s.substr(0, 2)) == 12) {
                return s.substr(0, s.length() - 2);
            }
            return to_string(stoi(s.substr(0, 2)) + 12) + s.substr(2, s.length() - 2);
        } else if (stoi(s.substr(0, 2)) == 12) {
            return "00" + s.substr(2, s.length() - 2);
        } else {
            return s.substr(0, s.length() - 2);
        }
    }

private:
    string s;
};

int main() {
    string s = "07:05:45PM";
    Solution solution,*ptr;
    ptr = &solution;
    cout << ptr->timeConversion(s) << endl;
    return 0;
}
