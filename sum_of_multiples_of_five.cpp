//write a program to print sum of multiples of 5 between 1 to 1000
#include <iostream>

int main()
{
    int sum;
    for(int i = 5 ; i < 1000 ; i++){
        if(i%5 == 0)
            sum = sum+i;
    }    
    std::cout<<"The Sum is: "<<sum;
    return 0;
}
