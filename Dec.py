import os
print("\n[!] NOTE: After this decryption, the file keys are going to be stored in DECRYPTED format\n")
os.system("java keyread.java > Dkeys.txt")
os.system("java reader.java")
os.system("g++ decrypt.cpp -o dec")
os.system("./dec")
