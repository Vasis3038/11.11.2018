# 11.11.2018
/*3) Напишите программу, вычисляющую биномиальный коэффициент из n по к. В
программе нельзя использовать числа, превышающие итоговое значение.*/
#include <iostream>

using namespace std;

double binom(int n, int k){
    double ans;
int t, tf, g;
tf = n;
   for (int i = 1; i!=n; i++)
   {
       tf = i * tf;
   }

 t=k;
    for (int i = 1; i!=k; i++)
   {
       t = i * t;
   }

 g=(n-k);
    for (int i = 1; i!=(n-k); i++)
   {
       g = i * g;
   }

ans = tf/(t*g);
return ans;
}
int main()
{
    double x;
    int t =12, tf=2;
   x = binom(t,tf);
   cout<<x;
}
