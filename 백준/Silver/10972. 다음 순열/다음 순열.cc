#include <iostream>
#include <algorithm>
#define endl "\n"
using namespace std;

int arr[10000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num;
    int sectionIndex = -1;
    cin >> num;
    
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = num - 1; i >= 1; i--)
    {
        if(arr[i] > arr[i - 1])
        {
            sectionIndex = i - 1;
            break;
        }
    }
    
    if(sectionIndex == -1)
    {
        cout<< "-1" << endl;
        return 0;
    }
    
    for(int i =  num - 1; i > sectionIndex; i--)
    {
        if(arr[sectionIndex] < arr[i])
        {
            swap(arr[sectionIndex], arr[i]);
            break;
        }
    }
    
    sort(arr + sectionIndex + 1, arr + num);
    
    for(int i = 0; i< num; i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}
