#include <iostream>

using namespace std;

int sum(int num);
int product(int num);

int main(){
  int num = 0;
  
  cout << "Please enter a number: " << endl;
  cin >> num;

  cout << "The Sum is: " << sum(num) << endl;
  cout << "The Product is: " << product(num) << endl;

  
  
  return 0;
}

int sum(int num){
  int sum = 0;

  for(int i = 0; i <= num; i++){
    sum += i;
  }
  return sum;
}

int product(int num){
  int product = 1;

  for(int i = 1; i <= num; i++){
    product *= i;
  }
  return product;
}
