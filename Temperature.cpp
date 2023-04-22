#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int F;
    double C;
    cout << "Enter the temperature in Fahrenheit:";
    cin >> F;
    C = round((F - 32) * 5.0 / 9.0 * 10) / 10.0;
    cout << "Temperature in Celsius: " << fixed << setprecision(1) << C << endl;
    return 0;
}

