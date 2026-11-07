#include <numeric>
#include <vector>
#include <string>
#include <iostream>

int main() {
    std::vector<int> v{1, 2, 3, 4, 5};

    // 1. Sum
    int sum = std::accumulate(v.begin(), v.end(), 0);            // 15

    // 2. Product (custom operation)
    int prod = std::accumulate(v.begin(), v.end(), 1,
                               std::multiplies<int>());          // 120

    // 3. Lambda: sum of squares
    int sq = std::accumulate(v.begin(), v.end(), 0,
                             [](int acc, int x) { return acc + x * x; });  // 55

    // 4. String concatenation
    std::vector<std::string> words{"a", "b", "c"};
    std::string s = std::accumulate(words.begin(), words.end(), std::string{});  // "abc"

    std::cout << sum << ' ' << prod << ' ' << sq << ' ' << s << '\n';
}