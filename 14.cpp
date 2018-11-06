/*14) Напишите процедуру, проводящую “разжатие” символьного динамически
выделенного массива, сделанное в прошлой задаче.*/

# 11.11.2018
#include <iostream>

using namespace std;


void anti(char *&arr,int &n){
    int a = 1, k = 0, h, j=0, o = 0, m = 0;
    for (int i = 0; i<n; i++){
    for (int g = 0; g<=n; g++){
    char r = g+'0';
         if(arr[i] == r){
                o=o+g-2;
             int y = g;
             int f = 0;
             while (y!=2){
             f++;
             y--;
             }
             m = m+f;
         }
             }
     }
     int q = m+n;
     int u = n;
char * T = new char [q];
for (int i = 0; i<q; i++){
T[i]=arr[i];}
delete [] arr;
    for (int i = 0; i<q; i++){
    for (int g = 0; g<=q; g++){
    char r = g+'0';
         if(T[i] == r){
             int y = g;
             int f = 0;
             f=y-2;

             if(g == 2){T[i]=T[i+1];}

             else{
int xz = f;
        for(int p = u-1; p>=i; p--){
            T[p+f]=T[p];
        }
            while(xz>=0){T[i+xz]=T[i+xz+1]; xz--;}


 u=u+f;
             }
}
}
    }
    n = u;
    arr = T;}

int main()
{
    return 0;
}
