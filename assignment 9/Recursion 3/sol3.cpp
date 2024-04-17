#include <iostream>
#include <vector>
using namespace std;

void generateArrays(const vector<int>& A, const vector<int>& B, vector<int>& current, int indexA, int indexB, bool fromA) {
    // Base case: if both arrays are exhausted, print the current array if it ends with an element from B
    if (indexA == A.size() && indexB == B.size()) {
        if (!current.empty() && !fromA) {
            for (int num : current) {
                cout << num << " ";
            }
            cout << endl;
        }
        return;
    }

    // If the current element should be taken from A
    if (fromA) {
        for (int i = indexA; i < A.size(); i++) {
            if (current.empty() || A[i] > current.back()) {
                current.push_back(A[i]);
                generateArrays(A, B, current, i + 1, indexB, false);
                current.pop_back();
            }
        }
    } else { // If the current element should be taken from B
        for (int i = indexB; i < B.size(); i++) {
            if (B[i] > current.back()) {
                current.push_back(B[i]);
                generateArrays(A, B, current, indexA, i + 1, true);
                current.pop_back();
            }
        }
    }
}

int main() {
    vector<int> A = {10, 15, 25};
    vector<int> B = {1, 5, 20, 30};
    vector<int> current;

    cout << "Generated arrays:" << endl;
    generateArrays(A, B, current, 0, 0, true);

    return 0;
}