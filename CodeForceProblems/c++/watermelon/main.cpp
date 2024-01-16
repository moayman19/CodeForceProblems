#include <iostream>

using namespace std;

string watermalon (int num){


        if ( (num%2) == 0 && num  != 2 )
        {
            return "YES";
        }
        else
        {
            return "NO";
        }


}

int main()
{
int a ;
cin >> a ;

cout <<watermalon(a);



}
