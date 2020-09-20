#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
  
  while(1){
    string line;
    stack <char> st;
    bool result=true;
    getline(cin,line);
    if(line[0]=='.')
      break;
    for(int i=0;line[i]!='.';i++){
      if(line[i]=='('||line[i]=='['){
        st.push(line[i]);
      }
      else if(line[i]==')'){
        if(!st.empty()&&st.top()=='(')
          st.pop();
        else{ 
          result=false;
          break;
        }
      }
      else if(line[i]==']'){
        if(!st.empty()&&st.top()=='[')
          st.pop();
        else{ 
          result=false;
          break;
        }
      }
    }
    if(result&&st.empty()) cout<<"yes\n";
    else cout<<"no\n";
  }
  
  
}