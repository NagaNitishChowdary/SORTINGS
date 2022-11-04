#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
    for(int p=1;p<n;p++){
        int j=p;
        int temp=arr[p];
        while(j && temp<arr[j-1]){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=temp;
    }
}

int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //int ele; cin>>ele;
    insertionsort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
