#include<iostream>
using namespace std;
int max_pair_product(int arr[],int size);

int main(){
    int size=5;
    int arr[]={1,2,3,6,6};
    cout<<max_pair_product(arr,size)<<endl;
    return 0;
}
int max_pair_product(int arr[], int size){
    int maxind1=size-1;
    int maxind2=size-2;
    for(int i=1;i<size;i++){
        if((maxind1==size-1)||(arr[i]>arr[maxind1])){
            maxind1=i;
        }
    }
    for(int j=0; j<size;j++){
        if((j!=maxind1)&&((maxind2==size-2)||(arr[j]>arr[maxind2]))){
            maxind2=j;
        }
    }
    // cout<<maxind1<<maxind2<<endl;
    return arr[maxind1]*arr[maxind2];
}