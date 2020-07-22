#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int tc;
cin>>tc;
while(tc--){
    long long int n;
    string str;
    cin>>str;
    string rev=str;
    reverse(rev.begin(),rev.end());

    if(str=="1" || str=="4" || str=="78"){
        cout<<"+"<<endl;
    }
    else if(str[str.size()-1]=='5' && str[str.size()-2]=='3'){
        cout<<"-"<<endl;
    }
    else if(str[0]=='9' && rev[0]=='4'){
        cout<<"*"<<endl;
    }
    else if (str[0]=='1' && str[1]=='9' &&str[2]=='0'){
        cout<<"?"<<endl;
    }
    else{
        cout<<"?"<<endl;
    }
}


return 0;
}




