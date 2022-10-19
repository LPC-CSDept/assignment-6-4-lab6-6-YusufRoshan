#include <iostream>

using namespace std;

void printPrimeList(int a, int b) 
{
	int flag;
	cout << "Prime Numbers between "<<a<<" and "<<b<<":\n";
	for (int i = a; i <= b; i++) 
	{
		if (i == 1 || i == 0) 
		continue;
		flag = 1; 
		for (int j = 2; j <= i / 2; ++j) 
	{
	if (i % j == 0)
{
		flag = 0;
		break;
}
}
	if (flag == 1) 
	cout << i << " ";
}
}

void getListprime(int begin)
{
	printPrimeList(begin , 100); 	
}

void getListprime()
{
	printPrimeList(0,100); 

}

void getListprime(int begin,int end)
{
	printPrimeList(begin, end); 
}

int main()
{
	int begin, end;
		cout << "Enter two positive integers: \n";
cin >> begin >> end; 

	if(begin <= 0 || end <=0) 
	cout << "Invalid";

	else
	{
		if(begin == end)
		getListprime(begin);

		else if(begin > end)
		getListprime();

	else
	getListprime(begin,end);
}
	return 0;
}