#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
  string input;
  list<char> sentence;
  int M;
  cin>>input>>M;
  for(int i=0;i<input.size();i++){
    sentence.push_back(input[i]);
  }
  list<char>::iterator cur=sentence.end();
  while(M--){
    char order;
    cin>> order;
    if(order=='L'){
      if(cur!=sentence.begin())
        cur--;
    }
    else if(order=='D'){
      if(cur!=sentence.end())
        cur++;
    }
    else if(order=='B'){
      if(cur!=sentence.begin()){
        cur=sentence.erase(--cur);
      }
    }
    else if(order=='P'){
      char A;
      cin>>A;
      sentence.insert(cur,A);

    }
  }
  for(list<char>::iterator it=sentence.begin();it!=sentence.end();it++)
    cout<<*it;
}