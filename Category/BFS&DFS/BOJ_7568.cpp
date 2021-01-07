#include <iostream>
using namespace std;

int main() {
  int n;
  int cnt;
  int x[50]={0,};
  int y[50]={0,};
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>x[i]>>y[i];
  }
  for(int i=0;i<n;i++){
      cnt=1;
      for(int j=0;j<n;j++){
          if(i==j) continue;
          if(x[i]<x[j]&&y[i]<y[j])
            cnt++;
      }
      cout<<cnt<<"\n";
  }
}