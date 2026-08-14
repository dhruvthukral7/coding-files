#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0,end=size-1;
    while (start<end){
         swap(arr[start],arr[end]);
         start++;
         end--;
    }
}
int main(){
    int arr[]={2,5,23,54,1};
    int size=5;

    reverse(arr,size);
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}