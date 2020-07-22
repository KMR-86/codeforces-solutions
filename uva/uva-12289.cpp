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
while(tc--){
    string s;
    cin>>s;
    if(s.size()==5){
        cout<<"3"<<endl;
    }
    else{
        int flag=0;
        string t="two";
        for(int i=0;i<3;i++){
            if(s[i]==t[i]){
                flag++;

            }
        }
        if(flag>1)cout<<"2"<<endl;
        else cout<<"1"<<endl;
    }
}


return 0;
}




