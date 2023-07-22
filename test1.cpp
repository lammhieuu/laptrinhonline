#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findIncreasingSubsequences(vector<int> a, vector<int> curSeq, int pos)
{
    if (curSeq.size() >= 2) {
        for (int i = 0; i < curSeq.size(); i++) {
            cout << curSeq[i] << " ";
        }
        cout << endl;
    }

    for (int i = pos + 1; i < a.size(); i++) {
        if (a[i] > curSeq.back()) {
            curSeq.push_back(a[i]);
            findIncreasingSubsequences(a, curSeq, i);
            curSeq.pop_back();
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        vector<int> curSeq;
        curSeq.push_back(a[i]);
        findIncreasingSubsequences(a, curSeq, i);
    }
    return 0;
}

