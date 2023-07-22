#include<iostream>
#include <string>
using namespace std;

int main(){
	string a , b;
	cin>>a>>b;
	
	int sum = stoi(a);
	int minsum = stoi(a);
	for (int i = 0; i < a.size(); i++) {
        if (a[i] == '5') {
            sum += 1;
        }
        if (a[i] == '6') {
            minsum -= 1;
        }
    }
    
    int sum2 = stoi(b);
    int minsum2 = stoi(b);
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '5') {
            sum2 += 1;
        }
        if (b[i] == '6') {
            minsum2 -= 1;
        }   
    }
    
    cout<<sum+sum2<<" "<<minsum + minsum2;
}

