
import sys

target = 753
num = input()

diff = sys.maxsize

for pos in range(0, len(num)-2):
    diff = min(abs(753 - int(num[pos:pos+3])), diff)

print(diff)
