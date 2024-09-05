#include <iostream>
#include <exception>
using namespace std;

struct product
{
    int weight;
    int price;
    string name;
} banana, apple, orange;

void printApple ()
{
    apple.name = "Apple";
    apple.price = 19;
    apple.weight = 19;
}
int main ()1
{
    printApple();
}