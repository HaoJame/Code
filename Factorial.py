for i in range(int(input())):
	t=int(input())
	flag=0
	d=5
	while(t/d>=1):
		flag=flag+(t//d);
		d*=5
	print(flag)
