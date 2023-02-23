#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int getSum(vector<int> numbers){
    return accumulate(numbers.begin(), numbers.end(), 0);
}

int main() {
   vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
   cout<<"Sum of numbers is: "<< getSum(numbers)<<"\n";

   return 0;
}
