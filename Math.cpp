#include <iostream>
#include <cmath>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
int op;
int x,y,z;
int a,b,i;
double result;

opchanger:
cout << "Choose what operation you want to do\n";
cout << "Press 1 for comparator\n";
cout << "Press 2 for num swaper\n";
cout << "Press 3 for num swaper PRO\n";
cout << "Press 4 for amplifier\n";
cout << "Press 5 to check if num is dividible by 2 and 5\n";
cout << "Press 6 to exit\n";
cin >> op;
switch(op){

case 1:
  cout << "Write 3 nums you want to compare:\n";
  cin >> x >> y >> z;

  if(x > y && x > z){
    cout << x << " Is the biggest num\n";
  }else if(y > x && y > z){
    cout << y << " Is the biggest num\n";
  }else{
    cout << z << " Is the biggest num\n";
  }
  Sleep(2000);
  system("cls");
  goto opchanger;

case 2:
  cout << "Choose num a and num b\n";
  cin >> a >> b;

  i = a;
  a = b;
  b = i;

  cout << "This is num a:  " << a << endl;
  cout << "This is num b:  " << b << endl;

  Sleep(2000);
  system("cls");
  goto opchanger;

case 3:
  cout << "Choose num a and num b\n";
  cin >> a >> b;

  swap(a,b);

  cout << "This is num a:  " << a << endl;
  cout << "This is num b:  " << b << endl;

  Sleep(2002);
  system("cls");
  goto opchanger;

case 4:
  cout << "Write a num you want to give power to\n";
  cin >> a;
  cout << "Write a num you want to to power by\n";
  cin >> b;

  result = pow(a,b);

  cout << a << " powered by " << b << " is: " << result;

  Sleep(2000);
  system("cls");
  goto opchanger;

case 5:
  cout << "Choose a num\n";
  cin >> x;


  if(x % 5 == 0){
    cout << "Num is dividible by 5\n";
  }else{
    cout << "Num is not dividible by 5\n";
  }

  if(x % 2 == 0){
    cout << "Num is dividibe by 2\n";
  }else{
    cout << "Num is not dividible by 2\n";
  }

  Sleep(2000);
  system("cls");
  goto opchanger;

case 6:
  cout << "exiting";
  Sleep(1000);
  exit(0);

default:
cout << "Invalid input";

Sleep(2000);
system("cls");
goto opchanger;

}
}
