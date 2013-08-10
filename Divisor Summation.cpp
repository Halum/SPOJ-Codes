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
#define Z 500000
////
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
using namespace std;
int T, N, len, sum, x, y, pen, cary;
char ch, dummy;
int a[Z];
int main()
{
    register int i, j, k, l=0;
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);

    for(i=2; i<=Z; i++){
        a[i]+=1;
        for(j=i+i; j<=Z; j+=i)
            a[j] += i;
    }


    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        printf("%d\n",a[N]);
    }

    return 0;
}
