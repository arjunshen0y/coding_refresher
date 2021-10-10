//write a program to check whether a number is prime or not

#include <iostream>
int main(){
    
    int num;
    bool flag = 0;
    std::cout<<"Enter the Number: ";
    std::cin>>num;
    for(int i = 2; i <= num/2; i++){
        if(num%i == 0){
            flag = 1;
        }
    }
    if(flag == 0)
        std::cout<<"The Number is Prime ";
    else
        std::cout<<"The Number is Not Prime";
   
    return 0;
}
 
