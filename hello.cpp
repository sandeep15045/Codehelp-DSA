#include <iostream>
using namespace std;

void printArray(char arr[],int size){
    cout<<"---PRINTING ARRAY---"<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main () {

        int arr[16]={0,2};
        int arrsize= sizeof(arr)/sizeof(int);
        cout<<arrsize<<endl;
        // printArray(arr,arrsize);

        char ch[5]={'a','b'};
        cout<<ch[12];

        printArray(ch);
        cout<<endl<<"---Done---"<<endl;
        return 0;
}