#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,j,i,flag=0,c=0,a[4],p=0,q=0;
    a[0]=0;
    a[1]=0;
    a[2]=0;
    a[3]=0;
    scanf("%d",&n);
    a[n]=1;
    for(i=0;i<3;i++){
        scanf("%d %d",&p,&q);
        if(p==n){a[q]=1;a[p]=0;n=q;}
        else if(q==n){a[p]=1;a[q]=0;n=p;}
    }
    if(a[1]==1)printf("1");
    if(a[2]==1)printf("2");
    if(a[3]==1)printf("3");
    return 0;
}
