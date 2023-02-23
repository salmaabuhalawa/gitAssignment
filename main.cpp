#include<iostream>
#include<vector>
#include<numeric>
#include <bits/stdc++.h>
using namespace std;

int getSum(vector<int> numbers){
    return accumulate(numbers.begin(), numbers.end(), 0);
}

int getMin(vector<int> numbers){
    return *min_element(numbers.begin(), numbers.end());
}

int getAverage(vector<int> numbers) {
    return (accumulate(numbers.begin(), numbers.end(), 0))/(numbers.size());
}

int main() {
   vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
   cout<<"Sum of numbers is: "<< getSum(numbers)<<"\n";
   cout<<"Minimum Element is: "<< getMin(numbers)<<"\n";
   cout<<"Average of numbers is: "<< getAverage(numbers)<<"\n";

   return 0;
}
