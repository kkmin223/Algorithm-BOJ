#include <iostream>
#include <queue>
using namespace std;

int map[100001];
int cnt[100001];
int n,k;

void search(int a){
    queue <int> q;
    q.push(a);
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        if(temp==k) break;
        if(temp-1>=0){
            if(map[temp-1]==0){
                q.push(temp-1);
                map[temp-1]++;
                cnt[temp-1]=cnt[temp]+1;
            }  
        }
        if(temp+1<=100000){
            if(map[temp+1]==0){
                q.push(temp+1);
                map[temp+1]++;
                cnt[temp+1]=cnt[temp]+1;
            }
        }
        if(temp*2<=100000){
            if(map[temp*2]==0){
                q.push(temp*2);
                map[temp*2]++;
                cnt[temp*2]=cnt[temp]+1;
            }
        }
    }
}

int main(){
cin>>n>>k;
search(n);
cout<<cnt[k]<<"\n";
}