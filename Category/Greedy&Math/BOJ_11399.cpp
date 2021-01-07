#include <iostream>
#include <algorithm>
using namespace std;

int t[1000];

int main(){
    int n;
    int result=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    sort(t,t+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            result+=t[j];
        }
    }
    cout<<result<<"\n";
}