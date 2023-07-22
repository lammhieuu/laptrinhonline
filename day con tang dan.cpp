#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1], count[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    set<int> heights;
    for (int i = n; i >= 1; i--) {
        heights.insert(a[i]);
        count[i] = heights.size();
    }
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << count[x] << endl;
    }
}
