#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int map[50][50];
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
int visited[50][50];
int M,N,K;
void BFS(int y,int x){
  queue<pair<int ,int>> q;
  q.push(make_pair(y,x));
  visited[y][x]=1;
  while(!q.empty()){
    int y=q.front().first;
    int x=q.front().second;
    q.pop();
    for(int i=0;i<4;i++){
      int nx=x+dx[i];
      int ny=y+dy[i];
      if(0<=nx&&nx<M&&ny>=0&&ny<N){
        if(visited[ny][nx]==0&&map[ny][nx]==1){
          visited[ny][nx]=true;
          q.push(make_pair(ny,nx));
        }
      }
    }
  } 
}
int main(){
  int T;
  cin>>T;
  int tempx,tempy;
  while(T--){
    int cnt=0;
    memset(map,0,sizeof(map));
    memset(visited,0,sizeof(visited));
    cin>> M >> N>> K;
    for(int i=0;i<K;i++){ 
      cin>>tempx>>tempy;
      map[tempy][tempx]=1;
    }
    for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
        if(map[i][j]==1&&visited[i][j]==0){
          BFS(i,j);
          cnt++;
        }
      }
    }
    cout<<cnt<<endl;
  }
}