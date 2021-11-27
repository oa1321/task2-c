#include <stdio.h>
#include "my_mat.h"


void a_func(int arr[10][10]){
    int num;
    int nums[100];
    for(int i = 0; i< 100; i++){
        scanf("%d" , &num);
        nums[i] = num;
    }
    build_mat(nums, arr);
}


void b_func(int arr[10][10]){
    int num1;
    int num2;
    scanf("%d" , &num1);
    scanf("%d" , &num2);
    const char* is_co = is_connected(arr, num1, num2);
    printf("%s\n", is_co);
}


void c_func(int arr[10][10]){
    int path;
    int num1;
    int num2;
    scanf("%d" , &num1);
    scanf("%d" , &num2);
    path = smallest(arr, num1, num2);
    printf("%d\n", path);
}


int main(){
    char op = 0;
    int arr[10][10];
    scanf("%c" , &op);
    while(op != 'D'){
        if(op == 'A'){
            a_func(arr);
        }
        else if(op == 'B'){
            b_func(arr);
        }
        else if(op == 'C'){
            c_func(arr);
        }
        scanf("%c" , &op);
    }
return 0;
}
