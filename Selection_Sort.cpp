#include <iostream>
using namespace std;

int main(){
    int n;
    int a[n];
    cout << "Enter values to be Sorted:\n ";

    for (int i = 0; i < n; i++){
        cout << "Enter value " << i + 1 << ": ";
        cin >> a[i];
    }

    int f, t;
    for (int i = 0; i < n; i++){
        f = i;
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[f]){
                f = j;
            }
        }
        t = a[i];
        a[i] = a[f];
        a[f] = t;
    }

    cout << "Sorted Array is: ";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    cout << "\n";
    return 0;
}