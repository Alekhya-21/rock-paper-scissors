#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

int main(){
  vector<string> choices={"rock","paper","scissor"};
  string user;
  cout<<"choose rock, paper or scissor "<<endl;
  cin>>user;
  srand(time(0));
  string computer=choices[rand()%3];
  cout<<"yours :"<<user<<endl;
  cout<<"computers :"<<computer<<endl;
if(user==computer) cout<<"Its a tie!"<<endl;
else if (user=="rock" and computer=="scissor") cout<<"you win!"<<endl;
else if (user=="scissor" and computer=="paper") cout<<"you win!"<<endl;
else if (user=="paper" and computer=="rock") cout<<"you win!"<<endl;
else cout<<"Computer wins!!"<<endl;
}