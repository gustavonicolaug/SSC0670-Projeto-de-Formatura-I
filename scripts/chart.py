import os

class Data(object):
	"""docstring for Data"""
	def __init__(self, arg):
		super(Data, self).__init__()
		self.arg = arg
		
for x in range(30):
    file = 'Resultados_B/compress_'+ str(x) +'.txt'
    with open(file) as file_p:	
        #line = file_p.readline()
        cnt  = 1
        lines = []
        cycles = []
        instructions = []
        ipc = []
        branch_instructions = []
        branch_misses = []
        branch_misses_per = []
        cache_misses = []

        valid_data = []

        for i, line in enumerate(file_p):
            if i >= 5 and i<10:
        	    lines.append(line)
        for i in range(5):
            value = lines[i].split(" ")
            for j,h in enumerate(value):
                if value[j] != "" and value[j] != "\n" and value[j] != "#":
                    try: 
                        format_value = value[j].replace(",","")
                        format_value = format_value.replace("%","")
                        valid_data.append(int(format_value.replace(".","")))
                        #print(value[j])
                    except:
                        #print("Nao foi")
                        pass
        for g in range(7):
            #if g == 5:
        	#    print("0.",end="")
            print(valid_data[g],end=" ")
        print("")
        