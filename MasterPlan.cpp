#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;

        int v[n],w[n];
        for(int k=0; k<n; k++){
            cin>>v[k];
            cin>>w[k];
        }

        int p,W;
        cin>>p;
        while(p--){
            cin>>W;
            int i,j;
            int K[n+1][W+1];

            for(i=0; i<=n; i++){
                for(j=0; j<=W; j++){
                    if(i==0 || j==0) K[i][j]=0;
                    else if(w[i-1]<=j) K[i][j]=max(v[i-1]+K[i-1][j-w[i-1]],K[i-1][j]);
                    else K[i][j]=K[i-1][j];
                }
            }

            sum+=K[n][W];
        }
        cout<<sum<<endl;
    }
}
