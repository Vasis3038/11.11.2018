# 11.11.2018
/*8) Напишите две функции, находящие приближенное значение квадратного и
кубического корня. В программе не должны использоваться математические
библиотеки.*/
#include <iostream>

using namespace std;

double Cube_root(int k){
    double g = 0, m;
    bool flag=0;
    double ans1, ans2, ans, i1, i2;

    for(double i = 0; k>0 ; i++)
            {
            m = k+i;

            for (double n = 1; (n*n*n) <= m; n++)
                {

                    if ((n*n*n) == m)
                            {

                        flag = 1;


                         ans2 = n;
                         i2 = i;
                            }
                }
               if (flag ==1){
                break;
               }
            }
flag =0;
    for(double i = 0; k>0 ; i++)
            {
            m = k-i;

            for (double n = 1; (n*n*n) <= m; n++)
                {

                    if ((n*n*n) == m)
                            {

                        flag = 1;

                         ans1 = n;
                         i1 = i;
                            }
                }
               if (flag ==1){

                break;
               }
            }
if (i1<(i2/2)){ans = ans1;}
if (i2<(i1/2)) {ans = ans2;}
else
ans = (ans1+ans2)/2;
cout << "i2 = "<<i2<<endl;
cout <<"ans2 = " <<ans2<<endl;
cout << "i1 = "<<i1<<endl;
cout <<"ans1 = " <<ans1<<endl;
    return ans;
}


double Square_root(int k){

    double g = 0, m;
    bool flag=0;
    double ans;
    for(double i = 0; k>0 ; i++)
            {
            m = k-i;
            for (double n = 1; (n*n) <= m; n++)
                {
                    if ((n*n) == m)
                            {
                        flag = 1;
                        ans = (n + (i/(2*n)));
                            }
                }
               if (flag ==1){
                break;
               }
            }
            return ans;
}




int main()
{
    return 0;
}
