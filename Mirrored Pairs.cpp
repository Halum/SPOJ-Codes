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
#define Z 1000000
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
    char a[5];
    printf("Ready\n");
    while(scanf("%c%c%c",&a[0],&a[1],&ch))
    {
        if(a[0]==' ' && a[1]==' ') break;
        if(a[0]=='b' && a[1]=='d') printf("Mirrored pair\n");
        else if(a[0]=='d' && a[1]=='b') printf("Mirrored pair\n");
        else if(a[0]=='p' && a[1]=='q') printf("Mirrored pair\n");
        else if(a[0]=='q' && a[1]=='p') printf("Mirrored pair\n");
        else printf("Ordinary pair\n");
    }


    return 0;
}
