#include <iostream>
using namespace std;
int main(){
    
    int p;
    cin >> p;
    int r;
    cin >> r;
    int t;
    cin >> t;
    cout << p * r * t / 100;
    cout << endl;
    cout << (p * r * t) / 100.0 << endl;
    cout << ((double) p*r*t) / 100;
    double si = ((double)p*r*t/100);
    cout << si << endl;
}