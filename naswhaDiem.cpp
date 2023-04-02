// #include <iostream>
// using namespace std;

// int main()
// {
//   int n, m, sum = 1;
//   cin >> n >> m;
//   for (int i = 1; i <= m; i++)
//   {
//     if (i % 2 != 0)
//     {
//       sum = sum * n;
//        if (i==m){
//         cout <<sum;
//         }
//       else{
//             cout << sum<<", ";
//       }

//     }
//     else
//     {
//       sum = sum * n;
//         if (i==m){
//       cout <<-sum;
//         }
//         else{
//             cout << -sum<<", ";
//         }

//     }
//   }
// }

// membuat sub program bilangan prima
// #include <iostream>
// using namespace std;

// void isPrime(int n)
// {
//   int i = 2;
//   bool prime = true;
//   while (i <= n / 2)
//   {
//     if (n % i == 0)
//     {
//       prime = false;
//       break;
//     }
//     i++;
//   }
//   if (prime)
//   {
//     cout << "Prima" << endl;
//   }
//   else
//   {
//     cout << "Bukan Prima" << endl;
//   }
// }
// int main()
// {
//   int n;
//   cin >> n;
//   isPrime(n);
// }

// membuat sub program FPB
// #include <iostream>
// using namespace std;

// int FPB(int a, int b)
// {
//   int c;
//   while (b != 0)
//   {
//     c = a % b;
//     a = b;
//     b = c;
//   }
//   return a;
// }
// int main()
// {
//   int a, b;
//   cin >> a >> b;
//   cout << FPB(a, b) << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, m;
//   cin >> n;
//   m = n + 1;
//   for (int i = 1; i <= m; i++)
//   {
//     for (int j = 1; j <= m - i; j++)
//       cout << " ";
//     for (int k = 1; k <= 2 * i - 1; k++)
//     {
//       if (k == 1 || k == 2 * i - 1)
//         cout << "*";
//       else
//         cout << " ";
//     }
//     cout << endl;
//   }
//   for (int i = m - 1; i >= 1; i--)
//   {
//     for (int j = 1; j <= m - i; j++)
//       cout << " ";
//     for (int k = 1; k <= 2 * i - 1; k++)
//     {
//       if (k == 1 || k == 2 * i - 1)
//         cout << "*";
//       else
//         cout << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// membuat fungsi faktorial
// #include <iostream>
// using namespace std;

// int faktorial(int n)
// {
//   int hasil = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     hasil = hasil * i;
//   }
//   return hasil;
// }
// int main()
// {
//   int n;
//   cin >> n;
//   cout << faktorial(n) << endl;
// }

#include <iostream>
#include <array>
using namespace std;

int main()
{

  array<int, 5> nilai;
  for (int i = 0; i < nilai.size(); i++)
  {
    cout << "Masukkan nilai ke-" << i + 1 << ": ";
    cin >> nilai[i];
  }
  cout << nilai[0] << endl;
  cout << nilai[3] << endl;
  cout << nilai[4] << endl;

  return 0;
}