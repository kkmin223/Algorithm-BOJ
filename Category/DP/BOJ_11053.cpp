#include <cstdio>
int dp[1001];
int MAX(int a,int b){
  return a>b ? a:b;
}
int main(){
  int n,max=-1;
  int input[1001];
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&input[i]);
  }
  
  for(int i=1;i<=n;i++){
    dp[i]=1;
    for(int j=1;j<i;j++){
      if(input[i]>input[j]){
        dp[i]=MAX(dp[j]+1,dp[i]);
      }
    }
  }
  for(int i=1;i<=n;i++){
    max=MAX(dp[i],max);
  }
  printf("%d\n",max);
}
/*
DP배열을 1로 초기화하지않으면 틀림.
dp[i]=1을 넣지않으니까 틀렸다고 나와서 찾는데 시간이 오래걸림.
*/