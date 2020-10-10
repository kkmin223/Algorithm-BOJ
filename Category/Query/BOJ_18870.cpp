#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> v;
int getidx(int x){
  return lower_bound(v.begin(), v.end(),x)-v.begin();
}

int main(){
  int n;
  int arr[1000001];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    v.push_back(arr[i]);
  }
  sort(v.begin(),v.end());
  v.erase(unique(v.begin(),v.end()),v.end());
  for(int i=0;i<n;i++){
    printf("%d ",getidx(arr[i]));
  }
}
/*
★좌표압축★
좌표의 범위가 너무 큰 경우 인덱싱을 이용하여
좌표의 범위를 압축해주는 기법이다.
*/