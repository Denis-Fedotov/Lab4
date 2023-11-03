#include <iostream>
#include "funcs.h"

int main()
{
    double op1, op2;
    int ch;
    std::cout<<"Please, enter the first operand: ";
    std::cin>>op1;
    std::cout<<"\nPlease, enter the second operand: ";
    std::cin>>op2;
    std::cout<<"\nPlease, choose the operation: ";
    std::cout<<"\n1. Add"<<"\n2. Substract"<<"\n3. Multiply"<<"\n4. Divide"<<">";
    std::cin>>ch;

    switch (ch)
    {
        case 1: std::cout<<Add(op1, op2); break;
        case 2: std::cout<<"Not ready yet."; break;
        case 3: std::cout<<"Not ready yet."; break;
        case 4: std::cout<<"Not ready yet."; break;
    }

    return 0;
}

