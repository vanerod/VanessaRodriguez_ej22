import os 
import numpy as np
import matplotlib.pyplot as plt


a=os.system("g++ codigo.cpp -o codigo.x")
a=os.system("./codigo.x > datos.txt")

datos= np.genfromtxt('datos.txt' , usecols=1)

plt.figure()
plt.hist(datos, bins=50)
plt.savefig("Vane_Rodriguez_fig22.png")