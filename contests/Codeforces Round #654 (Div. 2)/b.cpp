#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc;
cin>>tc;
while(tc--){
    long long int n,k;
    cin>>n>>k;
    long long sum=0;
    if(n<=k)sum=n*(n-1)/2+1;
    else sum=k*(k+1)/2;
    cout<<sum<<endl;

}


return 0;
}



