#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    int n = 0;
    int k = 0;

    std::cout << "Enter length of array: ";
    if (!(std::cin >> n) || n == 0) {
        std::cerr << "Invalid array length.\n";
        return 1;
    }
    n = std::abs(n);

    std::cout << "Enter your k: ";
    if (!(std::cin >> k)) {
        std::cerr << "Invalid k value.\n";
        return 1;
    }

    std::vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter num for [" << i << "]: ";
        if (!(std::cin >> array[i])) {
            std::cerr << "Invalid element input.\n";
            return 1;
        }
    }

    bool found = false;
    for (int i = 0; i < n - 1; ++i) {
        int j = k - i; 
        if (j > i && j < n && array[i] + array[j] == k) {
            std::cout << "Pair: " << array[i] << " + " << array[j] << " = " << k
                      << "\nIndices: " << i << " + " << j << " = " << k << '\n';
            found = true;
        }
    }

    if (!found) {
        std::cout << "Nothing found.\n";
    }

    return 0;
}
