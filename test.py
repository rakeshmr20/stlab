import os
file = input("File name[C file]: ")
cmdfile = "gcc "+file
print("Compiling...")
os.system(cmdfile)
print("Run...\nRunning the Test cases")
for i in range(1,5):
	for j in range(1,5):
		for k in range(1,5):
			cmd = "a "+str(i)+" "+str(j)+" "+str(k)
			os.system(cmd)

print("Executed Successfully...")