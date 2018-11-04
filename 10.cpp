# 11.11.2018
/*10) Напишите процедуру, удаляющую из динамически выделенного массива все
четные значения (функция принимает в качестве аргументов – указатель на
массив и его размер). По окончании работы процедуры количество выделенной
памяти должно уменьшиться.*/
#include <iostream>

using namespace std;
void pb(int *&arr,int &size)
{
    bool flag = 0;
    int m = 0, k = 0, j=0;
    int * T;
    for(int i = 0; i<size; i++){ if (arr[i]%2==0) k++; }//кол-во четных в массиве
    for(int i = 0; i<size; i++)
        {
    for(int i = 0; i<size; i++)//сортировка
    {
        if (arr[i]%2==0)
        {
        flag = 1;
        m = arr[i];
            for(int g = i; g < (size-1); g++)
            {
                arr[g] = arr[g+1];
            }
        arr[size-1] = m;

        }
    }
     }
    if (flag==1){

        T = new int [size-k];
         for(int i = 0; i < (size-k); i++)
        {
            T[i]=arr[i];
         }
  delete [] arr;
   size=(size-k);
   arr = T;
    }
}

int main()
{
    int size = 5;
    int *arr = new int[size];

    for(int i = 0; i<size; i++)
    {
       cin >> arr[i];
    }
    pb(arr, size);
    for(int i = 0; i<size; i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}
