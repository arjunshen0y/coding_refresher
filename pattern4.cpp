//pattern printing 3
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <iostream>



int main()
{
    int x = 1;
    for(int row = 1; row<= 5; row++){
        for(int col =1; col<=row; col++){
            std::cout<<x<<" ";
            x++;
        }
        std::cout<<std::endl;
    }
    return 0;
}
