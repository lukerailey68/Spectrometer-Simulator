#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <chrono>

using namespace std;

int main(int argc, char* argv[])
{

	double duration;
	clock_t timer = clock();
	int i = 1;
	int lower = 0;

	while(timer != 0){
		double t = (rand() % i + lower);
		printf("%f \n", t);
		if(i < 120)
			i++;
		else
			i--;
	if((clock() - timer) == 5000)
		timer = 0;
	_sleep(90);
	
	}
	system("pause");
	return 0;
}
