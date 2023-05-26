#include <iostream>
#include <cmath>
#include "Practice_work_1.h"
#include "Practice_work_6.h"
using namespace std;

//Practice task 7.1
int findingPercent(int a, int b){
    return (a*100)/b;
}

//Practice task 7.2
int VowelCounter(string x = " "){
    getline(cin, x);
    int counter = 0;
    char vowels[10]{'a','e','i','o','u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i<x.length();i++){
        for(int j = 0; j<10;j++){
            if (x[i] == vowels[j]){
                counter++;
            }
        }
    }
    return counter;
}

//Practice task 7.4
string VowelEraser(string x = ""){
    getline(cin, x);
    char vowels[10]{'a','e','i','o','u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i<x.length(); i++) {
        for (int j = 0; j < 10; j++) {
            if (x[i] == vowels[j]) {
                x[i] = 0;
            }
        }
    }
    return x;
}

//Practice task 7.5
int RemovingRowWMaxElement(int n, int m){
    int arr[n][m];
    int maxi = -10000000;
    int maxi_row = 0;
    int curr_point_row = 0;
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            if (max(maxi,arr[i][j]) == arr[i][j]){
                maxi = arr[i][j];;
                maxi_row = j;
            }
        }
    }
    for(int i =0; i<n;i++){
        while(curr_point_row<m){
            if(curr_point_row != maxi_row){
                cout<<arr[i][curr_point_row]<<" ";
            }
            curr_point_row++;
        }
        curr_point_row=0;
        cout<<endl;
    }
}

//Practice task 7.6
int CountingLetter(string x = "", char letter = ' '){
    getline(cin, x);
    cin>>letter;
    int counter = 0;
    for(int i = 0; i<x.length();i++){
        if (x[i] == letter){
            counter++;
        }
    }
    cout<<counter;
}

//Practice task 7.7
//I did not understand it

//Practice task 7.8
int DeletingIntsB4Min(int n){
    int arr[n];
    int mini, mini_id;
    mini = 1000000;
    mini_id = -1;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        if(min(mini, arr[i]) == arr[i]){
            mini = arr[i];
            mini_id = i;
        }
    }
    for(int i = 0; i<mini_id;i++){
        cout<<arr[i]<<" ";
    }
}

//Practice task 7.9
int SumNonZeroRows(int n,int m){
    int arr[n][m];
    int row_summa, total;
    row_summa = 0;
    total = 0;
    string flag = "YES";
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(arr[i][j] == 0){
                flag = "NO";
            }
            row_summa+=arr[i][j];
        }
        if (flag == "YES"){
            total += row_summa;
        }
        flag = "YES";
        row_summa = 0;
    }
    cout<<total;
}

//Practice task 7.10
int FindingRowsWZero(int n,int m){
    int arr[n][m];
    string flag = "YES";
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(arr[i][j] == 0){
                flag = "NO";
            }
        }
        if (flag!="YES"){
            cout<<i+1<<" ";
        }
        flag = "YES";
    }
}

//Practice task 8.1
int FindingPercentageUsingPointer(int n, int m){
    int *pointer1 = &n;
    int *pointer2 = &m;
    cout<<(*pointer1*100)/(*pointer2);
}

//Practice task 9.1
int ConvertingSequence(char* p){
    while(*p != '\0'){
        if(int(*p)>64 && int(*p)<91){
            cout<<char(int(*p)+32);
        }
        else if(int(*p)>96 && int(*p)<123){
            cout<<char(int(*p)-32);
        }
        else{
            cout<<char(int(*p));
        }
        p++;
    }
}

int ReplacingWord(const char* p, const char* word1, char* word2){
    cout<<p<<endl;
    cout<<word1<<endl;
    cout<<word2<<endl;
//    int len_counter = 0;
//    for(int i = 0;i<1000;i++){
//        if(*word1[i]=='\0'){
//            len_counter=i-1;
//        }
//    }
//    int sentence_len = 0;
//    for(int i = 0;i<1000;i++){
//        if(*p[i]=='\0'){
//            sentence_len=i-1;
//        }
//    }
//    int lpointer = 0;
//    int rpointer = 0;
//    int counter = 0;
//    for(int i = 0; i<1000;i++){
//        for(int j = 0; j<len_counter;j++){
//            if(*p[i+j]==*word1[j]){
//                rpointer = i+j;
//            }
//            else{
//                rpointer=0;
//            }
//        }
//    }
//    lpointer = rpointer - len_counter + 1;
//    int point = 0;
//    while(point<sentence_len){
//        if(point == lpointer){
//            for(int i = 0; i<1000;i++){
//                cout<<word2[i];
//            }
//            point+=len_counter-1;
//        }
//        else{
//            cout<<*p[point];
//        }
//    }
}

class NameOfClass{
    public:
        string name;
        string surname;
        string cause_of_death;
        int timer;
    NameOfClass(string name, string surname, string cause_of_death, int timer){
        this->name = name;
        this->surname = surname;
        this->cause_of_death = cause_of_death;
        this->timer = timer;
    }
    void WritingDeathNote() {
        if (cause_of_death == "") {
            cause_of_death = "gemoroi";
        }
        if (timer == 0) {
            timer = 40;
        }
        cout << name << " " << surname << " died out of " << cause_of_death << " " << timer<< " seconds after writing victim into the DeathNote" << endl;
        cout << "Жаль конечно  этого добряка. Хороший был человек((.";
    }
};

int main(){
//    practicetask1();
//    practicetask2();
//    practicetask3();
//    practicetask4();
//    practicetask5();
//    practicetask6();
//    practicetask7();
//    practicetask7v2();
//    practicetask8();
//    practicetask10();
//    practicetask10_1();
//    practicetask6_1();
//    practicetask6_2();
//    practicetask6_3();
//    practicetask6_4();
//    practicetask6_5();
//    practicetask6_6();
//    cout<<findingPercent(3,3);
//    cout<<VowelCounter("Ernis is playing with cat");
//    cout<<VowelEraser();
//    RemovingRowWMaxElement(3,3);
//    CountingLetter();
//    DeletingIntsB4Min(5);
//    SumNonZeroRows(3, 3);
//    FindingRowsWZero(3,3);
//    FindingPercentageUsingPointer(3,6);
//    char p[100];
//    cin.getline(p,100);
//    ConvertingSequence(p);
//    char p[100];
//    cin.getline(p,100);
//    char word1[100];
//    cin.getline(p,100);
//    char word2[100];
//    cin.getline(p,100);
//    ReplacingWord(p, word1, word2);
    NameOfClass v1("Sagi", "Alenov", "daylight", 1);
    v1.WritingDeathNote();
}