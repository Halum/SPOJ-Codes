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
    char unit[5];
    double data, res;
    scanf("%d",&T);

    for(j=1; scanf("%lf %s",&data,unit)!=EOF; j++)
    {

        if(!(strcmp(unit,"kg"))){
            res = data*2.2064;
            printf("%d %.4lf lb\n",j,res);
        }
        else if(!(strcmp(unit,"l"))){
            res = data*.2642;
            printf("%d %.4lf g\n",j,res);
        }
        else if(!(strcmp(unit,"lb"))){
            res = data*.4536;
            printf("%d %.4lf kg\n",j,res);
        }
        else if(!(strcmp(unit,"g"))){
            res = data*3.7854;
            printf("%d %.4lf l\n",j,res);
        }
    }

    return 0;
}


