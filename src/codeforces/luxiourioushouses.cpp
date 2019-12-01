#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,max=0;
    scanf("%d",&n);
    int arr[n],result[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    result[n-1] = 0;
    max = arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            max = arr[i];
            result[i] = 0;
        }else{
            result[i] = max+1 - arr[i];
        }
    }
    for(int i=0;i<n;i++) printf("%d ",result[i]);
    return 0;
}