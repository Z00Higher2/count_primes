// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 5D
// Write a program numbers.cpp that defines a function
// int countPrimes(int a, int b);
// that returns the number of prime numbers in the interval a ≤ x ≤ b. 
// Change the main function to test the new code


#include <iostream>
using namespace std;


bool isPrime(int n){
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;

}

 int countPrimes(int a, int b){ // number of prime numbers within the set interval
    int count = 0; // count set to zero
    for (int i = a; i <= b; i++){ // interval from a to b
        if(isPrime(i)){ // if i is prime
            count++; // add to the count of prime

        }
    }

    return count; // return the number of prime numbers

 }



int main() {

    int num_1 , num_2;

    cout << "Enter the first number: ";
    cin >> num_1; // the first number

    cout << "Enter the second number: ";
    cin >> num_2; // the second number


    cout << countPrimes(num_1 , num_2) << endl; // count prime numbers



    return 0;

}