#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    cin>>a>>n;

    int num=0,x=n-a;

    while(x!=0){
        if(x>=32){
            x=x-32;
            }
        else if(x>=16){
            x=x-16;
        }
        else if(x>=8){
            x=x-8;
        }
        else if(x>=4){
            x=x-4;
        }
        else if(x>=2){
            x=x-2;
            num++;
        }
        else if(x>=1){
            x=x-1;
        }
    }

    if(num>0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
