int findComplement(int num) {
	unsigned a = 0xffffffff;
	int digc = 0;
	while (num >> digc)
		digc++;

	return ((a << (32-digc)) >> (32-digc)) & (~num);
}

int main()
{
	for (int i = 0; i < 100000; i++)
	{
		assert(findComplement(i) == find_complement_my(i));
	}
	cout << "test ok" << std::endl;
}