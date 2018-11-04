# 11.11.2018
/*12) Напишите процедуру, дописывающую к каждому элементу динамически
выделенного массива справа его квадрат.({1,2,3,4}->{1,1,2,4,3,9,4,16}). По
окончании работы процедуры количество выделенной памяти должно
увеличиться.*/

#include <iostream>

using namespace std;

void square(int *&a, int &n){
    int *T;
    int  g = 0;
    int m =a[0];
    T = new int[n];
    for(int i = 0; i<n; i++){
        T[i]=a[i];
                            }
  n = n*2;
    for(int i = 0; i<n; i=i+2){

a[i]=T[g];

a[i+1]=T[g]*T[g];
g++;
    }
    delete [] T;
  a[0] = m;
}

int main()
{
    int n = 5;
    int * arr = new int [n];
    for(int i=0; i < n; i++){
        cin>>arr[i];
    }
    square(arr, n);
        for(int i=0; i < n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
