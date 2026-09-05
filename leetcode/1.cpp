#include <iostream>
#include <vector>
using namespace std;
int numb(const vector<int>& vec){
    int ans=0;
    for(int val: vec){
        ans=ans^val;

    }
    return ans;
}
int main(){
    vector<int>vec={2,3,5,2,3};
    cout << numb(vec) << endl;
    return 0;
}