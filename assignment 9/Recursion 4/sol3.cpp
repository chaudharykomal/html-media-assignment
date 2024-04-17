#include <iostream>
#include <vector>
#include <string>
using namespace std;

int longestCommonSubstring(string s1, string s2) {
    int m = s1.size();
    int n = s2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0)); // Initialize dp table with 0

    int maxLength = 0; // Variable to store the length of the longest common substring

    // Dynamic programming to fill the dp table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = max(maxLength, dp[i][j]);
            } else {
                dp[i][j] = 0; // If characters don't match, reset the length of the common substring
            }
        }
    }

    return maxLength;
}

int main() {
    string s1 = "abcdef";
    string s2 = "xbcdefg";
    
    int length = longestCommonSubstring(s1, s2);
    cout << "Length of the longest common substring: " << length << endl;

    return 0;
}
