#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> v(3);
    
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  for (int i = 0; i < 3; i++)
    cin >> v[i];

  sort(v.begin(), v.end());
  cout << v[1] << "\n";

  return (0);
}