#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc;
cin>>tc;
while(tc--){
    int n,x,y;
    cin>>x>>y>>n;
    int a=n/x;
    a=a*x;
    if(a+y>n)a=a-x;
    cout<<a+y<<endl;

}


return 0;
}



