#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        s[i]=s[i] | (1<<5);
    }
    cout<<s;
    return 0;
}