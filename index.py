imiona = (
	"Zbyszek",
	"Wojtek",
	"Karol",
	"Karolina",
	"Jadwiga",
	"Łucja",
)
nazwiska = ("Banach", "Kowalski", "Currie", "Johnson", "Dąbrowski", "Marecki")
print(imiona)
print(nazwiska)

print("Dziewczynami są ")
for x in imiona:
	if x[-1] == "a":
		print(x)
		
def pl_nazwiska(nazwiska):
    polish_suffixes = ('ski', 'cki')
    for suff in polish_suffixes:
        if nazwiska.endswith(suff):
            return True
    return False
  
 for nazwiska in nazwiska:
 if pl_nazwiska(True):
 	print(nazwiska)
