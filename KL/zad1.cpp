#include <iostream>

int main() {

for(int i = 300; i<=1200; i++)
    {
        if (i%2 == 1)
            std::cout << i;
        
        if (i%400 == 0)
            std::cout << "\n";
        else if (i%100 == 0)
            std::cout << " *** ";
        else if (i%2 == 1)
            std::cout << " ";
    }
    return 0;
}
