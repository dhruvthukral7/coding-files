#include <iostream>
using namespace std;
int fact(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    return s;
}
int ncr(int n,int r){
    int factn=fact(n);
    int factr=fact(r);
    int factnmr=fact(n-r);
    return factn/(factr*factnmr);
}
int main(){
    cout << ncr(4,2) << endl;
}