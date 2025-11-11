//Take float input and print the fractional part of the real number....

#include<iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter the number : ";
    cin>>a;
    int b = (int)a;
    if(a<0) a = a-1;
    a = a-b;
    cout<<"the fractional part of the num is :"<<a;
}