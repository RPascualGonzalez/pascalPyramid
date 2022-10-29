// PascalPyramid.cpp : we will calculate the Pascal Pyramid given the triangle side syze
//              1
//          1       1
//      1       2       1
//  1       3       3       1
//             ...

#include <iostream>

int CalculateNewtonsBinomialEquation(int numerator , int denominator);
int CalculateFactorial(int number);
void TraverseAllPyramidValues (int triangleSize);
void PrintSpacesPyramid(int numerator, int triangleSize);

using namespace std;

int main()
{
    while (true)
    {
        cout << "insert the triangle size \n";
        int triangleSize;
        cin >> triangleSize;
        cout << " The pyramid is: \n";
        TraverseAllPyramidValues(triangleSize);
    }
}

// ----------------------------------------
void TraverseAllPyramidValues(int triangleSize)
// ----------------------------------------
{
    for (int numerator = 0 ; numerator < triangleSize ; numerator++ )
    {
        PrintSpacesPyramid(numerator , triangleSize);
        for (int denominator = 0; denominator <= numerator; denominator++)
        {
            cout << CalculateNewtonsBinomialEquation(numerator, denominator) << " ";
        }
        cout << "\n";
    }
}

// ----------------------------------------
void PrintSpacesPyramid(int numerator, int triangleSize)
// ----------------------------------------
{
    int numberSpaces = triangleSize - numerator;
    for (int spaceNumber = 0; spaceNumber < numberSpaces; spaceNumber++ )
    {
        cout << " ";
    }
    
}

// ----------------------------------------
int CalculateNewtonsBinomialEquation(int numerator, int denominator)
// ----------------------------------------
{
    /* Equation:
      ( numerator )        n!
      (           )  =  --------
      (denominator)     k! (n-k)!
    */
    int result = CalculateFactorial(numerator) / (CalculateFactorial(denominator) * CalculateFactorial(numerator - denominator));
    return result;
}

// ----------------------------------------
int CalculateFactorial(int number)
// ----------------------------------------
{
    int result = 1;
    for (int factorialIndex = number; factorialIndex > 0; factorialIndex--) {
        result = result * factorialIndex;
    }
    return result;
}