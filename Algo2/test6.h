int minFlips(int a, int b, int c) {
	int ret = 0;

	int resa, resb, resc;

	for (int i = 0; i < 32; i++)
	{
		resa=((a>>i)&1);
		resb=((b>>i)&1);
		resc=((c>>i)&1);
		if (resa && resb && (!resc))
			ret+=2;
		else if (!resa && !resb && resc)
			ret++;
		else if ((resa||resb) && (!resc))
			ret++;
	}


	return ret;
}

int main(void)
{
	for (int i = 1; i < 1000; i ++)
	{
		for (int j = 1; j < 1000; j++)
		{
			for (int k = 1; k < 1000; k ++)
			{
				assert(minFlips(i, j, k) == min_flips_my(i, j, k));
			}
		}
	}
}