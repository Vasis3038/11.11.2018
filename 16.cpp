/*16) Напишите процедуру, заполняющую квадратный двумерный массив пирамидой.
Пример для массива размера 5х5:
1 1 1 1 1
1 2 2 2 1
1 2 3 2 1
1 2 2 2 1
1 1 1 1 1
*/



#include <iostream>

using namespace std;
void pyramid (int n){
int A[n][n];

int r = n-2;
int p = 0;
int y = n - 1;
int u = 1;
while(r>0){

    for(int i = 0; i<n; i++){
            A[0][i]=1;
    }

if(p!= 0){
    for(int i = u; i<y; i++){
            A[p][i] = p+1;

    }
    y--;
    u++;
    r = r-2;
    }
    p++;
}


int rl = n-2;
int pl=0;
int yl = n-1;
int ul = 1;
while(rl>0){

for(int i = 0; i<n; i++){
    A[i][0]=1;
}

if (pl!=0){
        for(int i = ul; i<yl; i++){
            A[i][pl] = pl+1;

    }
    yl--;
    ul++;
    rl = rl-2;
}

pl++;
}


int rr = n-2;
int pr=0;
int yr = n-1;
int ur = 1;
int d = n-2;
while(rr>0){

for(int i = 0; i<n; i++){
    A[i][n-1]=1;
}

if (pr!=0){
        for(int i = ur; i<yr; i++){
            A[i][d] = pr+1;
        }

    d--;
    yr--;
    ur++;
    rr = rr-2;
}

pr++;
}



int rd = n-2;
int pd=0;
int yd = n-1;
int ud = 1;
int dd = n-2;
while(rd>0){

for(int i = 0; i<n; i++){
    A[n-1][i]=1;
}

if (pd!=0){
        for(int i = ud; i<yd; i++){
            A[dd][i] = pd+1;
        }

    dd--;
    yd--;
    ud++;
    rd = rd-2;
}

pd++;
}
for(int i = 0; i<n; i++){
        for (int g = 0; g<n; g++){
      cout << A[i][g];}
      cout << endl;
          }
}



int main(){
int n = 5;
pyramid(n);
    return 0;
}
