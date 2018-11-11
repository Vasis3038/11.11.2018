# 11.11.2018
/*15) Напишите процедуру, заполняющую квадратный двумерный массив по
диагоналям. На побочной диагонали должны стоять наибольшие значения, на
соседних с ней - на единицу меньшие, и так далее - до угла, в котором должны
стоять единицы.
Пример для массива размера 5х5:
1 2 3 4 5
2 3 4 5 4
3 4 5 4 3
4 5 4 3 2
5 4 3 2 1
*/
#include <iostream>

using namespace std;
void cub (int n)
{
int A[n][n];
    for(int i = 0; i<n; i++){
            A[0][i]=i+1;
    }



    for (int i = 1; i<n; i++){
             for(int g = 0; g<n; g++){
                A[i][g] = A[0][i+g];
             }
                }
int g = 0;
    for(int i = n-1; i>=0; i--){

            A[n-1][g]=A[0][i];
            g++;
    }


    for (int i = n-2; i>0; i--){
            int y = n-1;
            int o = i;
    int w = i;
    while(o>0)
        {
        A[i][y]=A[n-1][w];
        y--;
        o--;
        w--;
        }
    }
            for(int i = 0; i<n; i++){
            for (int g = 0; g<n; g++){
      cout << A[i][g];}
      cout << endl;
          }
}
int main()
{
int n = 6;
cub(n);
    return 0;
}
