#include <stdio.h>
#include <queue>

using namespace std;

int main(){
    priority_queue<int,vector<int>,less<int>> max_q;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x==0){
            if(max_q.empty()){
                printf("0\n");
            }
            else{
                printf("%d\n",max_q.top());
                max_q.pop();
            }
        }
        else{
            max_q.push(x);
        }
    }
}
/*
(1)에서 시간초과때문에 안되서 라이브러리의 힘을 빌림...
*/