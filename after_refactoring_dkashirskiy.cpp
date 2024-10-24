#include <cmath>
#include <iostream>

float arithmetic_mean(const int* const arr, const int size);
void create_array(const int arr_index);
void fill_array(int* const arr, const int size);
void print_array(const int* const arr, const int size);

int main()
{
    // int* arr1 = new int[10];
    // fill_array(arr1);

    // std::cout << "Первая последовательность: ";
    // print_array(arr1);

    // std::cout 
    //     << "Среднее первое последовательности: " 
    //     << arithmetic_mean(arr1) 
    //     << std::endl;

    // int* arr2 = new int[10];
    // fill_array(arr2);
    // std::cout << "Вторая последовательность: ";
    // print_array(arr2);
    // std::cout << "Среднее второй последовательности: " << arithmetic_mean(arr2) << std::endl;

    // int* arr3 = new int[10];
    // fill_array(arr3);
    // std::cout << "Третья последовательность: ";
    // print_array(arr3);
    // std::cout << "Среднее третьей последовательности: " << arithmetic_mean(arr3) << std::endl;

    std::cout << "Введите количество массивов: ";
    int arr_count;
    std::cin >> arr_count;

    for (int i = 0; i < arr_count; i++)
    {
        create_array(i+1);
    }
    
    return 0;
}


void fill_array(int* const arr, const int size)
{
    for (int i = 0; i < size; i++){
        arr[i] = rand() % 10;
    }
}

void print_array(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

float arithmetic_mean(const int* const arr, const int size)
{
    float arithmetic_mean = 0;
    
    for (int i = 0; i < size; i++){
        arithmetic_mean += arr[i];
    }

    return arithmetic_mean / size;
}

void create_array(const int arr_index)
{
    std::cout
        << "Введите размер массива №"
        << arr_index
        << ": ";
    int arr_size;
    std::cin >> arr_size;

    int* arr = new int[arr_size];
    fill_array(arr, arr_size);

    std::cout
        << "Последовательность #: "
        << arr_index;
    print_array(arr, arr_size);

    std::cout 
        << "Среднее арифметическое последовательности №"
        << arr_index
        << ": " 
        << arithmetic_mean(arr, arr_size) 
        << std::endl;
}