#include <iostream>
#include <climits>
using namespace std;

int getMin(int arr[],int size){
       int minNum= INT_MAX;
       for(int i=0;i<size;i++){
        minNum=min(minNum,arr[i]);
       };
       return minNum;
}

int getMax(int arr[],int size){
       int maxNumber= INT_MIN;
       for(int i=0;i<size;i++){
       maxNumber=max(maxNumber,arr[i]);
       }
       return maxNumber;
}
int main () {

        int size; cin>>size;
        int arr[100];

        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        cout<<"Max value "<<getMax(arr,size)<<endl;
        cout<<"Min value "<<getMin(arr,size)<<endl;

        cout<<endl<<"---Done---"<<endl;
        return 0;
}