#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
vector<pair<string,int>> book(1001);
bool cmp(const pair<string,int> &a,const pair<string,int> &b){
  return a.second < b.second;
}
int insert_vector(string A){
  bool insert = false;
  if(book.size()==0){
    book[0]= make_pair(A,1);
    insert=true;
  }
  else{
    for(int i=0;i<book.size();i++){
    if(book[i].first==A){
      book[i].second++;
      insert=true;
      break;
      }
    }
  }
  if(!insert)
    book[book.size()]=make_pair(A,1);
  
}
int main(){
  int n;
  cin>>n;
  for(int i=0;i<=n;i++){
    string A;
    cin >> A;
    insert_vector(A);
  }
  sort(book.begin(),book.end(),cmp);
  cout << book[0].first<<endl;
}