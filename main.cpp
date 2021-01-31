#include <iostream>
#include "liner_list/Exercise1.h"
using namespace std;

void test_liner_list_exercise1_1(){
    int A[] = {7,2,3,4,5};
    int value = Exercise1::exercise1(A, 5);
    cout << value << " " << A[1] << endl;
}

void test_liner_list_exercise1_2(){
    int A[] = {1,2,3,4,5};
    Exercise1::exercise2(A,5);
    for(int i : A){
        cout<< i << " ";
    }
}

void test_liner_list_exercise1_3(){
    int A[] = {1,1,3,4,5,6,1,1,7,1,8};
    Exercise1::exercise3(A,1,11);
    for(int i : A){
        cout<< i << " ";
    }
}

void test_liner_list_exercise1_4(){
    int A[] = {1,2,3,4,5,6,7,8,9,10};
    Exercise1::exercise4(A,4,7,10);
    for(int i : A){
        cout<< i << " ";
    }
}

void test_liner_list_exercise1_5(){
    int A[] = {11,2,13,4,5,61,7,8,9,10};
    Exercise1::exercise5(A,2,9,10);
    for(int i : A){
        cout<< i << " ";
    }
}

void test_liner_list_exercise1_6(){
    int A[] = {1,1,2,3,3,3,4,4,5,5};
    Exercise1::exercise6(A,10);
    for(int i : A){
        cout<< i << " ";
    }
}

void test_liner_list_exercise1_7(){
    int A[] = {1,2,3,4,5};
    int B[] = {6,7,8,9,10};
    int* C = Exercise1::exercise7(A,B,5,5);
    for(int i = 0; i < 10; i++){
        cout<< C[i] << " ";
    }
    delete [] C;
}

void test_liner_list_exercise1_8(){
    int A[] = {1,2,3,1,2,3,4};
    Exercise1::exercise8(A,3,4);
    for(int i : A){
        cout<< i << " ";
    }
}

void test_liner_list_exercise1_9(){
    int A[] = {1,3,4,6,7,8,10,11,12,17};

    cout << Exercise1::exercise9(A,10,8) << endl;

    Exercise1::exercise9(A,10,9);
    for(int i : A){
        cout<< i << " ";
    }
}

void test_liner_list_exercise1_10(){
    int A[] = {1,2,3,1,2,3,4};
    Exercise1::exercise10(A,7,3);
    for(int i : A){
        cout<< i << " ";
    }
}

void test_liner_list_exercise1_11(){
    int A[] = {1,3,5};
    int B[] = {2,4,6,7,8};
    int ret = Exercise1::exercise11(A,B,3,5);
    cout << ret;
}

void test_liner_list_exercise1_12(){
    int A[] = {1,2,5,5,5,4,5,5,5,6};
    int ret = Exercise1::exercise12(A,10);
    cout << ret;
}

void test_liner_list_exercise1_13(){
    int A[] = {1,2,3};
    int ret = Exercise1::exercise13(A,3);
    cout << ret;
}

int main() {
    /*1.1*/
    //test_liner_list_exercise1_1();

    /*1.2*/
    //test_liner_list_exercise1_2();

    /*1.3*/
    //test_liner_list_exercise1_3();

    /*1.4*/
    //test_liner_list_exercise1_4();

    /*1.5*/
    //test_liner_list_exercise1_5();

    /*1.6*/
    //test_liner_list_exercise1_6();

    /*1.7*/
    //test_liner_list_exercise1_7();

    /*1.8*/
    //test_liner_list_exercise1_8();

    /*1.9*/
    //test_liner_list_exercise1_9();

    /*1.10*/
    //test_liner_list_exercise1_10();

    /*1.11*/
    //test_liner_list_exercise1_11();

    /*1.12*/
    //test_liner_list_exercise1_12();

    /*1.13*/
    test_liner_list_exercise1_13();
    return 0;
}


