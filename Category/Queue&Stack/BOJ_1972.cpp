#include <stdio.h>
#include <queue>

using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> min_q;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x==0){
            if(min_q.empty()){
                printf("0\n");
            }
            else{
                printf("%d\n",min_q.top());
                min_q.pop();
            }
        }
        else{
            min_q.push(x);
        }
    }
}