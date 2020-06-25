#include<bits/stdc++.h>

using namespace std;

int main()
{

    int tc;
    while(cin>>tc && tc!=0)
    {
        int px,py;
        cin>>px>>py;
        while(tc--)
        {

            int x,y;
            cin>>x>>y;

            if(x==px || y==py)
            {
                cout<<"divisa"<<endl;
            }
            else if(x>px && y>py)
            {
                cout<<"NE"<<endl;
            }

            else if(x<px && y<py)
            {
                cout<<"SO"<<endl;
            }

            else if(x>px && y<py)
            {
                cout<<"SE"<<endl;
            }

            else if(x<px && y>py)
            {
                cout<<"NO"<<endl;
            }
        }
    }





    return 0;
}

