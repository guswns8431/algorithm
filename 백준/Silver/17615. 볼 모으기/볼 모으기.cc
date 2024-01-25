#include <iostream>
using namespace std;

char arr[500001];
int n, cnt, sw, m=500001;  //n=볼의 개수, m=최소값
int i, j;  //반복문에서 사용할 변수

void set(){
  sw=0;					
  m= cnt<m ? cnt : m;
  cnt=0;
}

int main() {
  cin>>n;
  cin>>arr;

  for(i=0; i<n; i++)		//빨간색을 왼쪽으로 모을 경우 
  {
    if(arr[i]=='B') sw=1;		//파란색이 나오는지 체크한다.
    if(sw && arr[i]=='R') cnt++;	//파란색이 나왔었는지 확인하고, 빨간색인지 확인하여 개수를 세준다.
  }set();				//다음 반복문을 위해 사용한 변수를 초기화를 해주고, 최소값을 구한다.
  for(i=n-1; i>=0; i--)		//빨간색을 오른쪽으로 모을 경우
  {
    if(arr[i]=='B') sw=1;
    if(sw && arr[i]=='R') cnt++;
  }set();

  for(i=0; i<n; i++)		//파란색을 왼쪽으로 모을 경우
  {
    if(arr[i]=='R') sw=1;
    if(sw && arr[i]=='B') cnt++; 
  }set();
  for(i=n-1; i>=0; i--)		//파란색을 오른쪽으로 모을 경우
  {
    if(arr[i]=='R') sw=1;
    if(sw && arr[i]=='B') cnt++;
  }set();

  cout<<m;
}