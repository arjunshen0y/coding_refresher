//pattern printing 2
/*
* * * * *
* * * *
* * *
* *
*
*/
#include <iostream>



int main()
{
    for(int row = 5 ; row > 0 ; row--){
        for(int col = 0 ; col < row ; col++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }   
    return 0;
}
