#include <iostream>
using namespace std;

int main () {
    int sales = 95000;
    int stateTax = sales * 0.04;
    int countyTax = sales * 0.02;
    int totalTaxes = stateTax + countyTax; 
    cout << sales << endl;
    cout << countyTax << endl;
    cout << totalTaxes << endl;
    return 0;
}