#include <iostream>
#include <math.h>
using namespace std;
int GCD(int A,int B){
  return B ? GCD(B,A%B) : A;

}
int main(){
  int m,n,gcd,lcm;
  cin>>m>>n;
  gcd=GCD(m,n);
  lcm=(m*n)/gcd;
  cout<<gcd<<"\n"<<lcm;
  
}
//유클리드 호제법을 이용한 최대공약수 구하기
//최소공배수 = 두수의곱/최대공약수