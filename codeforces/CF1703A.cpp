#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
     string s;
    cin>>t;
    while (t--){
       
        cin>>s;

        transform(s.begin(),s.end(),s.begin(),:: tolower);

        if(s == "yes"){
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;

    }
    
    return 0;
}