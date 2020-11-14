#include <stdio.h>
#include <algorithm>
int dp[1001][3];
int main(){
  int n;
  int input[1001][3];
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d %d %d",&input[i][0],&input[i][1],&input[i][2]);
  }
  for(int i=1;i<=n;i++){
    for(int j=0;j<3;j++){
      dp[i][j]=std::min(dp[i-1][(j+1)%3],dp[i-1][(j+2)%3])+input[i][j];
    }
  }
  
  printf("%d\n",std::min(std::min(dp[n][0],dp[n][1]),dp[n][2]));
}