#include <iostream>
#include <algorithm>
using namespace std; 

int main() {
    int arr[51];
    int n;
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int ans = arr[0] * arr[n - 1];
    cout << ans;
    
}