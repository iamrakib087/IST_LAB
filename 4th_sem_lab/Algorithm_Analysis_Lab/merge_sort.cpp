#include<bits/stdc++.h>
using namespace std;
vector<int> Merge (int n, vector<int>&arr){
    if(n>1){
    int v1 = n/2;
    int v2 = n - v1;
    vector<int>left(v1);
    for(int i = 0; i< v1; i++){
        left[i]=arr[i];
    }
    vector<int>right(v2);
    for(int i = v1; i<n; i++){
        right[i-v1]=arr[i];
    }
    Merge(v1, left);
    Merge(v2, right);
    vector<int>v;
    int  i=0, j=0, k=0;
    while(i < v1 and j < v2){
        if(left[i] < right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < v1){
            arr[k] = left[i];
            i++; k++;
    }
    while(j < v2){
        arr[k] = right[j];
        j++; k++;
    }
    return arr;
}        }
int main(){
    cout<<"Enter the size of array: ";
    int n; cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Merge Sort: ";
    vector<int>arr2=Merge(n, arr);
    for(int i = 0; i<n; i++){
        cout << arr2[i] << " ";
    }
    cout<<"\n";
return 0;}
