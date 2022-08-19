/** Functions
 * Reusable, named pieces of code. We can call or invoke them
 * when we need them. They help us break problems down into more
 * manageable parts.
**/

/**
 * With C++ it is best practice to define a function after main,
 * then of course call that function inside main. However, it is
 * necessary to have a header that calls the function before
 * main for that to work. A function prototype.
**/

/**
 * A function has a return type and a parameter list.
 * The return type indicates if, and what, the function gives back
 * to the calling function.
 * The parameter list is the list of data that goes into the 
 * function so it can do its job.
**/

/**
 * Arguments are the actual values passed when you call or 
 * invoke a function. The data you pass to the function is
 * the argument. For example, addThese(a,b) must be given two Arguments
 * passed to it. printNumber(100) has one argument passed to it.
 * printHello() and giveMe10() do not have arguments.
 * 
 * On the other hand parameters are when you define the function.
 * For example, printNumber(int a) int a is a parameter.
 * In addThese(a,b), a and b are parameters.
 * Parameters will take on the arguments past to a function.
 **/
#include <iostream>
using namespace std;

// Function Prototypes.
// The function prototype of printSomething. Must be done before main.
// printHello() is a void parameterless function.
void printHello();
// printNumber() is a void parameterized function.
void printNumber(int a);
// A Value/Integer returning function with no parameters.
int giveMe10();
// An Integer returning function with two parameters. Parameterized.
int addThese(int num1, int num2);
// Functions without a void return type are "value returning functions."
// An Integer returning function wih one parameter sqNum. Takes
// in one argument.
int squareNum(int sqNum);

int main()
{
    int num1 = 90;
    int num2 = -3;
    printHello();
    printNumber(6);
    
    int someData = giveMe10();
    cout << someData << endl;
    
    int totalValue = addThese(num1, num2);
    cout << "num1 + num2 = " << totalValue << endl;
    
    // Call a function inside another function.
    printNumber(addThese(num1, 50));
    
    cout << squareNum(6) << endl;
    return 0;
}

// Returns the value of its function body.
void printHello() {
    cout << "Hello!" << endl;
}

// Returns the value of the paramter.
void printNumber(int a) {
    cout << a << endl;
}

int giveMe10() {
    return 10;
}

int addThese(int num1, int num2) {
    int result = num1 + num2;
    return result; // Now tempNum can be used wherever this function is.
}

int squareNum(int sqNum) {
    return sqNum * sqNum;
}
