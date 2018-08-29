#include<bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm>
#include <iterator>
using   namespace   std;

bool cmp(const pair<int, int>  &p1, const pair<int, int> &p2)
{
    return p1.second < p2.second;
}

int main(){
    int p,s;
    cin >>  p>>s;
    int A[p][s],B[p][s];
    for(int x=0;x<p;x++){
        for(int y=0;y<s;y++)
            cin >>A[x][y];
        for(int y=0;y<s;y++)
            cin >>B[x][y];
        }
        for(int u=0;u<p;u++){
            for(int k = 0; k< s-1; k++) {
            // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations

              for(int i = 0; i < s-k-1; i++) {
                  if(A[u][ i ] > A[u][ i+1] ) {
                    // here swapping of positions is being done.
                      swap(A[u][i],A[u][i+1]);
                      swap(B[u][i],B[u][i+1]);
                    }
                  }
                }
            }
        //arrays sorted till here
        //now we will get the difficulty level
        map<int,int> diff;
        for(int x=1;x<=p;x++)
            diff[x]=0;
        for(int x=0;x<p;x++){
            for(int y=0;y<s-1;y++){
                if(B[x][y]>B[x][y+1])
                    diff[x+1]++;
            }
        }
         vector<pair<int, int> > v;
        copy(diff.begin(), diff.end(), back_inserter(v));

        sort(v.begin(), v.end(), cmp);

        for(int i = 0; i <p; ++i)
            cout << v[i].first<<" " <<v[i].second<< endl;





    return 0;

}
