//write a program to print factorial of a number
#include <iostream>

int main(){
    int fact=1,num;
    std::cout<<"Enter The Number: ";
    std::cin>>num;
    for(int i = num ; i > 0 ; i--){
        fact = fact*i;
    }
    std::cout<<"The Factorial is :"<<fact;
    

    return 0;
}
