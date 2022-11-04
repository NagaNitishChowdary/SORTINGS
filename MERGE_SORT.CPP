#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int lenlsb=mid-low+1;
    int lenrsb=high-mid;
    int lsb[lenlsb],rsb[lenrsb];
    for(int i=0;i<lenlsb;i++){
        lsb[i]=arr[low+i];
    }
    for(int j=0;j<lenrsb;j++){
        rsb[j]=arr[mid+j+1];
    }
    int i=0,j=0,k=low;
    while(i<lenlsb && j<lenrsb){
        if(lsb[i]<=rsb[j]){
            arr[k]=lsb[i]; k++; i++;
        }
        else{
            arr[k]=rsb[j]; k++; j++;
        }
    }
    while(i<lenlsb){
        arr[k]=lsb[i];
        k++; i++;
    }
    while(j<lenrsb){
        arr[k]=rsb[j];
        j++; k++;
    }
}

void mergesort(int arr[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
