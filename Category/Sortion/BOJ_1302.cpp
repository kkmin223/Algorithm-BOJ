#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int n;
  int cnt=0,Max=0;
  int top_book_num=0;
  cin>>n;
  vector<string> book(n);
  for(int i=0;i<n;i++){
    cin >> book[i];
  }
  sort(book.begin(),book.end());
  Max=cnt=1;
  top_book_num=0;
  for(int i=1;i<n;i++){
      if(book[i-1]==book[i]){
        cnt++;
      }
      else{
        cnt=1;
      }
      if(cnt>Max){
          Max=cnt;
          top_book_num=i;
        }
  }
  cout<<book[top_book_num]<<endl;
}