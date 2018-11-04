# 11.11.2018
/*2) Напишите программу, вычисляющую произведение цифр целого числа, чётность
которых совпадает с чётностью последней цифры.*/
#include <iostream>

using namespace std;

int main()
{
    int answer;
    int M, k = 1;
    cin >> M;
    int L = M;
    int T = M;
    if (M == 0)
    {
         answer = 1;
    }
    while ( (M/10) != 0) {
        M = M/10;
        k++;
    }

    while(k != 0){
    int f = (T % 10);

    T = T / 10;
    k= k-1;

    if ((L%2) != 0){
        if ((f%2)!= 0) answer = answer*f;
        else
        answer = answer;
        }

    if ((L%2) == 0){
        if ((f%2)== 0) answer = answer*f;
        }

    }
cout << answer;
    return 0;
}
