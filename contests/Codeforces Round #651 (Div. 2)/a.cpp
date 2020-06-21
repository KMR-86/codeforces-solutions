#include<bits/stdc++.h>

using namespace std;
vector <int> v(1000002,1);
void set_gcd(){
    for(int i=2;i<1000002;i++){
        for(int j=2*i;j<1000002;j=j+i){
            v[j]=i;
        }
    }

}
int main(){
set_gcd();
int cases;
cin>>cases;
while(cases--){
    int n;
    cin>>n;
    int mx=-1;
    for(int i=1;i<=n;i++){
        if(mx<v[i])mx=v[i];
    }
    cout<<mx<<endl;

}

return 0;
}
