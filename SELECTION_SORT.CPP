#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minpos=i;
        for(int j=i+1;j<n;j++){
            if(arr[minpos]>arr[j]){
                minpos=j;
            }
        }
        int temp=arr[minpos];
        arr[minpos]=arr[i];
        arr[i]=temp;
    }
}

int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //int ele; cin>>ele;
    selectionsort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
