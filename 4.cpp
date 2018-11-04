# 11.11.2018
//4) Напишите программу, находящую сумму простых элементов массива.
#include <iostream>

using namespace std;

int main()
{
    int g = 2, answer = 0, n, l, m = 0;
    int A[n];
    cin >> n;
    for (int i = 0; i<n; i++)
    {
      cin >> A[i];
    }

        for (l = 0; l < n; l++)
    {
        int i = 1;
        if (i != A[l]) {
           while (i <= A[l]) {
               if (A[l]%i == 0)  m = m+1;
               i++;
           }
           if (m == 2){ answer = answer + A[l];

           }
            m = 0;
        }
}
cout << answer;
    return 0;
}

