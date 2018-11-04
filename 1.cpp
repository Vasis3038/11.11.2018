//1) Напишите программу, вычисляющую сумму нечетных цифр целого числа

#include <iostream>

using namespace std;

int main()
{
    int answer;
    int k = 1;
    int M;
    cin >> M;
    int T = M;
    if (M == 0)
    {
         answer = 0;
    }
    while ( (M/10) != 0) {
        M = M/10;
        k++;
    }
    while(k != 0){
    int f = (T % 10);
        if ((f%2)!= 0) {
        answer = answer + f;
        }
    T = T / 10;
    k= k-1;
    }
cout << answer;
    return 0;
}
