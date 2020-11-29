#include <cstdio>

int arr[101];

int GCD(int a,int b){
  if(b==0) {
    return a;
  }
  else return GCD(b,a%b); 
}
int main(){
  int T;
  scanf("%d",&T);
  while(T--){
    long long sum=0;
    int len;
    scanf("%d",&len);
    for(int i=0;i<len;i++){
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<len-1;i++){
      for(int j=i+1;j<len;j++){
        sum+=GCD(arr[i],arr[j]);
      }
    }
    printf("%lld\n",sum);
  }
}

/*
유클리드 호제법을 이용한 최대공약수 구하기!
int GCD(int a,int b){
  if(b==0) {
    return a;
  }
  else return GCD(b,a%b); 
}

*/