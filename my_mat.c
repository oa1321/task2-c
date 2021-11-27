#include <stdio.h>
#include "my_mat.h"

int build_mat(int elements[10*10], int arr[10][10]){
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            arr[i][j] = elements[i*10 + j];
        }
    }
    for(int k = 0; k<10; k++){
        for(int i = 0; i<10; i++){
            for(int j = 0; j<10; j++){
                if(i != j){
                    int min = -1;
                    if(arr[i][k] == 0 || arr[k][j] == 0 ){
                        min = arr[i][j];
                    }
                    else if(arr[i][j]==0){
                        min = arr[i][k]+arr[k][j];
                    }
                    else{
                        if(arr[i][k]+arr[k][j]<arr[i][j]){
                            min = arr[i][k]+arr[k][j];
                        }
                        else{
                        min = arr[i][j];
                        }
                    }
                    arr[i][j] = min;
                    arr[j][i] = min;
                }
            }
        }
    }
    return 0;
}
const char* is_connected(int arr[10][10], int i, int j){
    if (arr[i][j]!=0){
       return "True"; 
    }
    return "False";
}
int smallest(int arr[10][10], int i, int j){
    if (arr[i][j] == 0){
        return -1;
    }
    return arr[i][j];
}