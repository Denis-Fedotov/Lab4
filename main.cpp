//Program version 2
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
    std::cout<<"\n1. Add"<<"\n2. Subtract"<<"\n3. Multiply"<<"\n4. Divide"<<"\n>";
    std::cin>>ch;
	std::cout<<"The answer is: ";
    switch (ch)
    {
        case 1: std::cout<<Add(op1, op2); break;
        case 2: std::cout<<Sub(op1, op2); break;
        case 3: std::cout<<Mult(op1, op2); break;
        case 4: std::cout<<Div(op1, op2); break;
    }

    return 0;
}

