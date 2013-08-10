#include<stdio.h>
#include<iostream>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<utility>
#include<functional>
#include<bitset>
#include<deque>
#include<set>
#include<algorithm>
#include<ctime>
#include<string>
#include<list>
#include<vector>
#include<stack>
#include<queue>
#include<map>  // END OF LIBRARY
#define sdum scanf("%c",&dummy)
#define pn printf("\n")
#define sc(char) scanf("%c",&char)
#define pc(char) printf("%c",char)
#define sn scanf("\n")
#define si(int) scanf("%d",&int)
#define pi(int) printf("%d",int)
#define ss(string) scanf("%s",string)
#define ps(string) printf("%s",string)
#define Z 10000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen, cary;
char ch, dummy;

int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int hav, need, frnd[1000];
    scanf("%d",&T);
    for(k=1; k<=T; k++)
    {
        cin>>need>>N;
        for(i=0; i<N; i++)
            cin>>frnd[i];
        printf("Scenario #%d:\n",k);

        sort(frnd, frnd+N);

        for(i=N-1, hav=j=0; i>=0; i--,j++){
            if(hav>=need) break;
            hav += frnd[i];
        }
        if(hav>=need) cout<<j<<endl<<endl;
        else cout<<"impossible\n\n";
    }

    return 0;
}
