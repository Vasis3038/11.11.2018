# 11.11.2018
/*5) Напишите программу, заменяющую составные числа на их самые большие
простые делители.*/
#include <iostream>
using namespace std;

void swap (int*a, int*b){
    int t = *a;
    *a=*b;
    *b=t;
}

int main()
{
    int i = 1, max = 0, n=0, M, g = 1, r = 0;

    cin >> M;
    while (i<=M){
            if (M%i == 0) {
                    while (g<=i) {
                        if (i%g == 0) {//g - это делитель М
                    while (g!=r){
                                    r++;
                                    if (g%r == 0) n = n+1;
                    }
                    if (n == 2) max = g;
                    n=0;
                    r=0;

                        }
            g++;
                    }
            }
        i++;
    }
    swap(&M,&max);
    cout << M;
    return 0;
}
