#include<iostream>

using namespace std;

int maxSubarraySum(int arr[], int n){
    int max = INT16_MIN, temp = INT16_MIN;
    for(int i=0;i<n;i++){
        if(temp+arr[i] < arr[i]){
            temp = arr[i];
            if(temp > max)
                max = temp;
        }
        else{
            temp += arr[i];
            if(temp > max)
                max = temp;
        }
    }
    return max;
}

int main(){
    int arr[] = {3,-2,3,4}, n;
    n = sizeof(arr)/sizeof(int);
    cout<<maxSubarraySum(arr, n);
}


