#include <iostream>
#include <vector>

int main()
{
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

  double evenTotal;
  double oddTotal;

  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers[i] % 2 == 0)
    {
      evenTotal += numbers[i];
    }
    else
    {
      oddTotal += numbers[i];
    }
  }
  std::cout << "Sum of even numbers is " << evenTotal << "\n";
  std::cout << "Sum of odd numbers is " << oddTotal << "\n";
}