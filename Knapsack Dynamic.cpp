#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, W,sum=0;
    cout<<"Enter the number of items: ";
    cin>>n;
    cout<<"Enter the maximum capacity of the bag: ";
    cin>>W;

    int v[n],w[n];
    cout<<"Enter the value and weight of the product: \n";
    for(int k=0; k<n; k++){
        cin>>v[k];
        cin>>w[k];
    }

    int i,j;
    int K[n+1][W+1];

    for(i=0; i<=n; i++){
        for(j=0; j<=W; j++){
            if(i==0 || j==0) K[i][j]=0;
            else if(w[i-1]<=j) K[i][j]=max(v[i-1]+K[i-1][j-w[i-1]],K[i-1][j]);
            else K[i][j]=K[i-1][j];
        }
    }

    cout<<K[n][W]<<endl;
}
