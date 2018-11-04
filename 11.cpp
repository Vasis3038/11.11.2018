# 11.11.2018
/*11) Напишите процедуру, удаляющую из динамически выделенного массива
максимальный и минимальный элементы (если таковых несколько – удалить
нужно все). По окончании работы процедуры количество выделенной памяти
должно уменьшиться.*/

#include <iostream>

using namespace std;

void pb(int *&arr,int &size){
    int m = 0, k = 0, r;
    int * T;
int big = arr[0], small = arr[0];
    for(int i = 0; i<size; i++)//определение максимального
    {
        if (arr[i]>=big) {big = arr[i];}
        if (arr[i]<=small) {small = arr[i];}
    }
        for(int i = 0; i<size; i++)//кол-во ненужных эл-ов
    {
        if (arr[i]==big){k++;}
        if(arr[i]==small){k++;}
    }
for(int i = 0; i<size; i++){//сортировка
  for(int i = 0; i<size; i++)
{
    if (arr[i] == big)
    {
    m = arr[i];
        for(int g = i; g <size-1; g++)
            {
                arr[g] = arr[g+1];
            }
        arr[size-1] = m;
    }
}
m=0;
 for(int i = 0; i<size; i++)
    {
    if (arr[i] == small)
    {
    m = arr[i];
        for(int g = i; g <size-1; g++)
            {
                arr[g] = arr[g+1];
            }
        arr[size-1] = m;
    }
    }
                            }
T = new int [size-k];

for (int i = 0; i<(size-k); i++){
    T[i]=arr[i];
}
 delete [] arr;
   size=(size-k);
   arr = T;

}

int main(){
    int n;
    cin >> n;
    int *A = new int [n];
    for(int i = 0; i<n ; i++){
        cin >> A[i];
    }
     cout <<" "<< endl;

     pb(A,n);
        for(int i = 0; i<n ; i++){
        cout << A[i]<< endl;
    }

    return 0;
}
