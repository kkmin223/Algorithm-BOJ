#include <cstdio>
int dp[10001];
int MAX(int a,int b){
  return a>b ? a:b;
}
int main(){
  int n,max=-1;
  int input[10001];
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&input[i]);
  }
  dp[1]=input[1];
  dp[2]=input[1]+input[2];
  for(int i=3;i<=n;i++){
    dp[i]=MAX(dp[i-2]+input[i],dp[i-3]+input[i-1]+input[i]);
    dp[i]=MAX(dp[i],dp[i-1]);
  }
  for(int i=1;i<=n;i++){
    max=MAX(dp[i],max);
  }
  printf("%d\n",max);
}
/*
dp[i]는 dp[i-2]+input[i],dp[i-3]+input[i-1]+input[i]중 MAX로만 생각했었는데
i번째를 마시지않을경우를 빼먹어서 푸는데 시간이 걸림.
1000 1000 1 1 1000 1000의 반례를 보고 생각할수있게되었음.
*/