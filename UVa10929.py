while 1:
	try:
		n = int(input())
		if n == 0:
			break
		elif n % 11:
			print(f'{n} is not a multiple of 11.')
		else:
			print(f'{n} is a multiple of 11.')
	except:
		break