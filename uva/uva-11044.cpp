#include<bits/stdc++.h>

using namespace std;

int mydiv(int a,int b){
if(a%b==0){
    return a/b;
}
else{
    return a/b+1;
}
}
int main(){

int tc;
cin>>tc;
while(tc--){
    int x,y;
    cin>>x>>y;
    x=x-2;
    y=y-2;
    cout<<mydiv(x,3)*mydiv(y,3)<<endl;


}

return 0;
}

