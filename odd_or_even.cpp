//write a program to check whether a given number is odd or even

#include <iostream>
int main(){
    
    int num;
    std::cout<<"Enter the Number: ";
    std::cin>>num;
    if(num%2 == 0)
        std::cout<<"The Given Number is Even";
    else
        std::cout<<"The Given Number is Odd";
   
    return 0;
}
    
