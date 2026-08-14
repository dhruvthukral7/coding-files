#include <iostream>
using namespace std;
int main(){
   int marks[5]={5,6,35,6,1,};
   int a=INT_MAX;
   int b=INT_MIN;
   int idx;
   int idxx;
   for(int i=0;i<5;i++){
    if (marks[i]<a){
        a=marks[i];
        idx=i;
    }if (marks[i]>b){
        b=marks[i];
        idxx=i;
    }

   }
    cout << "the smallest is:" << a << "at " << idx << endl;
    cout << "the largest is:" << b <<  "at " << idxx << endl;


    return 0;
}