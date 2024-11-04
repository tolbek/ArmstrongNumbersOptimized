#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int order1, order2, order3, total;
	
	cout << "Armstrong numbers between one to one thousand : ";

	for(int number = 1; number <= 1000; ++number)
	{
		if(number <= 9)
		{
			cout << number << "\n";
		}
		else
		{
			order1 = number % 10;
			order2 = (number % 100 - order1) / 10;
			order3 = (number % 1000 - order2) / 100;
		
			total = (pow(order1,3)+pow(order2,3)+pow(order3,3));

			if (total == number)
			{
				cout << number << "\n";
			}
		}
	}
	return 0;
}
