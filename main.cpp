#include <iostream>
#include "liner_list/Exercise1.h"
using namespace std;

void test_liner_list_exercise1(){
    int A[] = {7,2,3,4,5};
    int value = Exercise1::exercise1(A, 5);
    cout << value << " " << A[1] << endl;
}

void test_liner_list_exercise2(){
    int A[] = {1,2,3,4,5};
    Exercise1::exercise2(A,5);
    for(int i : A){
        cout<< i << " ";
    }
}

void test_liner_list_exercise3(){
    int A[] = {1,1,3,4,5,6,1,1,7,1,8};
    Exercise1::exercise3(A,1,11);
    for(int i : A){
        cout<< i << " ";
    }
}

int main() {
    /*1.1*/
    //test_liner_list_exercise1();

    /*1.2*/
    //test_liner_list_exercise2();

    /*1.3*/
    //test_liner_list_exercise3();

    return 0;
}


