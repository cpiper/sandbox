unsigned int most_signifcant(unsigned int num) {
	unsigned int mask = ~0, i = sizeof(mask) << 2, bit = 0;
	if (!num)
    		return 0;
	for (;i > 0; i >>= 1) {
		if (num & mask << i) {
			mask = (mask << i) & mask;
			bit += i;
		} else {
			mask = (mask >> i) & mask;
		}
	}
	return bit + 1;
}
