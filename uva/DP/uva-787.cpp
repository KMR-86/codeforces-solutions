#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int tc;
while(scanf("%d",&tc)==1){
    vector<int>v;
    v.push_back(tc);
    int t;
    cout<<tc;
    while(scanf("%d",&t) && t!=-99999){
        v.push_back(t);
        cout<<t;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int prod=1;
    int ans=0;
    for(int i=0;i<v.size();i++){
        prod=prod*v[i];
        ans=max(prod,ans);
        if(ans<=0)prod=1;
    }
    cout<<ans<<endl;
}


return 0;
}




