#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <random>
#include <vector>

int main()
{
    vector<int> soft_numbers;
    soft_numbers.push_back(0);
    for (int p = 0; p < 10; p++){
        for (int q = 0; q < 10; q++){
            soft_numbers.push_back(pow(2, p) * pow(3, q));
        }
    }
    sort(soft_numbers.begin(), soft_numbers.end());
    
    return 0;
}