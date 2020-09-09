#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
  string s,result;
  stack <char> temp;
  int tag=0;
  getline(cin,s);
  result=s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='<'&&tag==0){
     tag++;
    }
    else if(s[i]=='>'&&tag==1){
      tag--;
      continue;
    }
    if(tag==0&&s[i]!=' ')
      temp.push(s[i]);
    if((tag==0&&s[i]==' ')||(s[i]=='<'&&tag==1)){
      while(!temp.empty()){
        result[i-temp.size()]=temp.top();
        temp.pop();
      }
    }
    if(tag==0&&s[i+1]=='\0'){
      while(!temp.empty()){
        result[i-temp.size()+1]=temp.top();
        temp.pop();
      }
    }
  }
  cout<<result;
  
}