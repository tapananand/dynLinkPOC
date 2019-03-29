#include<iostream>
#include <time.h>

using namespace std;

int doubler(int a) {
    clock_t t;
    t = clock();
    int b = 2 * a;
    t = clock() - t;
    float c = (((float)t)/CLOCKS_PER_SEC);
    // cout << c << endl;
    return (int)(c + 100);
}
