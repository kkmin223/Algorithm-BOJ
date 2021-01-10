#include <stdio.h>
#include <math.h>

int main(){
    int n,r,c,result=0;
    scanf("%d %d %d",&n,&r,&c);
    while(n){
        int a,x;
        x=pow(2,n-1);
        if(r<x&&c<x) a=0;
        else if(r>=x&&c<x) a=2;
        else if(r<x&&c>=x) a=1;
        else a=3;
        result+=pow(x,2)*a;
        r=r%x;
        c=c%x;
        n--;
    }
    printf("%d\n",result);

}