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
int c=1;
while(tc--){
    int flag=1;
    for(int i=0;i<3;i++){
        int t;
        cin>>t;
        if(t>20)flag=0;
    }
    if(flag)printf("Case %d: good\n",c++);
    else printf("Case %d: bad\n",c++);
}


return 0;
}




