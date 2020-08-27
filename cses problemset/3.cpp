#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int tc;
string str;
cin>>str;

if(str.size()==0){
    cout<<"0";
    return 0;
}
int mx=-1;
int c=1;
for(int i=0;i<str.size();i++){
    if(str[i]==str[i-1])c++;
    else{
        if(mx<c)mx=c;
        c=1;
    }
}
if(mx<c)mx=c;
cout<<mx<<endl;
return 0;
}




