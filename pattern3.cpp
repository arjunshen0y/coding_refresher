//pattern printing 3
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include <iostream>



int main()
{
    for(int row = 1 ; row <= 5 ; row++){
        for(int col = 1 ; col <= row ; col++){
            std::cout<<col<<" ";
        }
        std::cout<<std::endl;
    }   
    return 0;
}
