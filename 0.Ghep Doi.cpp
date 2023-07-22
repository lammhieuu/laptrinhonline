#include<bits/stdc++.h>
using namespace std;

int main(){
	int x, y;
	cin>>x>>y;
	int Min = min(x, y);
	int Same = (x - Min + y - Min) / 2;
	cout<<Min<<" "<<Same;
}


