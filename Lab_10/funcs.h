#pragma once

template <typename T>
T min(T a, T b) {
    return (a < b) ? a : b;
}
template <typename T>
void sort(T* arr, int size) {
    bool e = false;
    while (!e) {
        e = true;
        for (int i = 0; i < size - 1; i++)
            if (arr[i] > arr[i + 1]) {
                e = false;
                T t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
    }
}
template <typename T>
T sum(T* arr, int size) {
    T v = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] > 0)
            v += arr[i];
    return v;
}
