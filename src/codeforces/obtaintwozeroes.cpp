#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>=b){
            printf("NO\n");
        }else{
            int x = a;
            while(x){
                if(x*2>b) x--,a=x;
                else{
                    if(x*2 == b){
                        if(x-a == 0) printf("YES\n");
                        else printf("NO\n");
                        break;
                    }else{
                       a -= x;
                       b -= 2*x; 
                       if(a == 0 && b == 0){
                           printf("YES\n");
                       }
                    }
                }
            }
        }
    }
    return 0;
}