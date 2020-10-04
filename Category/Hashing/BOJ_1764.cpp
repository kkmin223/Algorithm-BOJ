#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){
  int n,m,cnt=0;
  vector <string> v;
  vector <string> result;
  cin>>n>>m;
  for(int i=0;i<n+m;i++){
    string temp;
    cin>>temp;
    v.push_back(temp);
  }
  sort(v.begin(),v.end());
  for(int i=1;i<n+m;i++){
    if(v[i].compare(v[i-1])==0){
      result.push_back(v[i]);
    }
  }
  vector<string>::iterator iter;
  cout<<result.size()<<"\n";
  for(iter=result.begin();iter!=result.end();iter++){
    cout<<*iter<<"\n";
  }
}
/*
정렬하지 않고 하나씩 비교하면 O(n*m)으로 시간초과
정렬하면 O(n)으로 시간초과x
*/