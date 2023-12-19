int countDigits(int n){
	int count = 0;
	while(n){
		count++;
		n /= 10;
	}

	return count;
}

bool checkArmstrong(int n){
	int k = countDigits(n);
	int n_cpy = n;

	int sum = 0;
	while(n_cpy){
		int dig = n_cpy % 10;
		sum += pow(dig, k);
		n_cpy /= 10;
	}

	return sum == n;

}

