using namespace std;
#include <bits/stdc++.h>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    while(k--){
        if (n%10){
            n--;
        }else{
            n/=10;
        }
    }
    cout << n << "\n";
}
