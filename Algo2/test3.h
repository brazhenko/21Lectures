
int main()
{
	std::srand ( unsigned ( std::time(0) ) );
	std::random_device rd;
	std::mt19937 g(rd());


	vector<int> test = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7};

	std::shuffle ( test.begin(), test.end() , g);
	assert(uniq_num_my(test) == 4);

	std::shuffle ( test.begin(), test.end() , g);
	assert(uniq_num_my(test) == 4);

	std::shuffle ( test.begin(), test.end() , g);
	assert(uniq_num_my(test) == 4);

	test = {235123412, 235123412, 876543, 14235364, 14235364};

	std::shuffle ( test.begin(), test.end() , g);
	assert(uniq_num_my(test) == 876543);

	std::shuffle ( test.begin(), test.end() , g);
	assert(uniq_num_my(test) == 876543);

	std::shuffle ( test.begin(), test.end() , g);
	assert(uniq_num_my(test) == 876543);

	cout << "test ok" << std::endl;
}