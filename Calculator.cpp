#include<iostream>

int main(){
 double value1 ;
 double value2 ;
 int x;
 int ans;


 std::cout <<"Hello I am a calculator ,What would you like to Perform with me\n";
 

 std::cout<< "Enter value 1:- \n";
 std::cin>> value1;
 std::cout<< "Enter value 2:-\n ";
 std::cin>> value2;

 std::cout << "I can do, ";
 std::cout << "1.Addition,2.Subtraction\n ";
 std::cout << "3.Division,4.Multiplication\n ";


 std::cin >> x;

 if (x==1){
     ans = value1+value2;
 }
 else if(x==2){
     ans = value1-value2;
 }
 else if(x==3){
     ans =value1/value2;
 }
 else if(x==4){
     ans = value1*value2;
 }
std ::cout <<  "Your answer is"<< ans;
return 0;
};