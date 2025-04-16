// Program to out this pattern
//*
//**
//***
//****
//*****
#include <iostream>
using namespace std;

class Pattern
{
public:
    Pattern();
};

Pattern ::Pattern()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
}

int main()
{
    Pattern P;
    return 0;
}