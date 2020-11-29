#include <cstdio>
int dp[501][501];
int MAX(int a,int b){
  return a>b ? a:b;
}

int main() {
  int n,max=-1;
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      scanf("%d",&dp[i][j]);
    }
  }
   for(int i=2;i<=n;i++){
    for(int j=1;j<=i;j++){
      if(j==1){
        dp[i][j]+=dp[i-1][j];
      }
      else if(j==n){
         dp[i][j]+=dp[i-1][j-1];
      }
      else{
        dp[i][j]+=MAX(dp[i-1][j-1],dp[i-1][j]);
      }

    }
  }
  for(int i=1;i<=n;i++){
    max=MAX(max,dp[n][i]);
  }
  printf("%d\n",max);
}