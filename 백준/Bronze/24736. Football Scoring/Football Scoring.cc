#include <bits/stdc++.h>
using namespace std;


int main(){
    int score[2];
    int info[5];
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    for(int k = 0; k < 2; k++){
        for(int i = 0; i < 5; i++)
            cin >> info[i];
        score[k] = info[0] * 6 + info[1] * 3 + info[2] * 2 + info[3] + info[4] * 2;
    }
    for(int i = 0; i < 2; i++)
        cout << score[i] << ' ';
    
    return (0);
}