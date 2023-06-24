#include<iostream>
using namespace std;

  int reverse(int array[],int n){
    int start=0;
    int end= n-1;
    while (start<=end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }

  }

 void print( int array[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<< " " <<array[i] ;
    }

    cout<<endl;
 }

int main(){
   int  array1[]={1,2,3,4,5,6,7,8,9};
   int array2[]={11,12,13,14,15,16,17,18};
    reverse( array1,9);
    reverse( array2,8);
    print(array1,9);
    print(array2,8);





}