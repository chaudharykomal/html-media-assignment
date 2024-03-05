#include <iostream>
#include <vector>

using namespace std;

bool isSubset(vector<int>& mainArr, vector<int>& subArr) {
    for (int num : subArr) {
        bool found = false;
        for (int mainNum : mainArr) {
            if (num == mainNum) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> mainArr = {1, 2, 3, 4, 5, 6, 7};
    vector<int> subArr1 = {3, 4, 7};
    vector<int> subArr2 = {1, 2, 8};

    if (isSubset(mainArr, subArr1)) {
        cout << "subArr1 is a subset of mainArr" << endl;
    } else {
        cout << "subArr1 is not a subset of mainArr" << endl;
    }

    if (isSubset(mainArr, subArr2)) {
        cout << "subArr2 is a subset of mainArr" << endl;
    } else {
        cout << "subArr2 is not a subset of mainArr" << endl;
    }

    return 0;
}
