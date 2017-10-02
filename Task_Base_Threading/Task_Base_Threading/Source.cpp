#include "ThreadTesting.h"

int main()
{
	ThreadTesting::StartThreadManager();

	ThreadTesting::smallLoads();

	getchar();
	ThreadTesting::EndThreadManager();
	return 0;
}