#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using namespace std;

int main() {
  double x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0;
  cout << "Enter income for 2022: ";
  cin >> x1;
  cout << "Enter income for 2021: ";
  cin >> x2;
  cout << "Enter income for 2020: ";
  cin >> x3;
  cout << "Enter income for 2019: ";
  cin >> x4;
  cout << "Enter income for 2018: ";
  cin >> x5;
  double avg = (x1+x2+x3+x4+x5)/5.0;
  cout << "\nIncome (averaged over the past 5 years) is: " << fixed << setprecision(2) << avg;
  return 0;
}