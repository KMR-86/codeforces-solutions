#include<bits/stdc++.h>
#define S 1000000
using namespace std;
int minDist(int arr[], int n, int x, int y)
{

    //previous index and min distance
    int p = -1, min_dist = INT_MAX;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
            //we will check if p is not equal to -1 and
            //If the element at current index matches with
            //the element at index p , If yes then update
            //the minimum distance if needed
            if( p != -1 && arr[i] != arr[p])
                min_dist = min(min_dist, i-p);

            //update the previos index
            p=i;
        }
    }
    //If distance is equal to int max
    if(min_dist==INT_MAX)
        return -1;

    return abs(min_dist);
}
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int tc;
    int n,m;


    while(scanf("%d%d",&n,&m)==2 && (n || m))
    {
        cout<<"here1"<<endl;
        int p[n];
        int cc[n][3]= {0};
        for(int i=0; i<n; i++)
        {
            p[i]=i;
        }
        int counter=0;
        for(int i=0; i<m; i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            cc[i][0]=a;
            cc[i][1]=b;
            cc[i][2]=c;
        }
        do
        {
            int flag=0;

            for(int i=0; i<m; i++)
            {
                int s=sizeof(p)/sizeof(int);
                int md=minDist(p,n,cc[i][0],cc[i][1]);
                //cout<<md<<"md\n";
                if(cc[i][2]>=0 && md>cc[i][2])
                {
                    flag=1;
                    break;
                }
                else if(cc[i][2]<0 && md<abs(cc[i][2]))
                {
                    flag=1;
                    break;
                }
                else
                {
                    flag=0;
                }





            }
            if(flag==0)
            {
                counter++;
            }

        }
        while (next_permutation(p, p + n));
        cout<<counter<<endl;


    }




    return 0;
}



