//该程序用于实现对一组数求中位数
//原理：对数组中的数据进行排序，然后求中位数


#include <iostream>
void Mid_num(double* arry, int size); //该函数用于求取中位数
void swap(double* a, double* b);//该函数用于交换两个数
void sort(double* arr, int size);//该函数用于将数据排序，目前只采用了冒泡排序，适合处理少量数据

void swap(double* a, double* b) {
    double temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << *(arr + i) << "   ";
    }
    std::cout << std::endl;
    Mid_num(arr, size);
}

void Mid_num(double* arry, int size) {
    if (size % 2 == 0) {
        std::cout << (arry[size / 2 - 1] + arry[size / 2]) / 2;
    }
    else {
        std::cout << arry[size / 2];
    }
}

int main(void) {
    double a[] = { 2,3,1,5,2,5,9,6,13,44,7 };
    sort(a, 11);
    return 0;
}
