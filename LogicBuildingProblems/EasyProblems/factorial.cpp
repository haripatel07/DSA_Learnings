#include <iostream>
using namespace std;

int factorial(int n){
    int res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}