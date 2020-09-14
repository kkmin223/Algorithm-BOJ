
#include <iostream>
#include <cstring>
using namespace std;
int map[51][51];
int visited[51][51];
int dx[]={-1,0,1,0,-1,1,-1,1};
int dy[]={0,-1,0,1,1,-1,-1,1};
int w,h;
int In(int x,int y){
  return x < 0||x >= h||x < 0||y >=w;
}
void dfs(int x,int y){
  visited[x][y]=1;
  for(int i=0;i<8;i++){
    int cur_x=x+dx[i];
    int cur_y=y+dy[i];
    if(In(cur_x,cur_y)) continue;
    if(!map[cur_x][cur_y]||visited[cur_x][cur_y]) continue;
    dfs(cur_x,cur_y);
  }
}

int main(){
  while(1){
    int cnt=0;
    cin>> w>>h;
    if(!w)
      break;
    memset(visited,0,sizeof(visited));
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        cin>>map[i][j];
      }
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        if(map[i][j]==1&&visited[i][j]!=1){
          dfs(i,j);
          cnt++;
        }
      }
    }
    cout<<cnt<<"\n";
  }

}