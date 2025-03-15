#include <iostream>
#include <vector>
using namespace std;

void Swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void BubbleSort(int *x, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (x[j] > x[j+1]) {
                Swap(&x[j], &x[j+1]);
            }
        }
    }
}


int* GetUserValues (int numValues) {
    int userInput;
    int* arr = new int(userInput);

    for (int i = 0; i < numValues; ++i) {
        cin >> userInput;
        arr[i] = userInput;
    }
    return arr;
}

int* MergeSorted(int *a, int n, int *b, int m)
{
    int *c = new int[n+m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < n) {
        c[k++] = a[i++];
    }
    while (j < m) {
        c[k++] = b[j++];
    }
    return c;
}


void PrintArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() { // Begin Main

    int n, m, k = 0;
    int* a1 = new int(n);
    int* a2 = new int(m);
    int* c = new int(k);
    //
    cout << "Enter the first list of inputs begins with an integer indicating the number of integers that follow: " << endl;
    cin >> n;

    a1 = GetUserValues(n);

    cout << "Print array1: " << endl;
    PrintArray(a1, n);

    cout << "Enter the second list of inputs begins with an integer indicating the number of integers that follow: " << endl;
    cin >> m;
    a2 = GetUserValues(m);
    cout << "Print array2: " << endl;
    PrintArray(a2, m);

    k = n + m;



    BubbleSort(a1, n);
    BubbleSort(a2, m);


    c = MergeSorted(a1, n, a2, m);


    cout << "Result of merge sort of a1 and a2 is " << endl;
    PrintArray(a1, n);  // print the first DAA
    PrintArray(a2, m);  // print the second DAA
    PrintArray(c, k);   // print the merged DAA
    cout << endl;

    // Clean up dynamically allocated memory
    delete[] a1;
    delete[] a2;
    delete[] c;

    return 0;
} // End Main

