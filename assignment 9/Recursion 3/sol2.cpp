#include <iostream>
#include <vector>
using namespace std;

void printIncreasingSequences(int k, int n, vector<int>& sequence) {
    // Base case: if the sequence is of length k, print it
    if (sequence.size() == k) {
        for (int num : sequence) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    // Recursively generate sequences
    for (int i = (sequence.empty() ? 1 : sequence.back() + 1); i <= n; i++) {
        sequence.push_back(i);
        printIncreasingSequences(k, n, sequence);
        sequence.pop_back();
    }
}

int main() {
    int k = 3; // Length of sequences
    int n = 5; // First n natural numbers

    vector<int> sequence;
    cout << "Increasing sequences of length " << k << " from first " << n << " natural numbers:" << endl;
    printIncreasingSequences(k, n, sequence);

    return 0;
}