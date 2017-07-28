// Source : https://leetcode.com/problems/reverse-integer/tabs/description
// Author : Chenglin Lu
// Date   : 2017.07.28  

/********************************************************
*
* Reverse digits of an integer.

* Example1: x = 123, return 321
* Example2: x = -123, return -321
*
*
********************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

int reverse(int x)
{
	 int temp = 0;
	 while(x != 0)
	 {
		 if(temp <= (INT_MIN)/10 || temp >= (INT_MAX/10))
			 return 0;
		 temp = temp * 10 + x % 10;
		 x /= 10;
	 }

	 return temp;
}

int main()
{
	int x,result = 0;
	while(EOF != scanf("%d",&x)){
		result = reverse(x);
		printf("The result is %d\n",result);
	}
	
	return 0;

}