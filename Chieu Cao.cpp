#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> count(n);
    unordered_set<int> heights;
    for (int i = n-1; i >= 0; i--) {
        heights.insert(a[i]);
        count[i] = heights.size();
    }
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << count[x-1] << endl;
    }
    return 0;
}

