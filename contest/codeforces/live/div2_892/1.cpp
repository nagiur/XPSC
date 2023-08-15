#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr_a = {1,2,3,4,5};
    vector<int> arr_b, arr_c;

    for (int i = 0; i < arr_a.size(); ++i) {
        bool addToArrB = true;

        for (int j = 0; j < arr_a.size(); ++j) {
            if ( arr_a[i] % arr_c[j] != 0) {
                addToArrB = false;
                break;
            }
        }

        if (addToArrB) {
            arr_b.push_back(arr_a[i]);
        } else {
            arr_c.push_back(arr_a[i]);
        }
    }

    cout << "arr_b: ";
    for (int num : arr_b) {
        cout << num << " ";
    }
    cout << endl;

    cout << "arr_c: ";
    for (int num : arr_c) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
