#include<bits/stdc++.h>
#define S 1000001
using namespace std;


int main()
{
    int cases;
    cin>>cases;


    while(cases--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"FastestFinger"<<endl;
        }
        else if(n%2==1)
        {
            cout<<"Ashishgup"<<endl;
        }
        else
        {
            int p2=0;
            while(n%2==0)
            {
                n=n/2;
                p2++;
            }
            int pp=0;
            for (int i = 3; i <= sqrt(n); i = i + 2)
            {

                while (n % i == 0)
                {
                    pp++;
                    n = n/i;
                }
            }
            if(n>2){
                pp++;
            }

            if(p2>1 && pp>0){
                cout<<"Ashishgup"<<endl;
            }
            else if(p2>1 && pp==0){
                cout<<"FastestFinger"<<endl;
            }
            else if(p2==1 && pp==1){
                cout<<"FastestFinger"<<endl;
            }
            else{
                cout<<"Ashishgup"<<endl;
            }

        }

    }

    return 0;
}
