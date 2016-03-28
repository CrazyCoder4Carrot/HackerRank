#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int argua; 
	long argul; 
	long long argull; 
	char arguc;
	float arguf;
	double argud;
	scanf("%d %ld %lld %c %f %lf", &argua, &argul, &argull, &arguc, &arguf, &argud);
	printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n", argua, argul, argull, arguc, arguf, argud);
	return 0;
}