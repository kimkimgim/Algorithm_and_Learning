#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; 
    cin >> n;

    while (n--) {
        int p;
        cin >> p;

        int maxPrice = 0;
        string mostEP;

        for (int i = 0; i < p; ++i) {
            int price;
            string name;
            cin >> price >> name;

            if (price > maxPrice) {
                maxPrice = price;
                mostEP = name;
            }
        }

        cout << mostEP << '\n';
    }

    return 0;
}