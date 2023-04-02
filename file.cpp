// Operator CPP
// Aritmatik
// +	Addition	Adds together two values	x + y
// -	Subtraction	Subtracts one value from another	x - y
// *	Multiplication	Multiplies two values	x * y
// /	Division	Divides one value by another	x / y
// %	Modulus	Returns the division remainder	x % y
// ++	Increment	Increases the value of a variable by 1	++x
// --	Decrement	Decreases the value of a variable by 1	--x

// Komparasi
// ==	Equal to	x == y
// !=	Not equal	x != y
// >	Greater than	x > y
// <	Less than	x < y
// >=	Greater than or equal to	x >= y
// <=	Less than or equal to	x <= y

// Logika
// && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10
// || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4
// !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

#include <iostream>
using namespace std;

int main()
{
  int sum1 = 100 + 50;    // 150 (100 + 50)
  int sum2 = sum1 + 250;  // 400 (150 + 250)
  int sum3 = sum2 + sum2; // 800 (400 + 400)

  cout << sum1 << endl;
  cout << sum2 << endl;
  cout << sum3 << endl;

  int x = 10;
  int y = 3;
  int z = x / y;
  cout << z << endl;

  // menghitung luas lingkaran
  const float PI = 3.14;
  float R, luas, keliling;

  cout << "Inputkan N: ";
  cin >> R;

  cout << "\n";
  cout << "Menghitung luas lingkaran";
  luas = PI * R * R;
  keliling = 2 * PI * R;

  cout << "\n";
  cout << "Luas : " << luas;
  cout << "\n";
  cout << "Keliling : " << keliling;

  cout << endl;

  return 0;
}
