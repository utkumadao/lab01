#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello " << name << endl;

    int var_ID;
    cout << "What is your Student ID? ";
    cin >> var_ID;
    cout << "Your ID is " << var_ID << endl;

    int var1, var2;
    cout << "Please write number 1 variable: ";
    cin >> var1;
    cout << "Please write number 2 variable: ";
    cin >> var2;

    int var_sum = var1 + var2;
    int var_diff = abs(var1 - var2);
    int var_prod = var1 * var2;

    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    cout << "sum: " << var_sum << endl;
    cout << "diff: " << var_diff << endl;
    cout << "prod: " << var_prod << endl;

    string nameStd;
    cout << "Name? ";
    cin >> nameStd;
    cout << "Name: " << nameStd << endl;

    int lab;
    cout << "Lab point? ";
    cin >> lab;
    float labG = lab * 0.25;
    cout << "Lab: " << lab << endl;

    int midterm;
    cout << "Midterm point? ";
    cin >> midterm;
    float midtermG = midterm * 0.35;
    cout << "Midterm: " << midterm << endl;

    int final;
    cout << "Final point? ";
    cin >> final;
    float finalG = final * 0.4;
    cout << "Lab: " << final << endl;

    cout << "Calculating last score..." << endl;
    float lastScore = labG + midtermG + finalG;
    cout << "Last Score: " << lastScore << endl;

    cout << "*\n**\n***\n**\n*" << endl;

    return 0;
}
