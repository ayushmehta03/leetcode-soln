#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1};
    sort(v.begin(), v.end());
    for (int x : v) cout << x << " ";
    return 0;
}
