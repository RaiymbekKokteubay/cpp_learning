//
// Created by Raiymbek on 04.05.2023.
//

#include <iostream>
#include "Practice_work_1.h"

using namespace std;
void practicetask1(){
    int n, m, counter;
    counter = 0;
    int arr[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"ans is:"<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if (arr[i][j]>0){
                counter+=1;
            }
        }
        cout<<counter<<endl;
        counter = 0;
    }
}

void practicetask2(){
    int n,m, maxi;
    cin>>n>>m;
    maxi = -10000000;
    int arr[n][m];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m; j++){
            maxi = max(arr[i][j], maxi);
        }
    }
    cout<<maxi;
}

void practicetask3(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m; j++) {
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m; j++){
            if (arr[i][j]<0){
                cout<<"x ";
            }
            else{
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void practicetask4(){
    int n, row, column;
    cin>>n;
    int arr[n][n];
    row = 0;
    column = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    while (row<n){
        if (row+column == n-1){
            cout<<"x ";
        }
        else{
            cout<<arr[row][column]<<" ";
        }
        if (column == n-1){
            column = 0;
            row += 1;
            cout<<endl;
        }
        else{
            column += 1;
        }
    }
}


void practicetask5(){
    int n, row, column, ans;
    cin>>n;
    int arr[n][n];
    row = 0;
    ans = 0;
    column = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    while (row<n){
        if (row!=column){
            ans+=arr[row][column];
        }
        if (column == n-1){
            column = 0;
            row += 1;
            cout<<endl;
        }
        else{
            column += 1;
        }
    }
    cout<<ans;
}
void practicetask6(){
    int n,m,curr_max, row, column;
    cin>>n>>m;
    row = 0;
    column = 0;
    int arr[n][m];
    curr_max = -100000;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    while(row<n){
        curr_max = max(curr_max, arr[row][column]);
        if (column == m-1){
            cout<<curr_max<<endl;
            row+=1;
            column=0;
            curr_max = -1000000;
        }
        else{
            column+=1;
        }
    }
}

void practicetask7(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(n%2==0){
                if (i<n/2){
                    cout<<arr[i+(n/2)][j]<<" ";
                }
                else{
                    cout<<arr[i-(n/2)][j]<<" ";
                }
            }
            else{
                if(i==(n-1)/2){
                    cout<<arr[i][j]<<" ";
                }
                else if (i>(n-1)/2){
                    cout<<arr[i-((n+1)/2)][j]<<" ";
                }
                else{
                    cout<<arr[i+((n+1)/2)][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
}




void practicetask8(){
    int n,m,column_counter,curr_min;
    curr_min=10000000;
    column_counter = 0;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    while(column_counter<n){
        for(int j = 0; j < m; j++){
            curr_min = min(arr[column_counter][j], curr_min);
        }
        cout<<curr_min<<endl;
        curr_min=10000000;
        column_counter++;
    }
}

void practicetask10(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr[i][j]<0 and k!=0){
                cout<<arr[i][j];
                k--;
            }
        }
    }
}

void practicetask10_1(){
    int n,m, curr_min, cout_counter;
    curr_min = 10000000;
    cout_counter = 0;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    while(cout_counter<n*m){
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                curr_min=min(curr_min,arr[i][j]);
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if (arr[i][j]==curr_min){
                    arr[i][j] = 100000000;
                }
            }
        }
        cout<<curr_min<<" ";
        if(cout_counter!=0 and (cout_counter+1) % n==0){
            cout<<endl;
        }
        cout_counter++;
        curr_min=1000000;
    }
}

