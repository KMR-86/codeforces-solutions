#include<bits/stdc++.h>
#define S 1000000
using namespace std;
int gray_code (int n) {
    return n ^ (n >> 1);
}
int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc;
cin>>tc;
while(tc--){
    int n,k;
    cin>>n>>k;
    cout<<gray_code(k)<<endl;

}
return 0;
}



