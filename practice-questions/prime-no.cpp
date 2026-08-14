#include <iostream>
using namespace std;
void checkprime(int n){
    bool prime = true;
    for(int i=2;i<n;i++){
        if (n%i==0){
            prime =false;
            break;
        }

    }
    if (prime==true){
        cout << "the number is prime" << endl;
    }else{
        cout << "the number is not prime" << endl;
    }
}
int main(){
    checkprime(11);
    return 0;
}