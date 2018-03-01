//Joe Nitro

#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<time.h>
using namespace std;

int n = 0;
int arr[10] = {};

void printMenu () {
    cout << endl;
    cout << "------------------\n"
        << "  Sorting Arrays  \n"
        << "------------------\n"
        << "1. Bubble Sort    \n"
        << "2. Insertion Sort \n"
        << "3. Selection Sort \n"
        << "------------------\n"
        << "Enter Choice: ";
}
void bubbleSort (int *arr) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1; j++) {
            if( arr[j+1], arr[j]) {
                swap(arr[j+1], arr[j]);
            }
        }
    }
}
int main () {
    int x = 0;
    cout << endl;
    printMenu ();
    cin >> x;
    cout << endl;
    while(x != 1 && x != 2) {
        cin >> x;
    }
    srand(time(NULL));
    switch(x) {
        case 1:
            cout << "Bubble Search: \n";
            cout << "Enter n: ";
            cin >> n;
            for(int i = 0; i < n; i++) {
                arr[i] = rand () % 100;
            }
            bubbleSort(arr);
            for(int i = 0; i < n; i++) {
                cout << arr[i] << ", ";
            }
            break; 
        case 2:
            break;
        default:
            break;
    }
    return 0;
}
