#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc;
int n,k;
string s;
cin>>n>>k;
cin>>s;

for(int i=0;i<k;i++){
    for(int j=0;j<n-1;j++){
        if(s[j]=='B' && s[j+1]=='G'){
            s[j+1]='B';
            s[j]='G';
            //break;
            j++;
        }
    }
}

cout<<s;


return 0;
}



