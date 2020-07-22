//
// Created by Lommy Reznak on 7/18/20.
//



int main()
{
	for (int i = -1024; i < 10000; i++)
	{
		assert(__builtin_popcount(i) == hweight_my(i));
	}

	for (int i = 10000000; i < 10010000; i++)
	{
		assert(__builtin_popcount(i) == hweight_my(i));
	}
	cout << "test ok" << endl;
}