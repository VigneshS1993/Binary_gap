#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int rev = 0, temp = 0, count = 0, count2 = 0, count3 = 0;
	signed long int num;
	cout << "\n Enter the number : ";
	cin >> num;
	int array[33], barray[33];
	//int* stack = (int*)malloc(sizeof(int)*32);
	//stack = array;
	while (num != 0)
	{
		array[rev++] = num % 2;
		num = num / 2;
	}
	for (int i = 0; i < rev; i++)
	{
		barray[i] = array[rev - i - 1];
		cout << barray[i];
	}
	cout << endl;
	cout << "\n Number of digits is : "<<rev<<endl;
	temp = 0;
	while (temp < rev)
	{
		//cout<<barray[temp];
		if (barray[temp] == 1)
		{
			count = temp + 1;
			while (barray[count] == 0)
			{
				++count2;
				++count;
			}
			if ((count2 > count3) && (barray[count] == 1))
			{
				count3 = count2;
			}
			count = 0;
			count2 = 0;
		}
		++temp;
	}
	cout << "\n The max binary spacing is : " << count3;
	return 0;
}