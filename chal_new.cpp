#include <iostream>
#include <string>

using namespace std;

#define XOR_KEY 0x55
#define FLAG_LEN 22

int main() {

    unsigned char encoded[FLAG_LEN] = {
        0x21, 0x20, 0x34, 0x3D, 0x2E, 0x27,
        0x66, 0x23, 0x66, 0x27, 0x26, 0x66,
        0x0A, 0x3C, 0x60, 0x0A, 0x33, 0x20,
        0x3B, 0x74, 0x74, 0x28
    };

    cout << "Flag> ";
    string flag;
    getline(cin, flag);

    if (flag.length() != FLAG_LEN) {
        cout << "Wrong!";
        return 0;
    }

    for (int i = 0; i < FLAG_LEN; i++) {
        if ((flag[i] ^ XOR_KEY) != encoded[i]) {
            cout << "Wrong!";
            return 0;
        }
    }

    cout << "Correct!" << endl;
    return 0;
}
