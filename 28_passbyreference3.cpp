#include <iostream>
using namespace std;

int print(int arr[], int n){
    arr[2] = 4;
    arr[4] = 7;
    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
int main(){
    int n; 
    cout << "Enter the length of the array: " << endl;
    cin >> n;
    int arr[n];
    
    cout << "Enter the array elements: " << endl;
    for(int i = 0; i <= n - 1; i++){
        cin >> arr[i];
    }
    print(arr, n);
    return 0;
}