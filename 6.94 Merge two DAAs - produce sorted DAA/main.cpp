// Write a function that merges two sorted dynamic allocated array (DAA), producing a new sorted DAA. Keep an index into each DAA, indicating how much of it has been processed already. Each time, append the smallest unprocessed element from either DAA, then advance the index. For example,
//
// if array a is
// 1 4 9 16
//
// and array b is
// 4 7 9 9 11
//
// then merge_sorted returns a new DAA
// 1 4 4 7 9 9 9 11 16
// int* merge_sorted(int* a, int n, int* b, int m)

#include <iostream>
#include <vector>
using namespace std;

/**
 * Write a Swap function that swap first and second value
 * @param xp a pointer to the first value
 * @param yp a pointer to the second value
 * No return value
 */

void Swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 /**
 * Write BubbleSort function: sort the DAA in place
 * @param x is a dynamic allocated array (DAA)
 * @param n DAA size
 * No return
 * Note: Look up a bubule sort algorithm that use swap function
 * Note: use the swap function to swap values as described in the bubble sort algorithm.
 *
 */
void BubbleSort(int *x, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (x[j] > x[j+1]) {
                Swap(&x[j], &x[j+1]);
            }
        }
    }
}

/**
 * Write a GetUserValues function to ask user to enter number of inputs and return a new DAA
 * @param numValues number of inputs
 * @return a dynamic allocated array
 * Note: the parameter is the number of inputs that the user will enter
 */

int* GetUserValues (int numValues) {
    int userInput;
    int* arr = new int(userInput);

    for (int i = 0; i < numValues; ++i) {
        cin >> userInput;
        arr[i] = userInput;
    }
    return arr;
}
 /**
 * MergeSorted function: merge two sorted DAA and return a new sort DAA
 * @param a first DAA
 * @param n first DAA size
 * @param b second DAA
 * @param m second DAA size
 * @return a merged sorted DAA
 */

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
/**
 * PrintArray function: to print a DAA
 * @param arr DAA to be printed
 * @param size size of DAA
 * No return
 */

void PrintArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() { // Begin Main

    // Vectors and variable
    int n, m, k = 0;
    int* a1 = new int(n);
    int* a2 = new int(m);
    int* c = new int(k);
    //
    cout << "Enter the first list of inputs begins with an integer indicating the number of integers that follow: " << endl;
    cin >> n;

    //TODO: Call GetUserValues to fill up the first DAA using n as the size for the array
    a1 = GetUserValues(n);

    cout << "Print array1: " << endl;
    PrintArray(a1, n);

    cout << "Enter the second list of inputs begins with an integer indicating the number of integers that follow: " << endl;
    cin >> m;
    a2 = GetUserValues(m);
    cout << "Print array2: " << endl;
    PrintArray(a2, m);

    // Calculate the size of the merged array
    k = n + m;

    //TODO: Call GetUserValues to fill up the second DAA using m as the size for the array


    // TODO: call bubble sort function to sort the two DAA individually.
    BubbleSort(a1, n);
    BubbleSort(a2, m);


    // TODO: merge two sorted array
    // Note: merge sort function returns a merge DAA array
    c = MergeSorted(a1, n, a2, m);


    // Print results
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

