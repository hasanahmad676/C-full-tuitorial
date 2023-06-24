/*
all the important question on array;
1.swap elements like:{1,2,3,4,5,6} to {2,1,4,3,6,5}
2. find unique elemets in an array
3. find duplicate elements of an array
4.array intercetion  .
5.pair sum
6.triplet sum
7. sort 0's and 1's




*/
// first problem solving
#include<iostream>
using namespace std;
 int swap(int array[],int n){
    for (int i = 0; i < n-1; i+=2)
    {
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]= temp;
    }
    return 0;
 }


int main(){
    int array[]={1,2,3,4,5,6};
    int size=sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        cout << " " << array[i] ;
    }
    cout<<endl;

    // after swaping
    swap(array,size);
    for (int i = 0; i < size; i++)
    {

        cout << " " << array[i] ;
    }
    cout<< endl;






}