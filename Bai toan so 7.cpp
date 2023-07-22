#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

	int d = 0, d1 = 0, d2 = 0,d3 = 0, d4 = 0;
	for(int i=0; i<n; i++) {
        if(s[i] == '7') {
            d += 1;
        }
        if(s[i] == '7' && s[i+1] == '7') {
            d1 += 1;
        }
        if(s[i] == '7' && s[i+1] == '7' && s[i+2] == '7') {
            d2 += 1;
        }
        if(s[i] == '7' && s[i+1] == '7' && s[i+2] == '7' && s[i+3] == '7') {
            d3 += 1;
        }
        if(s[i] == '7' && s[i+1] == '7' && s[i+2] == '7' && s[i+3] == '7'&& s[i+4] == '7') {
            d4 += 1;
        }
    }
    if(d != 0) cout<<"1"<<" "<<d<<"\n";
    if(d1 != 0) cout<<"2"<<" "<<d1<<"\n";
    if(d2 != 0) cout<<"3"<<" "<<d2<<"\n";
    if(d3 != 0) cout<<"4"<<" "<<d3<<"\n";
    if(d4 != 0) cout<<"5"<<" "<<d4;
}

