#include <iostream>
using namespace std;
double sestej(double a, double b) {
    return a + b;
}
double odstej(double a, double b) {
    return a - b;
}
double mnozi(double a, double b) {
    return a * b;
}
double deli(double a, double b) {
    return a / b;
}
double ostanek(double a,double b){
    return a % b;
}
void meni(){
    cout << "------------Kalkulator 3.0 v C#------------" << endl;
    cout << "---------------------------------------" << endl;
    cout << "----------Navodila za uporabo:---------" << endl;
    cout << "-----1. vpiši število prvo število-----" << endl;
    cout << "-------2. vpiši operator(+,-,*,/,%)-------" << endl;
    cout << "--------3. vpiši tretjo število--------" << endl;
    cout << "---------------------------------------" << endl;
    cout << endl;
}
int main(){
    double a;
    char operacija;
    double b;
    double rez;
    meni();
    cout << "prvo število: ";
    cin >> a;
    cout << "operacija: ";
    cin >> operacija;
    cout << "drugo število: ";
    cin >> b;
    switch (operacija)
    {
        case '+':
            rez = sestej(a,b);
        case '-':
            rez = odstej(a,b);
        case '*':
            rez = mnozi(a,b);
        case '/':
            rez = deli(a,b);
        case '%':
            rez = ostanek(a,b);
    }
    cout << a << ' ' << operacija << ' ' << b << " = " << rez << endl; 
    return 0;
}
