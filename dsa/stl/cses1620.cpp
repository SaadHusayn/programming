#include <iostream>
#include <vector>
#include <algorithm>

bool isFeasible(long long time, const std::vector<long long>& machines, long long t) {
    // Check if it's possible to make t products in 'time' seconds
    long long totalProducts = 0;
    for (long long machine : machines) {
        totalProducts += time / machine;
    }
    return totalProducts >= t;
}

long long minimumTimeToMakeProducts(int n, long long t, const std::vector<long long>& machines) {
    // Binary search for the minimum time
    long long left = 1, right = *max_element(machines.begin(), machines.end()) * t;

    while (left < right) {
        long long mid = (left + right) / 2;

        if (isFeasible(mid, machines, t)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    // Input reading
    int n, t;
    std::cin >> n >> t;
    std::vector<long long> machines(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> machines[i];
    }

    // Output the result
    long long result = minimumTimeToMakeProducts(n, t, machines);
    std::cout << result << std::endl;

    return 0;
}
