#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    for (int i = 0; i < n; i++) {
        q.push({a[i], i});
    }

    vector<int> alive(n, 1);

    int day = 0;
    while (q.top().first != n) {
        int i = q.top().second;
        q.pop();
        alive[i] = 0;
        for (int j = max(0, i - 1); j <= min(n - 1, i + 1); j++) {
            if (alive[j]) {
                a[j]--;
                q.push({a[j], j});
            }
        }

        for (int j = max(0, i - 1); j <= min(n - 1, i + 1); j++) {
            alive[j] = 0;
        }

        day++;
    }

    cout << day << endl;

    return 0;
}

