#include <iostream>

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