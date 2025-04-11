#include <iostream>
#include <algorithm>
using namespace std;


void swapRowAndColumn(int a[5][5], int n) {
    int minElem = a[0][0];
    int minRow = 0, minCol = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < minElem) {
                minElem = a[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        swap(a[minRow][i], a[i][minCol]);
    }
}


void sortSecondRow(int a[5][5], int n) {
    sort(a[1], a[1] + n, greater<int>());
}

int main() {
    int a[5][5] = {
        {9, 2, 5, 1, 6},
        {4, 7, 3, 8, 2},
        {6, 1, 0, 5, 7},
        {3, 9, 2, 4, 8},
        {8, 5, 1, 7, 2}
    };

    int n = 5; 

    
    cout << "Initial matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

   
    swapRowAndColumn(a, n);

   
    cout << "\nMatrix after changing row and column:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

   
    sortSecondRow(a, n);

    
    cout << "\nThe matrix after sorting the second row in descending order:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
