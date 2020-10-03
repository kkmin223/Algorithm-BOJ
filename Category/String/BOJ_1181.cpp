#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string a, string b){
  if(a.size()!=b.size())
    return a.size()<b.size();
  else return a<b;
}

int main(){
  vector <string> vc;
  int n;
  cin>>n;
  string temp;
  for(int i=0;i<n;i++){
    cin>>temp;
    vc.push_back(temp);
  }
  vector<string>:: iterator it;
  vector<string>:: iterator end_it;
  sort(vc.begin(),vc.end(),cmp);
  end_it=unique(vc.begin(),vc.end());
  for(it=vc.begin();it<end_it;it++){
    cout<<*it<<"\n";
  }
}
//iterator를 안쓰면 런타임 에러
//container 사용 시 iterator를 이용하는게 더 좋은것같다(?)