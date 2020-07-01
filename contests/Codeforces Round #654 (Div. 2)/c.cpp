#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc;
cin>>tc;
while(tc--){
    long long int a,b,n,m;
    cin>>a>>b>>n>>m;
    if((a+b)>=(n+m) && abs(m-n)<a && abs(m-n)<b){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

return 0;
}



