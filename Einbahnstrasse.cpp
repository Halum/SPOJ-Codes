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
#define SIZE 105
#define INF (1<<29)
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
int d[SIZE][SIZE], tow[1010];
map < string, int > indexOf;

void Floyd(){
    for(int k = 1; k < total; ++k)
            for(int i = 1; i < total; ++i)
                for(int j = 1; j < total; ++j)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int add_city(const char *name){
    int &x = indexOf[name];
    if(!x) x = total++;
    return x;
}

//---------------------------------------------------->
int main()    //4555
{
    register int i, j, k=1, l=0;
    #define DEB if(0)
    DEB freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
//---------------------------------------------------->
    int c;
    char c1[16], edge[16], c2[16];
    l = 0;

    while(scanf("%d %d %d", &n, &c, &e) == 3 && (c + n + e)){
        int a, b;
        REP(i,n+1) REP(j, n+1) d[i][j] = INF;
        indexOf.clear();
        sum = 0;
        total = 1;
        ++c;

        REP(i, c){
            scanf("%s", c1);
            tow[i] = add_city(c1);
        }

        REP(i,e){
            scanf("%s %s %s", c1, edge, c2);
            sscanf(edge + 2, "%d", &w);
            a = add_city(c1);
            b = add_city(c2);

            if(edge[0] == '<') d[b][a] = min(d[b][a], w);
            if(edge[strlen(edge) - 1] == '>') d[a][b] = min(d[a][b], w);
        }

        Floyd();

        REP(i,c-1)
            sum += d[1][tow[i+1]] + d[tow[i+1]][1];
        /* Show case number followed by answer */
        printf("%d. %d\n", ++l, sum);
    }

    return 0;
}

