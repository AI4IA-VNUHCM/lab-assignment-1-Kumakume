/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
	int i, n, prime, count;
	for(i=2;i<testcase;i++)
	{
		prime = 1;
		for(count=2;count<i;count++)
		{
			if(i%count==0)
			{
				prime=0;
				break;
			}
		}
		if(prime)
		    printf("%d ",i);
	}
	return 0;
}
