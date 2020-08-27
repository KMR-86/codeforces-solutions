#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

long long int n;
cin>>n;
while(n!=1){
    cout<<n<<" ";
    if(n%2==0)n/=2;
    else n=3*n+1;
}
cout<<n;



return 0;
}



