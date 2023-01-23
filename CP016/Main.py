# ==============================================================================
# Jika Hidup Tanpa Array
hari_1 = "Ahad"
hari_2 = "Senin"
hari_3 = "Selasa"
hari_4 = "Rabu"
hari_5 = "Kamis"
hari_6 = "Jumat"
hari_7 = "Sabtu"

# ==============================================================================
# deklarasi array
hari = ["Ahad","Senin","Selasa","Rabu","Kamis","Jumat","Sabtu"]

# hitung banyaknya hari
numHari = len(hari)
print("Jumlah hari ada: ",numHari)

# print hari menggunakan looping FOR
for i in range(0,numHari,1):
  print(hari[i],end=" ")

print()

# prin hari menggunakan looping for each
for h in hari:
  print(h,end=" ")

print()

# print semua hari
print(hari)

# ==============================================================================
data = [12, 4, 5, 9, 2, 7, 23.9]
print(data)
data.insert(1, 29)
print(data)

# ==============================================================================
data = [12, "Senin", 4, "Toyota", 5, 9, 2, "Volvo", 7, 23.9]
print(data)
data.insert(1, 29)
print(data)

for i in range(0,len(data),1):
  hasil = data[i]*2
  print(hasil,", ")

# ==============================================================================
mobil = ["Toyota","Daihatsu","Mitsubishi"]
print(mobil)
mobil.append("Honda")
print(mobil)
mobil.pop(1)
print(mobil)
mobil.insert(2,"Volvo")
print(mobil)
mobil.sort();
print(mobil)
mobil.reverse()
print(mobil)
mobil.remove("Mitsubishi")
print(mobil)
