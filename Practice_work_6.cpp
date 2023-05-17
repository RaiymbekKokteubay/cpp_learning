//
// Created by Raiymbek on 11.05.2023.
//

#include "Practice_work_6.h"
#include <iostream>

using namespace std;
void practicetask6_1(){
    int counter;
    counter = 0;
    string x = "";
    cin>>x;
    char arr[10]{
        'a','e','i','o','u', 'A', 'E', 'I', 'O', 'U'};
    for(int i = 0; i<x.length(); i++){
        for(int j = 0; j<10;j++){
            if(x[i] == arr[j]){
                counter+=1;
            }
        }
    }
    cout<<counter;
}

void practicetask6_2(){
    string x = "";
    cin>>x;
    char arr[10]{
            'a','e','i','o','u', 'A', 'E', 'I', 'O', 'U'};
    for(int i = 0; i<x.length(); i++){
        for(int j = 0; j<10;j++){
            if(x[i] == arr[j]){
                x[i] = ' ';
            }
        }
    }
    cout<<x;
}


void practicetask6_3(){
    string ans = "";
    string x = "";
    cin>>x;
    for(int i = 0; i<=(x.length()-1)/2; i++){
        if(x[i]!=x[x.length()-i-1]){
            ans = "NO";
        }
    }
    if(ans == "NO"){
        cout<<ans;
    }
    else{
        cout<<"YES";
    }
}

void practicetask6_4(){
    string x = "";
    char cap_l[27]{' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char l[27] {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    getline(cin,x);
    cout<<x<<" "<<x.length()<<endl;
    for(int i = 0; i<x.length();i++){
        for(int j = 0; j<27;j++){
            if (x[i] == l[j]){
                x[i] = cap_l[j];
            }
        }
    }
    cout<<x;
}

void practicetask6_5(){
    int a_count;
    a_count = 0;
    string x = "";
    getline(cin,x);
    for(int i =0; i<x.length(); i++){
        if(x[i] == 'a' or x[i] == 'A'){
            a_count+=1;
        }
    }
    cout<<a_count;
}

void practicetask6_6(){
    char cap_l[27]{' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char l[27] {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string x = "";
    getline(cin, x);
    int letter_count;
    letter_count = 0;
    for(int i = 0; i<27; i++){
        for(int j = 0; j<x.length();j++){
            if(x[j] == cap_l[i] or x[j] == l[i]){
                letter_count+=1;
            }
        }
        if(letter_count != 0){
            cout<<cap_l[i]<<" - "<<letter_count<<endl;
        }
        letter_count = 0;
    }
}