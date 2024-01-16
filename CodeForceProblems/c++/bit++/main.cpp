#include <iostream>

using namespace std;





int main()
{

int n  ;
int X = 0;
string bit;


 cin >> n;

for ( int i = 1 ; i<= n ;i++){

   cin >> bit;
      if (bit == "X++" || bit == "++X") {
              ++X ;
          }else{
           --X ;
          }

}

cout <<X;

}
