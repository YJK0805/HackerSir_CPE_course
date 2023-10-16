while 1:
	try:
		a,b = map(int,input().split())
		ans = -1
		for i in range(min(a,b),max(a,b) + 1):
			n = i
			count = 1
			while n != 1:
				count += 1
				if n % 2:
					n = 3 * n + 1
				else:
					n //= 2
			ans = max(count,ans)
		print(a,b,ans)
	except:
		break