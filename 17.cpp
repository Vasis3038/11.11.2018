/*17) Напишите процедуру, заполняющую квадратный двумерный массив
последовательными числами змейкой против часовой стрелки, начиная с верхнего
правого угла.
Пример для массива размера 5х5:
5 4 3 2 1
6 19 18 17 16
7 20 25 24 25
8 21 22 23 14
9 10 11 12 13*/
#include <iostream>

using namespace std;

void snake(int n){

int h = n-1;
    int A[n][n];
    int m = 0;

    int q = n-1;
    int qq = 0;

    int s = 1;
    int ss = n;

    int k = 1;
    int kp = n;

    int t = n-2;
    int tt = 0;


            for(int g = 0; g<n-2; g++){

    for (int i = q; i>=qq; i--)
    {
        m++;
        A[g][i]=m;
        if (m==n*n) break;
    }
    q--;
    qq++;
 if (m==n*n+1) break;

        for (int p = s; p<ss; p++){
                     m++;
        A[p][g]=m;
         if (m == n*n+1) break;
    }
    s++;
    ss--;
 if (m==n*n+1) break;
       for ( int y = k; y<kp; y++){
              m++;
        A[h][y]=m;

         if (m==n*n+1) break;
    }

    k++;
    kp--;
 if (m==n*n+1) break;

       for ( int o = t; o>tt; o--){
             m++;
        A[o][h]=m;

         if (m==n*n+1) break;
    }
    t--;
    tt++;
 if (m==n*n+1) break;
    h--;
    }




    for(int i = 0; i<n; i++){
        for (int g = 0; g<n; g++){
      cout << A[i][g];}
      cout << endl;
          }
}




int main()
{
    int n = 5;
    snake(n);
    return 0;
}
