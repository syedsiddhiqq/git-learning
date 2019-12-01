#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,length;
    scanf("%d %d",&n,&k);
    string sequence("1");
   for(int i=1;i<=n;i++){
       length = sequence.size();
       sequence[length-1] = to_string(i+1);
       sequence.append(sequence);
        sequence.append(sequence);
    }
    cout<<sequence;
    // duplicated this for looop git learning purposes.
        for(int i=1;i<=n;i++){
               length = sequence.size();
               sequence[length-1] = to_string(i+1);
               sequence.append(sequence);
            }
// added a comment here for learninig purpose.
    return 0;
}
