#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int,string> a, pair<int,string> b){
  return a.first<b.first;
}

int main(){
  vector <pair<int,string>> vc;
  int n;
  cin>>n;
  string temp;
  int age;
  for(int i=0;i<n;i++){
    cin>>age>>temp;
    vc.push_back(make_pair(age,temp));
  }
  vector<pair<int,string>>:: iterator it;
  stable_sort(vc.begin(),vc.end(),cmp);

  for(it=vc.begin();it<vc.end();it++){
    cout<<it->first<<" "<<it->second<<"\n";
  }
}
/*
sort() 와 stable_sort()의 차이
  sort()는 quik_sort알고리즘을 사용해 unstable
  stable_sort()는 merge_sort알고리즘을 사용해 stable
나이가 같을 시 가입한 순서대로 출력하려면 stabl_sort()를 사용해야함.
*/