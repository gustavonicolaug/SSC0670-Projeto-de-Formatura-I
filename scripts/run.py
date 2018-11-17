import os

program_0 = "atribuicao_char"
program_1 = "atribuicao_float"
program_2 = "atribuicao_int"
program_3 = "bubble_sort"
program_4 = "case"
program_5 = "case_random"
program_6 = "division_float"
program_7 = "loop1"
program_8 = "loop2"
program_9 = "loop3"
program_10 = "loop4"
program_11 = "prime_number"

for x in range(30):
	##touch_command = "touch "+ "Resultados_B/" + program + "_" + str(x) + ".txt"
	perf_command = "./run_perf.sh " + "./" + program_0 + " Resultados_B/" + program_0 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_1 + " Resultados_B/" + program_1 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_2 + " Resultados_B/" + program_2 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_3 + " Resultados_B/" + program_3 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_4 + " Resultados_B/" + program_4 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_5 + " Resultados_B/" + program_5 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_6 + " Resultados_B/" + program_6 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_7 + " Resultados_B/" + program_7 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_8 + " Resultados_B/" + program_8 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_9 + " Resultados_B/" + program_9 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_10 + " Resultados_B/" + program_10 + "_" + str(x) + ".txt"
	os.system(perf_command)

	perf_command = "./run_perf.sh " + "./" + program_11 + " Resultados_B/" + program_11 + "_" + str(x) + ".txt"
	os.system(perf_command)
	##os.system(touch_command)
	##print(perf_command)
