#include<bits/stdc++.h>
#define S 1000000
using namespace std;


int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int g=0;
int n;
cin>>n;
int c=1;
int sum=0;
while(n!=0){
    if(n%10==7)sum+=c*2;
    else sum+=c;
    c=c*2;
    n/=10;
}
cout<<sum<<endl;
return 0;
}




