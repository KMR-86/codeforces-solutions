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
long long int sum=0;
while(tc--){
    int n;
    string s;
    cin>>s;
    if(s=="donate"){
        cin>>n;
        sum+=n;
    }
    else{
        cout<<sum<<endl;
    }
}


return 0;
}




