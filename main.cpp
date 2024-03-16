#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> numeros = {5, 11, 30, 15, 40}; // Vector predefinido
    int num;

    cout << "Ingrese un numero:" << endl;
    cin >> num;

    auto it = find(numeros.begin(), numeros.end(), num);

    if (it != numeros.end()) {
        int index = distance(numeros.begin(), it);
        cout << "El numero " << num << " esta presente en el vector en la posicion " << index << "." << endl;
    } else {
        cout << "El numero " << num << " no esta presente en el vector." << endl;
    }

    return 0;
}