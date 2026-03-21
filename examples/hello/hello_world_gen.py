text = "Hello World"
x = []
def main(text):
	print("{")
	text = list(text)
	for item in text:
		for i in range(ord(item)):
			print('"0++", ')
			x.append("0++")
		print('"6==", ')
		x.append("6==")
		print('"6++", ')
		x.append("6++")
	print('"2=="')
	x.append("2==")
	print("}")
main("Hello World!")
for item in x:
	print(item)
