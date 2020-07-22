#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);


string s;
int c=1;
while(cin>>s && s!="*"){
    if(s=="Hajj"){
        printf("Case %d: Hajj-e-Akbar\n",c++);
    }
    else{
        printf("Case %d: Hajj-e-Asghar\n",c++);
    }
}

return 0;
}




