int main()
{
	for (int i = -1000; i < 1000; i++)
	{
		for (int j = -1000; j < 1000; j++)
		{
			assert(hamming_dist_my(i, j) == __builtin_popcount(i^j));
		}
	}
	cout << "test ok" << std::endl;
}