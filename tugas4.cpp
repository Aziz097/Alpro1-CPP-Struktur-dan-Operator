// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;

//   cin >> n;
//   int space = n - 1;

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = space; j > 0; j--)
//     {
//       cout << " ";
//     }
//     space--;
//     for (int j = 0; j <= i; j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   space = 0;
//   for (int i = n; i > 0; i--)
//   {
//     for (int j = space; j > 0; j--)
//     {
//       cout << " ";
//     }
//     space++;
//     for (int j = 0; j < i; j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// looping segitiga
//  #include<iostream>
//  using namespace std;
//   int main () {
//       int n;
//       cout << "Masukan sebuah bilangan bulat: ";
//       cin >> n;
//       for (int i = n; i > 0; i--) {
//           for (int j=i;j>0;j--) {
//               cout << "# 5";
//           }
//           cout << endl;
//       }
//      return 0;
//   }
// cek prima
//  #include<iostream>

// using namespace std;

// int main() {

// int n;

// cout << "Masukan sebuah bilangan bulat: ";

// cin >> n;

// int i = 2;

// bool isPrime = true;

// while (i < n && isPrime)

// {

// if(n % i == 0 && n != 2 && n != 3)

// {

// isPrime = false;

// }

// i++;

// }

// if (isPrime) {

// cout << "Bilangan yang dimasukan adalah bilangan prima";

// } else {

// cout << "Bilangan yang dimasukan BUKAN bilangan prima";

// }

// return 0;

// }

// soal soal praktikum 2019-2020
// ak 1(fungsi)

// #include <iostream>
// using namespace std;

// int appa(int A, int B)
// {
//   int bbb;
//   bbb = A;
//   cout << bbb << ",";
//   B--;
//   for (int i = 1; i < B; i++)
//   {
//     if (A == 0)
//     {
//       bbb = bbb * 0;
//       cout << bbb << ",";
//     }
//     if (i % 2 == 0 && A != 0)
//     {
//       bbb = bbb * A;
//       cout << bbb << ",";
//     }
//     else if (i % 2 == 1 && A != 0)
//     {
//       bbb = bbb * A * -1;
//       cout << bbb << ",";
//     }
//   }
//   cout << bbb * A * -1;
// }
// int main()
// {
//   int a, b;
//   cin >> a;
//   cin >> b;
//   appa(a, b);
// }

// ak 2 (fungsi prima)
// #include <iostream>
// using namespace std;

// int tentukan(int A)
// {
//   if (A % 3 == 1)
//   {
//     cout << "Prima";
//   }
//   else
//   {
//     cout << "Bukan Prima";
//   }
// }
// int main()
// {
//   int a, hasil;
//   cin >> a;
//   if (a <= 100000 && a >= 1)
//   {
//     hasil = tentukan(a);
//   }
// }

// ak 3
// #include <iostream>
// using namespace std;

// int main()
// {
//   int a, b;
//   cin >> a;
//   cin >> b;
//   int skrtt[a][b];

//   for (int i = 0; i < a; i++)
//   {
//     for (int j = 0; j < b; j++)
//     {
//       cin >> skrtt[i][j];
//     }
//   }
//   cout << endl;

//   for (int i = 0; i < a; i++)
//   {
//     for (int j = 0; j < b; j++)
//     {
//       cout << skrtt[i][j];
//     }
//     cout << endl;
//   }
//   cout << endl;

//   for (int i = 0; i < a; i++)
//   {
//     for (int j = a - 1; j >= 0; j--)
//     {
//       cout << skrtt[i][j];
//     }
//     cout << endl;
//   }
// }

// AK 6 (FPB)
// #include <iostream>
// using namespace std;

// int faktor(int A, int B)
// {
//   int FPB, G;
//   G = A / B;
//   cout << G;
//   return G;
// }
// int main()
// {
//   int a, b, hasil;
//   cin >> a;
//   cin >> b;

//   faktor(a, b);
// }

// AK 9 (anoninumus)
// #include <iostream>
// using namespace std;

// int main()
// {
//   int a, n, x, y;

//   cout << "Masukkan Angka N" << endl;
//   cin >> n;
//   cout << "Masukkan Angka X" << endl;
//   cin >> x;
//   cout << "Masukkan Angka Y" << endl;
//   cin >> y;

//   a = 0;
//   for (int i = 0; i < y + 1; i++)
//   {
//     a = a + x;
//   }
//   cout << endl;
//   if (n == a + y)
//   {
//     cout << "YES";
//   }
//   else
//   {
//     cout << "NO";
//   }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;

//   cin >> n;
//   int space = n - 1;

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = space; j > 0; j--)
//     {
//       cout << " ";
//     }
//     space--;
//     for (int j = 0; j <= i; j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   space = 0;

//   for (int i = n; i > 0; i--)
//   {
//     for (int j = space; j > 0; j--)
//     {
//       cout << " ";
//     }
//     space++;
//     for (int j = 0; j < i; j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// sub program membuat fungsi penentu nilai terbesar dari 3 inputan
// #include <iostream>
// using namespace std;

// int max(int a, int b)
// {
//   if (a > b)
//   {
//     return a;
//   }
//   else
//   {
//     return b;
//   }
// }

// int max3(int a, int b, int c)
// {
//   if (max(a, b) == a && max(a, c) == a)
//   {
//     return a;
//   }
//   else if (max(a, b) == b && max(b, c) == b)
//   {
//     return b;
//   }
//   else
//   {
//     return c;
//   }
// }

// int main()
// {
//   int a, b, c, hasil;
//   cout << "Masukkan tiga angka " << endl;
//   cin >> a >> b >> c;
//   hasil = max3(a, b, c);
//   cout << "Nilai terbesarnya adalah " << hasil;
// }

// #include <iostream>

// using namespace std;

// int pangkat(int a, int b)
// {
//   int sum = a;
//   for (int i = 1; i < b; i++)
//   {
//     sum *= a;
//   }
//   return sum;
// }

// int main()
// {
//   int x, y;
//   cout << "Masukkan angka yang akan dipangkat 2 : ";
//   cin >> x;
//   cout << "Masukkan angka yang akan dipangkat 3 : ";
//   cin >> y;

//   cout << "Hasilnya adalah : " << pangkat(x, 2) + pangkat(y, 3) << endl;
//   return 0;
// }

// #include <iostream>

// using namespace std;

// float kalkulator(float a, float b, char c)
// {
//   if (c == '+')
//   {
//     return a + b;
//   }
//   else if (c == '-')
//   {
//     return a - b;
//   }
//   else if (c == '*')
//   {
//     return a * b;
//   }
//   else if (c == '/')
//   {
//     return a / b;
//   }
// }

// int main()
// {
//   float a, b;
//   char operasi;

//   cout << "Masukkan angka pertama : ";
//   cin >> a;
//   cout << "Masukkan angka kedua : ";
//   cin >> b;
//   cout << "Masukkan operasi : ";
//   cin >> operasi;
//   cout << kalkulator(a, b, operasi) << endl;
//   return 0;
// }

#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

int main()
{

  cout << "The quiet NaN for type float is:  "
       << numeric_limits<float>::quiet_NaN()
       << endl;

  float f_nan = numeric_limits<float>::quiet_NaN();

  if (isnan(f_nan))
  {
    cout << "Float was Not a Number: " << f_nan << endl;
  }

  return 0;
}