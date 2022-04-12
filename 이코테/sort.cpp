#include <iostream>
#include <algorithm>
using namespace std;



void selection(int arr[], int cnt){
    for(int i=0; i<cnt; i++){
        int min_index =i;
        for (int j= i; j<cnt; j++){
            if (arr[j] < arr[min_index]) min_index = j;
        }
        swap(arr[i], arr[min_index]);
        cout << arr[i] << " ";
    }
    cout << "\n"; 
}

void insert(int arr[], int cnt){
    // 처음꺼는 되어 있다고 가정
    for(int i=1; i<cnt; i++){
        for (int j= 0; j<i+1; j++){
            if (arr[j] >= arr[i]) {
                swap(arr[i], arr[j]);}
        }
    }
    for(int i=0; i< cnt; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";     
}

void quick(int* arr, int start, int end){
    if (start >= end){
        return;
    }
    int pivot =start;
    int thres = arr[pivot];
    int left = start+1;
    int right = end;

    while(left <= right){
        while(left <= end && arr[left] <= arr[pivot]){
            left +=1;
        }
        while(right > start && arr[right] >= arr[pivot]){
            right -= 1;
        }
        if(left > right){
            swap(arr[pivot], arr[right]);
        }else{
            swap(arr[left], arr[right]);
        }
    }
    quick(arr, start, right-1);
    quick(arr, right+1, end);    
}

int count_arr[10];

void count_sort(int* arr, int cnt){
    for(int i=0; i<cnt; i++){
        int ans = arr[i];
        count_arr[ans]++;
    }
    for(int i =0; i<sizeof(count_arr)/sizeof(count_arr[0]); i++){
        for(int j=0; j < count_arr[i]; j++){
            cout << i << " ";
        }
    }
    cout << "\n";
}

int main(void){
    int arr[10] = {7,6,3,2,1,4,5,9,8,0} ;
    int cnt = sizeof(arr) / sizeof(arr[0]);
    // selection(arr,  cnt);
    // insert(arr, cnt);
    //quick(arr, 0, cnt-1);
    count_sort(arr, cnt);
    cout << "\n"; 
}


// array 크기 : sizeof(arr) / sizeof(arr[0]) -> 전자 : arr 4byte x 10, 후자 : arr 4byte
