import os

program_0 = "tar -czvf compress_test.tar.gz ./compress_test"
program_1 = "gpg --yes --batch --passphrase=1A2b3C4d5E6f -c compress_test.tar.gz"
program_2 = "gpg --yes --batch --passphrase=1A2b3C4d5E6f compress_test.tar.gz.gpg"

for x in range(30):
	##touch_command = "touch "+ "Resultados_AMD/" + program + "_" + str(x) + ".txt"
	perf_command = "perf stat -e cycles -e instructions -e branch-instructions -e branch-misses -e cache-misses -o Resultados_AMD/compress_" + str(x) + ".txt " + program_0  
	os.system(perf_command)

	perf_command = "perf stat -e cycles -e instructions -e branch-instructions -e branch-misses -e cache-misses -o Resultados_AMD/encrypt_" + str(x) + ".txt " + program_1 
	os.system(perf_command)

	perf_command = "rm compress_test.tar.gz"
	os.system(perf_command)

	perf_command = "perf stat -e cycles -e instructions -e branch-instructions -e branch-misses -e cache-misses -o Resultados_AMD/decrypt_" + str(x) + ".txt " + program_2 
	os.system(perf_command)

	## Clear files
	perf_command = "rm compress_test.tar.gz"
	os.system(perf_command)
	perf_command = "rm compress_test.tar.gz.gpg"
	os.system(perf_command)
