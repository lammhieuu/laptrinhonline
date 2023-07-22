#include<bits/stdc++.h>
using namespace std;

double calculateDistance(double x1, double x2) {
    return abs(x1 - x2); // khoang cach giua 2 nha 
}

int main() {
    int n;
    cin >> n;

    vector<double> positions(n); //doc vao so luong ban be va vi tri cua tung ban be 
    for (int i = 0; i < n; i++) {
        cin >> positions[i];
    }

    sort(positions.begin(), positions.end()); // sap xep theo thu tu tang dan

    double median;
    if (n % 2 == 0) {
        int mid = n / 2;
        median = (positions[mid-1] + positions[mid]) / 2.0;
    } else {
        median = positions[n/2];
    }

    double totalDistance = 0.0;
    for (int i = 0; i < n; i++) {
        totalDistance += calculateDistance(median, positions[i]); // ham tinh khoang cach giua 2 diem tren Ox
    }

    cout << totalDistance << endl;

    return 0;
}

