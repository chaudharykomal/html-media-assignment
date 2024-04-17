#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n) {
    if (n == 1) {
        return "1";
    }

    string prevSequence = countAndSay(n - 1);
    string result = "";
    int count = 1;

    for (int i = 0; i < prevSequence.length(); i++) {
        if (i < prevSequence.length() - 1 && prevSequence[i] == prevSequence[i + 1]) {
            count++;
        } else {
            result += to_string(count) + prevSequence[i];
            count = 1;
        }
    }

    return result;
}

int main() {
    int n = 4;
    cout << "countAndSay(" << n << ") = " << countAndSay(n) << endl;
    return 0;
}
