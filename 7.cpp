# 11.11.2018
/*7) Напишите программу, выписывающую все элементы последовательности,
имеющие ровно семь делителей*/

#include <iostream>

#include <iostream>

using namespace std;

int main()
{
    int n, m, A[n], k = 0, t = 0, g = 1;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
      cin >> A[i];
      while(A[i]>=k){
        k++;
        if(A[i]%k==0) t = t+1;
      }
      if (t==7)cout <<"->" <<A[i]<< "<-"<< endl;
      t = 0;
k=0;
    }
    return 0;
}
