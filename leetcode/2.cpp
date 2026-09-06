#include <iostream>
#include <vector>
using namespace std;
int max_sub(const vector<int> &nums){
    int sum=0;
    int maxi=INT_MIN;
    for(int val:nums){
        sum+=val;
        maxi=max(maxi,sum);
        if (sum<0){
            sum=0;
        }

    }
    return maxi;
}
int main(){
    vector<int>nums={2,4,-5,-2,5,6};
    cout << max_sub(nums) << endl;


    return 0;

}