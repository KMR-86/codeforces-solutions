#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main(){

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
int tc=0;
while(true){
    string s;
    cin>>s;
    if(s=="#")break;
    tc++;
    if(s=="HELLO")printf("Case %d: ENGLISH\n",tc);
    else if(s=="HOLA")printf("Case %d: SPANISH\n",tc);
    else if(s=="HALLO")printf("Case %d: GERMAN\n",tc);
    else if(s=="BONJOUR")printf("Case %d: FRENCH\n",tc);
    else if(s=="CIAO")printf("Case %d: ITALIAN\n",tc);
    else if(s=="ZDRAVSTVUJTE")printf("Case %d: RUSSIAN\n",tc);
    else {printf("Case %d: UNKNOWN\n",tc);}

}


return 0;
}



