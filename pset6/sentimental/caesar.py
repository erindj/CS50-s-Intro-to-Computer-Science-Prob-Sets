import cs50
import sys


if len(sys.argv) != 2:
    print("Usage: ./caesar.py k")
    exit(1)
#Convert first argument (key) into an integer
key = int(sys.argv[1])
#Get plaintext
print("plaintext: ", end="")
plain = cs50.get_string()

print("ciphertext: ", end="")

for c in plain:
    if c.isalpha():
        if c.lower():
            if ord(c) + key > 122:
                temp = (ord(c) - 97 + key) % 26
                print(chr(temp + 97), end="")
            else:
                temp = ord(c) + key
                print(chr(temp), end="")
        elif c.isupper():
            if ord(c) + key > 90:
                temp(ord(c) - 65 + key) % 26
                print(chr(temp + 65), end="")
            else:
                temp = ord(c) + key
                print(chr(temp), end="")

    else:
        print(c, end="")

print()
exit(0)