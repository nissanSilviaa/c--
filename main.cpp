#include <iostream>
#include <string>

using namespace std;

int main()
{
    double temp;
    cout << "Enter Fahrenheit: ";
    cin >> temp;
    double celsius = (temp - 32) * 5/9 ;
    cout << celsius << endl;
    
    return 0;
}