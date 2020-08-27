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
int f,s;
long long ans=0;
cin>>f;
while(n>1){
    cin>>s;
    if(f>s){
        ans=ans+f-s;
        s=f;
    }
    f=s;
    n--;
}
cout<<ans;

return 0;
}




