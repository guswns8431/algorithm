#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	cin >> str;
   
	string fan = ":fan:";

	cout << fan << fan << fan<<"\n";
	cout << fan << ":" << str << ":" << fan << "\n";
	cout << fan << fan << fan;

}