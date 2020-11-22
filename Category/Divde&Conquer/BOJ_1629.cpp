#include <cstdio>
int a,b,c;
int sol(int x,int y);
int main() {
  scanf("%d %d %d",&a,&b,&c);
  printf("%d\n",sol(a,b));
}
int sol(int x,int y){
  if(y==0)
    return 1;
  int temp=sol(x,y/2);
  int result=(1LL*temp*temp) %c;
  if(y%2) result=1LL*result*x%c;
  return result;
}
/*
분할정복법은 주어진 문제를 작은 사례로 나누고(Divide) 각각의 작은 문제들을 해결하여 정복 (Conquer)하는 방법이다.
분할정복법은 문제의 사례를 2개 이상의 더 작은 사례로 나눈다. 이 작은 사례는 주로 원래 문제에서 따온다. 나눈 작은 사례의 해답을 바로 얻을 수 있으면 해를 구하고 아니면  더 작은 사례로 나눈다.
해를 구할 수 있을 만큼 충분히 더 작은 사례로 나누어 해결하는 방법이다.
아직 재귀함수를 다루는 법을 잘 모르겠음.(위방식은 네이버 블로그 방식)
아래 코드(처음 내 방식)
#include <cstdio>
#include <math.h>
int sol(int x,int y, int z);
int main() {
  int a,b,c;
  int result;
  scanf("%d %d %d",&a,&b,&c);
  result=sol(a,b,c);
  printf("%d\n",result);
}
int sol(int x,int y,int z){
  int mid;
  int result=0;
  mid=y/2;
  if(mid<2){
  result=int(pow(x,mid)*pow(x,y-mid))%12;
  return result%12;
  }
  return (sol(x,mid,z)*sol(x,y-mid,z))%12;
}
분할정복에대한 문제를 더 풀어봐야할거같음.
*/