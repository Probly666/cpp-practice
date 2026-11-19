#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>

int main() {
    int n = 10;
    std::vector<int> array = {5, 1, 4, 2, 8, 0, 3, 7, 6, 9};

    auto start = std::chrono::steady_clock::now();

    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    for (int val : array) {
        std::cout << val << ' ';
    }
    std::cout << "\nExecution time: " << elapsed.count() << " seconds\n";
    return 0;
}
