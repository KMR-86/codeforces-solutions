#include<bits/stdc++.h>

using namespace std;

int mydiv(int a,int b){
if(a%b==0){
    return a/b;
}
else{
    return a/b+1;
}
}
int main(){

int tc;
cin>>tc;
while(tc--){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v[i]=t;
    }

    int mn=INT_MAX;
    int mx=-1;

    for(int i=0;i<n;i++){
        if(mn>v[i])mn=v[i];
        if(mx<v[i])mx=v[i];

    }

    cout<<2*(mx-mn)<<endl;


}

return 0;
}

