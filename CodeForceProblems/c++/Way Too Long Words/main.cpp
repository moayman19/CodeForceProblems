#include <iostream>


using namespace std;

string stringsNum ( string word ){

    if (word.length() <=10){
            return word ;

    }else{

   string finalWord  = word.at(0) + to_string(word.length() -2) + word.at(word.length() -1) ;

    return finalWord;
    }

}



int main()
{
    string a ;
   int n ;

   cin >> n;
    for (int i = 1 ; i<= n ;i++){


 cin>> a;
 cout << stringsNum(a)<<endl;
    }

}
