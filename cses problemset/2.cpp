#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int n;
cin>>n;
vector<int>v(n,0);
for(int i=0;i<n-1;i++){
    int t;
    cin>>t;
    v[t-1]=1;

}
for(int i=0;i<=n-1;i++){
    if(v[i]==0)cout<<i+1<<endl;
}



return 0;
}




