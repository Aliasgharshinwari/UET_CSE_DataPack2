#include <iostream>
using namespace std;

int bin_search(int Array[], int key, int l, int r)
{
    if (l <= r) {

        int m = (l + r) / 2;
        if (Array[m] == key)
            return m;

        else if (Array[m] < key)
            return bin_search(Array, key, m + 1, r);

        else
            return bin_search(Array, key, l, m - 1);
    }
    return -1;
}

int main()
{
    int SIZE = 5;
    int Array[SIZE] = {2, 3, 6, 2, 8};

    int i = bin_search(Array, 8, 0, SIZE - 1);
    if (i != -1)
        cout << "Found: The Index is: " << i << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
