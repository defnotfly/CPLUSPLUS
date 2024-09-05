#include <iostream>
using namespace std;

int main ()
{
  int ar[5], num, sum=0;

  cout <<"Enter the size of the array: ";
  cin >> num;

  cout <<"Enter the elements in the array: ";

        for (int i=0; i < num; i++)
        {
            cin >> ar[i];
            for (int i=0; i < num; i++)
            {
                sum += ar[i];
            }
        }

    cout <<"The sum of the arrays is: " <<sum;

return 0;

}