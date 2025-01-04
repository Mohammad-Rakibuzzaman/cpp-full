#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cmath>
#include <limits>
#include <numeric>
#include <utility>
#include <sstream>

// Add other essential headers as needed

using namespace std;

// Function to test the setup
void test() {
    cout << "Hello, World!" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Running test function
    test();

    // Sample input to test competitive programming setup
    // (Uncomment and edit as needed for different problems)
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Example: Sort and print the array
    sort(arr.begin(), arr.end());
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    

    return 0;
}
