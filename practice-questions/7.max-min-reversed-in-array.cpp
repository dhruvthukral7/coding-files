#include <iostream>
using namespace std;
int main(){
    int numbers[]={3,5,2,10,1};
    int largest=INT_MIN;
    int smallest=INT_MAX;
    int size=5;
    int idx1;
    int idx2;
    for (int i=0;i<size;i++){
        cout << numbers[i] << " " ;
    }
    cout << endl;
    for(int i=0;i<size;i++){
        if (numbers[i]<smallest){
            smallest=numbers[i];
            idx1=i;
        }
        if (numbers[i]>largest){
            largest=numbers[i];
            idx2=i;
        }
    }

    numbers[idx1]=largest;
    numbers[idx2]=smallest;
    
    cout << "Here's the array of max and min reversed" << endl;
    for(int i=0;i<size;i++){
        cout << numbers[i] << " " ;
    }
    cout << endl;
    return 0;

}