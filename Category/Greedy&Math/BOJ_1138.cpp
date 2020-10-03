#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N;
  int line[10];
  vector<int> result;
  cin>>N;
  for(int i=0;i<N;i++)
    cin>>line[i];
  for(int i=N-1;i>=0;i--){
    vector<int>::iterator iter=result.begin();
    for(int k=0;k<line[i];k++)
      iter++;
    result.insert(iter,i+1);
  }
  for(int i=0;i<result.size();i++)
    cout<<result[i]<<" ";
}