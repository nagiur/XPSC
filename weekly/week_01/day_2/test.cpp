#include <iostream>

using namespace std;

int main() {
    int digit = 0;
    // int digit = 102;

    printf("%d - %c\n", digit, 48+digit);

    char ch = 48+digit;
    cout<<ch;
    for (int i = 49; i < 68; i++) {
        // printf("%d - %c \n", i, i );
    }

    return 0;
}