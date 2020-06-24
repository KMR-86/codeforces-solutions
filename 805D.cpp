#include<bits/stdc++.h>

using namespace std;

int main()
{
string str;
cin>>str;
long long int c=0;
int index=0;
while (true)
            {
                ///cout<<str<<endl;
                index = str.find("ab", index);
                if(index==-1)
                {
                    break;
                }
                str.replace(index, 2, "bba");
                index=0;
                c=(c+1)%1000000007;


}

cout<<c<<endl;
return 0;
}

