//동적계획법 - 연속 행렬 곱셈


#include <iostream>
#include "junguoongill.h"

#define SIZE_OF_ARRAY 100

//각 조원들 헤더파일 포함

using namespace std;


int main(){


    //행렬 생성
    int arr[SIZE_OF_ARRAY] = {0, };
    //실행 전 행렬 출력

    //동적계획법 실행
    ChainedMatrix(arr, SIZE_OF_ARRAY);
    //실행 후 행렬 출력

    

    return 0;
};