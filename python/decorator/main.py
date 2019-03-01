def deco(func):
	def wrapper(*args, **kwards):
		print("--start--")
		func(*args, **kwards)
		print("--end--")
	return wrapper


@deco
def test():
	print("Hello decorator")


if __name__ == "__main__":
	test()
