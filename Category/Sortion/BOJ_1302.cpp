#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<string,int>> book(1001);
int n;
bool cmp(const pair<string,int> &a,const pair<string,int> &b){
  return a.second < b.second;
}
/*
void insert_vector(string A){
  bool insert=false;
  if(book.empty())
    book.push_back(make_pair(A,1)); 
  else{
    for(int i=0;i<book.size();i++){
    if(A==book[i].first){
      book[i].second++;
      insert=true;
      }
    }
  }
  if(!insert)
    book.push_back(make_pair(A,1));  
} 
*/
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    string A;
    cin >> A;
    //insert_vector(A);
    bool insert=false;
  if(book.empty()){
    book.push_back(make_pair(A,1)); 
    cout << book.front().first<<endl;
  }
  else{
    for(int i=0;i<book.size();i++){
    if(A==book[i].first){
      book[i].second++;
      insert=true;
      }
    }
  }
  if(!insert)
    book.push_back(make_pair(A,1));  
  }
  //sort(book.begin(),book.end(),cmp);
  //sort(book.begin(),book.end());
  cout << book.front().second<<endl;
  cout << book.front().first<<endl;
}