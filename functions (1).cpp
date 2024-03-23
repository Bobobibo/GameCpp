#include <iostream>

int bitSum(unsigned n) {
    int s=0;
    do
        s += n & 1;
     while(n >>= 1);
    return s;
}


int nod(int n, int m) { // recursive
    if (n == m)
        return n;
    if (n > m)
        return nod(n % m, n);
    return nod(n, m % n);
}


int nod(int n, int m) {
    while (n != m)
        if (n < m)
            m = m % n;
        else
            n = n % m;
    return n;
}

int data [10000];

int arrayMin(int n) {
    int min = data[0];
    for(int i = 1; i < n; ++i)
        if(data[i] < min)
            min = data[i];
    return min;
}


