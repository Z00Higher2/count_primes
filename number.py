# Write a program numbers.cpp that defines a function
# countPrime(a , b)
# that print out the the number of prime numbers in the set of intervals.

    
def isPrime(n):
    if n <= 1:
        return True
 
    for i in range (2 , n):
        if (n % i == 0):
            return False
 
    return True

def countPrime(a , b):
    count = 0
    for i in range (a , b + 1):
        if (isPrime(i)):
            count += 1
    
    return count

def main():

    num_1 = int(input("Enter the first number: "))
    num_2 = int(input("Enter the second number: "))

    print(countPrime(num_1 , num_2))

main()


