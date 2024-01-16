
#include <iostream>

using namespace std;

int main()
{

int numberOfAnswer = 0;
int problem;
string input1 ;
string input2 ;
string input3 ;
 string totalInput ;

cin>>problem;


for (int i = 0; i < problem ; i++ ){
    cin >>input1;
     cin >>input2;
      cin >>input3;

    totalInput = input1 + input2 + input3 ;

    if(totalInput == "000" ||totalInput == "010" || totalInput =="001" || totalInput == "100"){

    }else{
    numberOfAnswer++;
    }

}
    cout<< numberOfAnswer;

}
