/*
ID: my.lost1
PROG: test
LANG: C++
*/
#include<cstdio>
#include<iostream>
#include<sstream>
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
#include<map>
//---------------------------------------------------->
#define sdum scanf("%c",&dummy)
#define pf printf
#define sf scanf
#define pn printf("\n")
#define sn scanf("\n")
#define pb push_back
#define ps push
#define pp pop
#define fr front
#define em empty
#define mp make_pair
#define sz size
#define fs first
#define sc second
#define cl clear
#define bg begin
#define en end
#define tp top
#define pq priority_queue
#define pii pair< int, int >
#define REP(variable, length) for(variable=0; variable<length; ++variable)
#define MS(array, value) memset(array, value, sizeof array)
#define CLEAR(q) while(q.size()) q.pop()
#define SHOW(array, arraySize) for(int i=0; i<arraySize; ++i) cout << array[i] << ' '
#define DREP(arraySize_1, arraySize_2) for(int i=0; i<arraySize_1; ++i) for(int j=0; j<arraySize_1; ++j)
#define DSHOW(array, arraySize_1, arraySize_2) for(int i=0; i<arraySize_1; ++i){ for(int j=0; j<arraySize_2; ++j) cout << array[i][j] << ' '; cout << endl; }
#define PI (2.0 * acos(0.0))
#define EPS 1e-12
#define SIZE 35
#define INF (1<<20)
//---------------------------------------------------->
typedef unsigned long long int ULL;
typedef long long int LL;
typedef unsigned int UI;
typedef long double LD;
using namespace std;
int t, len, n, sum, x, y, e, w, cary, ans, temp, total, MAX, MIN;
char ch, dum, *ptr;
bool check;
//---------------------------------------------------->

//---------------------------------------------------->
int main()    //4301
{
    long long n,k,s,cnt,box[1010],i,sum,ks;
    cin>>n>>k>>s;

        sum=k*s;
        for(i=0;i<n;i++)
        cin>>box[i];

        sort(box,box+n);
        ans = 0;

        for(i=1;i<=n;i++)
        {
            ans+=box[n-i];
            printf("%lld %lld %lld\n",i,n-i, box[n-i]);
            if(ans>=sum)
            break;
        }
        //cout<<i<<endl;



    return 0;
}
