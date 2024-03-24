#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int i = 1,number , smallestN = INT16_MAX, largestN = INT16_MIN;

    do {
       cout << i << ". sayi: ";
       cin >> number;

       if (number == 0) break;
       if (number < smallestN) {
        smallestN = number;
       }
       if (number > largestN) {
        largestN = number;
       }
       i++;
    } while (number != 0);
    cout << "En buyuk sayimiz : " << largestN << endl;
    cout << "En kucuk sayimiz : " << smallestN << endl;
}