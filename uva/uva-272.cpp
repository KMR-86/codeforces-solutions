#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int N;
    int ct=0;
    while(cin>>N)
    {
        if(N==0)break;
        if(ct!=0)cout<<endl;
        ct++;
        int c=0;
        for (int fghij = 1234; fghij <= 98765 / N; fghij++)
        {
            int abcde = fghij * N; // this way, abcde and fghij are at most 5 digits
            int tmp, used = (fghij < 10000); // if digit f=0, then we have to flag it
            tmp = abcde;
            while (tmp)
            {
                used |= 1 << (tmp % 10);
                tmp /= 10;
            }
            tmp = fghij;
            while (tmp)
            {
                used |= 1 << (tmp % 10);
                tmp /= 10;
            }
            if (used == (1<<10) - 1){
                printf("%0.5d / %0.5d = %d\n", abcde, fghij, N);
                c++;
            } // if all digits are used, print it

        }
        if(c==0){
            printf("There are no solutions for %d.\n",N);
        }
    }




    return 0;
}
