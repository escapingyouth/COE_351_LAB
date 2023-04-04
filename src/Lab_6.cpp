#include <iostream>

int find_max(const int *arr, size_t size);
int find_min(const int *arr, size_t size);
void find_min_max(const int *arr, size_t size, int *min, int *max);

int find_max(const int *const arr, size_t size)
{

    int max = *arr;

    for (size_t i{1}; i < size; i++)
    {
        if (*(arr + i) > max)
            max = *(arr + i);
    }
    return max;
}
int find_min(const int *const arr, size_t size)
{

    int min = *arr;

    for (size_t i{1}; i < size; i++)
    {
        if (*(arr + i) < min)
            min = *(arr + i);
    }
    return min;
}
void find_min_max(const int *arr, size_t size, int *min, int *max)
{
    *min = *arr;
    *max = *arr;

    for (size_t i{1}; i < size; i++)
    {
        if (*(arr + i) < *min)
            *min = *(arr + i);

        if (*(arr + i) > *max)
            *max = *(arr + i);
    }
}

int main()
{
    int test_arr[]{11, 33, 6, 8, -1, 100, 2, 33, 119};
    size_t size;

    int min{}, max{};

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    find_min_max(test_arr, size, &min, &max);
    std::cout << "The smallest number in the array is " << min << std::endl;
    std::cout << "The largest number in the array is " << max << std::endl;

    return 0;
}