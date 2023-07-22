#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+5], D[n+5] = { };
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        D[i] = 1;
        for(int j = 1 ; j < i; j++)
            if(a[j] < a[i] && D[j]+1 > D[i])
                D[i] = D[j] + 1;
    }
    cout << *max_element(D+1, D + n + 1);
}

