
#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int tc;
cin>>tc;
while(tc--){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v[i]=t;
    }
    sort(v.begin(),v.end());

    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]>1){
            flag=false;
        }

    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


return 0;
}



