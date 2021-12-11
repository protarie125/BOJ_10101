#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    auto ls = set<int>{};
    auto sum = int{ 0 };
    for (int i = 0; i < 3; ++i)
    {
        int x;
        cin >> x;

        ls.insert(x);
        sum += x;
    }

    if (180 != sum) {
        cout << "Error";
        return 0;
    }

    const auto& sz = ls.size();
    if (1 == sz) {
        cout << "Equilateral";
    }
    else if (2 == sz) {
        cout << "Isosceles";
    }
    else {
        cout << "Scalene";
    }

    return 0;
}