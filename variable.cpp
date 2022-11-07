/*
int = 4bytes --> 32 bit 
char= 1byte --> 8 bit
bool= 1 byte
float=4 bytes --> 32 bit
double= 8 bytes 
std::string =24 bytes

*/ 

#include<iostream>
using namespace std;
int main(){
 
int a =10;
cout<< "this is int variale :" <<a <<endl;
char ch='h';
cout<< "this is charaecter variale :" << ch <<endl;
float b = 10.3;
cout<< "this is float variale :" << b <<endl;
double  c = 20.4;
cout<< "this is double variale :" <<c <<endl;
bool bool1 = true;
cout<< "this is boolien variale :" <<bool1 <<endl;
string s ="hasan";
cout<< "this is string variale :" <<s <<endl;



int size1 = sizeof(a);
cout<< "this is size of int : " <<size1<<endl;

int size2 = sizeof(ch);
cout<< "this is size of char: " <<size2<<endl;


int size3 = sizeof(b);
cout<< "this is size of float: " <<size3<<endl;


int size4 = sizeof(c);
cout<< "this is size of double: " <<size4<<endl;


int size5 = sizeof(s);
cout<< "this is size of string: " <<size5<<endl;


int size6 = sizeof(bool1);
cout<< "this is size of boolian : " <<size6<<endl;
return 0;

}