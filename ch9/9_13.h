#ifndef HEADER_9_13_H
#define HEADER_9_13_H

template <class T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
void bubbleSort(T a[], int n) {
    int i = n - 1;
    while(i > 0) {
        int lastExchangeIndex = 0;
        for(int j = 0; j < i; j++)
            if(a[j] > a[j + 1]) {
                mySwap(a[j], a[j + 1]);
                lastExchangeIndex = j;
            }
        i = lastExchangeIndex; 
    }
}
#endif  //HEADER_9_13_H