/*
Two friends Anil and Sunil are playing a game. In this game the two friends take turns starting with Anil. Initially the score of both the friends is 0 and at each turn the player takes one of the numbers from an array nums from either end of the array nums which will decrease the size of the array by a unit of 1. The removed number is added to the score of the player. The game ends when his list becomes empty

Now return 1 if Anil can win the game or if tie occurs.else return 0.

Input Format

Input consists of 2 parts.

Second line consists of the size of the array.
Third line consists of the values pertaining to the respective array. Here all values in the array are seperated with spaces with one another.
Constraints

1 <= len(array) <= 20
0 <= array[i] <= 
Output Format

Return 1 if Anil can win the game or if tie occurs.else return 0.

Sample Input 0

3
5828304 2423600 6609855 
Sample Output 0

1
*/

#include <bits/stdc++.h>
using namespace std;

const int N=25;
int f[N][N];
int a[N];

int dp(int l,int r)
{
    if(l>r) return 0;
    if(f[l][r]!=-1) return f[l][r];
    f[l][r]=max(a[l]+min(dp(l+2,r),dp(l+1,r-1)),a[r]+min(dp(l+1,r-1),dp(l,r-2)));
    return f[l][r];
}

int main()
{
    int n;
    cin>>n;
    memset(f,-1,sizeof(f));
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=dp(0,n-1);
    if(ans*2>=accumulate(a,a+n,0)) cout<<"1\n";
    else cout<<"0\n";
    return 0;
}
