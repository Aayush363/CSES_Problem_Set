


/**************** Maximum and minimum of an array using minimum number of comparisons  *****************/



#include<iostream>

using namespace std;

struct getminmax{
    int max, min;
};

struct getminmax minmax(int arr[], int i, int l){
    struct getminmax pair, temp1, temp2;
    
    if(i == l)
        pair.min = pair.max = arr[i];
    
    else if(l == i+1){
        if(arr[i] > arr[l]){
            pair.max = arr[i];
            pair.min = arr[l];
        }
        else{
            pair.max = arr[l];
            pair.min = arr[i];
        }
    }
    else{
        temp1 = minmax(arr, i, i + (l-i)/2);
        temp2 = minmax(arr, i + (l-i)/2+1, l);
        pair.max = temp1.max > temp2.max ? temp1.max : temp2.max;
        pair.min = temp1.min < temp2.min ? temp1.min : temp2.min;
    }

    return pair;
}

int main(){
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int arr_size = 6;

    struct getminmax pair = minmax(arr, 0, arr_size-1);

    cout<<"Max = "<<pair.max<<endl;
    cout<<"Min = "<<pair.min<<endl;
}