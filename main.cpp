// ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "inc/hello/HelloWho.h"
#include "pch.h"

int main()
{
    std::string myName { "Andrew" };
    auto hello { std::make_unique<Hello::HelloWho> ( myName ) };

    std::cout << hello->SayHello ( ) << std::endl;
}


