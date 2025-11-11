#include<iostream>
using namespace std;
int main(){
    //int,float,char,bool
    char ch;
    cout<<"Enter the Alphabet:";
    cin>>ch;
    int a = (int)ch;
    int b = a-64;
    cout<<"The place of alphabet on num :"<<b;
}