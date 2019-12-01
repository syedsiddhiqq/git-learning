#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    sort(arr,arr+n);
    for(int i=0;i<=n-2;i++){
        if(arr[i]<arr[i+1]+arr[i+2] && arr[i+1]<arr[i]+arr[i+2] && arr[i+2]<arr[i]+arr[i+1]){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}