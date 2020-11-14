#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;

int main(){
  map <int,string> dic1;
  map <string,int> dic2;
  char name[21];
  int N,M;
  scanf("%d %d",&N,&M);
  for(int i=1;i<=N;i++){
    scanf("%s",name);
    dic1.insert(make_pair(i,name));
    dic2.insert(make_pair(name,i));
  }
  while(M--){
    char temp[21];
    scanf("%s",temp);
    if(temp[0]>='A'&&temp[0]<='Z'){
      printf("%d\n",dic2[temp]);
    }
    else{
      int a=stoi(temp);
      printf("%s\n",dic1[a].c_str());
    }  
  }
}
/*
처음에 int를 key로 쓰는 map 하나만 썼을 때는 value로 key값을 찾을 때 시간초과가 생김
그래서 int를 key로 쓰는 map과 string 을 key로 쓰는 map을 각각 만들어
int로 string을 찾을때는 dic1, 반대의 경우 dic2를 사용해 시간초과 해결. 
*/