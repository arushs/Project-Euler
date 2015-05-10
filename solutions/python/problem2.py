def main():
	x=2
	y=1
	num = 0
	while x < 4000000:
		print(x , y)
		temp = x		
		if x % 2 == 0: 
			num += x		
		x = x + y
		y = temp
	print(num)
	
main()