# 11.11.2018
/*13) Напишите процедуру, проводящую сжатие символьного динамически выделенного
массива. Несколько подряд идущих одинаковых букв должны заменяться на их
количество и саму букву.*/

#include <iostream>

using namespace std;

#include <iostream>

using namespace std;
void pb(char *&A,int &n)
{
    int a = 1, k = 0, h, j=0, o = 0;


        for (int i = 0; i<n; i++)
    {
          if (i>=1)
            {
          if(A[i]==A[i-1]){
               a = a+1;
               k = k+1;
             if(A[i+1]!=A[i]){
                A[i-1]=a+'0';
                a=1;
                            }
            }}

    }

     for (int i = 0; i<n; i++){
     for (int g = 0; g<=n; g++){
    char r = g+'0';
         if(A[i]==r){
                o=o+g-2;
             int y = g;
             int f = 0;
             while (y!=2){
             f++;
             y--;
             }
             while(f!=0){
                    j=A[i-f];
                    for(int w = i-f; w < n-1; w++){
                        A[w]=A[w+1];
                    }
             A[n-1]=j;
            i=i-1;
             f--;}
         }
             }
     }
     char * M = new char [n-o];
for(int i = 0; i < (n-o); i++){
    M[i]=A[i];
}

delete[] A;
n=n-o;
A = M;
}



int main()
{
    int n=11;
    char * arr = new char [n];
        for (int i =0; i<n; i++){
        cin>>arr[i];
    }
    pb(arr,n);
    for (int i =0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}
