def main(text):
	print("{")
	text = list(text)
	for item in text:
		for i in range(ord(item)):
			print('"0++", ')
		print('"7==", ')
		print('"6++", ')
	print('"2=="')
	print("}")
main("Hello World!")
