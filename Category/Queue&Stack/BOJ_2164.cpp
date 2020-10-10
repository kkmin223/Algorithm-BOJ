#include <stdio.h>
#include <queue>
using namespace std;
deque <int> dq;
int main(){
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    dq.push_back(i);
  }
  for(int i=1;i<n;i++){
    dq.pop_front();
    int temp=dq.front();
    dq.pop_front();
    dq.push_back(temp);
  }
  printf("%d\n",dq.front());
}