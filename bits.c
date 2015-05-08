unsigned int most_signifcant(unsigned int num) {
	i = sizeof(mask) << 2, bit = 0;
	if (!num)
    		return 0;
	for (;i > 0; i >>= 1) {
		if (num >> i) {
			num >>= i;
			bit += i;
		}
	}
	return ++bit;
}
