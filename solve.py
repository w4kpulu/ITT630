data = "! 4=.'f#f'&f\n<`\n3 ;tt("

flag = bytearray()

for ch in data:
    decoded = ord(ch) ^ 0x55
    flag.append(decoded)

print(flag.decode("utf-8"))
