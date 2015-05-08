unsigned int most_signifcant(unsigned int num) {
	unsigned int bit = 0, i = sizeof(i) << 2;
	bit += !!num;
	for (;i > 0; i >>= 1) {
		if (num >> i) {
			num >>= i;
			bit += i;
		}
	}
	return ++bit;
}
