#include <cstdio>
using namespace std;

int f(int a){
	if(a<=1){
		return 1;
	}
	
	return a*f(a-1);
}

int main(){
	int n,k,result=0;
	scanf("%d %d",&n,&k);
	if(k<0||k>n) printf("%d\n",result);
	else{
		result= f(n)/(f(k)*f(n-k));
		printf("%d\n",result);
	}

}