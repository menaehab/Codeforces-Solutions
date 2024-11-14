#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x > 0)
	{
		cout << "positive ";
		if (x == 100)
		{
			cout << "one hundred";
		}
		else if (x == 90)
		{
			cout << "ninety";
		}
		else if (x == 80)
		{
			cout << "eighty";
		}
		else if (x == 70)
		{
			cout << "seventy";
		}
		else if (x == 60)
		{
			cout << "sixty";
		}
		else if (x == 50)
		{
			cout << "fifty";
		}
		else if (x == 40)
		{
			cout << "forty";
		}
		else if (x == 30)
		{
			cout << "thirty";
		}
		else if (x == 20)
		{
			cout << "twenty";
		}
		else if (x == 10)
		{
			cout << "ten";
		}
	}
	else if (x < 0)
	{
		cout << "negative ";
		x *= -1;
		if (x == 100)
		{
			cout << "one hundred";
		}
		else if (x == 90)
		{
			cout << "ninety";
		}
		else if (x == 80)
		{
			cout << "eighty";
		}
		else if (x == 70)
		{
			cout << "seventy";
		}
		else if (x == 60)
		{
			cout << "sixty";
		}
		else if (x == 50)
		{
			cout << "fifty";
		}
		else if (x == 40)
		{
			cout << "forty";
		}
		else if (x == 30)
		{
			cout << "thirty";
		}
		else if (x == 20)
		{
			cout << "twenty";
		}
		else if (x == 10)
		{
			cout << "ten";
		}
	}
	else
	{
		cout << "zero";
	}
}