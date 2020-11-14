bool primer(int n) {
	for(int c=2; c<=n-1; c++) {
		if(n%c==0) {
			return false;
		}
	}
	return true;
}
