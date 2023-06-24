#include<iostream>
using namespace std;

    void array(int arr[],int size){
        for (int i = 0; i < size; i++)
    {
        cout<< arr[i] ;
    }
     cout << "  " << "this is the array" << endl;

    };

    int findIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index when a match is found
        }
    }

    // Return -1 if the target is not found in the array
    return -1;
 }


int main(){
    int arr[30]={12,3,4,5,6,7,8,9,10};
    int target=6;

    cout<<"array is :" << arr[4] << endl;
    array(arr,10);
    int index=findIndex(arr,30,target);
    cout<< "this is the index:" << index;




}