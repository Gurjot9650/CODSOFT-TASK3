#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    int total,marks1,marks2,marks3,marks4,marks5;
    cout<<"Enter Your Marks in sub1: ";
    cin>>marks1;
    cout<<"Enter Your Marks in sub2: ";
    cin>>marks2;
    cout<<"Enter Your Marks in sub3: ";
    cin>>marks3;
    cout<<"Enter Your Marks in sub4: ";
    cin>>marks4;
    cout<<"Enter Your Marks in sub5: ";
    cin>>marks5;
    total=marks1+marks2+marks3+marks4+marks5;

    if (total >= 90){
        cout<<"Your Grade is A+";
    }
    else if (total >= 80){
        cout<<"Your Grade is A";
    }
    else if (total >= 70){
        cout<<"Your Grade is B+";
    }
    else if (total >= 60){
        cout<<"Your Grade is B";
    }
    else if (total >= 50){
        cout<<"Your Grade is C";
    }
    else if (total >= 40){
        cout<<"Your Grade is D";
    }
    else if (total >= 30){
        cout<<"Your Grade is E";
    }
    else if (total <= 30){
        cout<<"Your Grade is F";
    }
    else{
        cout<<"Enter Valid Marks";
    }
    return 0;
}