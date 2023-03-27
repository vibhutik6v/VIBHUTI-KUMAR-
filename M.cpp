#include <iostream>

using namespace std;
void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int n2[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+1];

    }
    for(int i=0;i<n2;i++){
        a[i]=arr[mid+1+i];

}
int i=0;
int j=0;
int k=l;
while(i<n1 && j<n2){
    arr[k]=a[i];
    k++;i++;
}

else
{



    arr[k]=b[j];
    k++;j++;
}

while(i<n1 ){
    arr[k]=a[i];
    k++;i++;
}
while(i<n2 ){
    arr[k]=b[j];
    k++;i++;
}

int main()
{
    int arr[]={8,6,7,4,2,5,7};
    MergeSort(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    

    return 0;
}