#include <iostream>

using namespace std;

int calc (int n ,int m, int a ){

long x = n/a ;
long y = m/a;
if (n%a != 0){
    x++;
}
if (m%a !=0){
    y++;
}
return  x *y  ;

}




int main()
{
    int n,m,a;
cin >>n;
cin >>m;
cin >>a;
cout << calc(n,m,a);
}
