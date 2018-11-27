#include <iostream>

using namespace std;

int sum(int num);

int main(){
  int num = 0;
  
  cout << "Please enter a number: " << endl;
  cin >> num;

  cout << sum(num) << endl;

  
  
  return 0;
}

int sum(int num){
  int sum = 0;

  for(int i = 0; i <= num; i++){
    sum += i;
  }
  return sum;
}
