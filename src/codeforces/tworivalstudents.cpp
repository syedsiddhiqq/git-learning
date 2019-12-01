#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,swaps,a,b,maxd = 0,swapsa,swapsb,totalswaps;
        scanf("%d %d %d %d",&n,&swaps,&a,&b);
        if(a<b) swap(a,b);
        maxd = n-1;
        swapsa = n-a;
        swapsb = b-1;
        if(swapsa==0 && swapsb==0) printf("%d\n",maxd);
        else {
            totalswaps = swapsa+swapsb;
            if(swaps>totalswaps) printf("%d\n",maxd);
            else{
                totalswaps = totalswaps-swaps;
            maxd = maxd-totalswaps;
            printf("%d\n",maxd);
            }            
        }

    }
    return 0;
}