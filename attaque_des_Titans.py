#coding:utf-8


# print('LANGAGE PYTHON')
# print("\n >Domaine  : programmation"
#       "\n >Créateur : Guido van Rossum"
#       "\n > Site    : https://www.python.org")
      

#  print("LANGAGE PYTHON\n\
#        \t>  Domaine  : programmation\n\
#         \t> Créateur : Guido van Rossum\n\
#          \t> Site    : https://www.python.org")  


import random 
pseudoUser1 = ""
pseudoUser1_hp = 250

pseudoUser2 = ""
pseudoUser2_hp = 250

random_attack = True
random_damge = 0

pseudoUser1 = input("joueur 1, choice your pseudo")
print(f"{pseudoUser1} est le joueur1.")

pseudoUser2 = input("joueur 2, choice your pseudo")
print(f"{pseudoUser2} est le joueur 2.")

print("\nLE COMBAT COMMENCE !\n")

 # 1ère attaque
input()
print(f"{pseudoUser1}, à vous de commencer !")
print(f"J1 : {pseudoUser1} pv / J2 : {pseudoUser2} pv")
random_attack = random.randint(0,1)
random_attack = bool(random_attack)

if random_attack == True:
    random_damage = random.randint(0, 100)
    print(f"{pseudoUser2} subit une attaque de {pseudoUser1} qui lui inflige {random_damage} points de degats")
    pseudoUser2_hp -= random_damage
else: 
    print(f"{pseudoUser2} rate attaque...")

 # 2ème attaque
input()
print(f"{pseudoUser2}, à vous de jouer !")
print(f"J1 : {pseudoUser1} pv / J2 : {pseudoUser2} pv")
random_attack = random.randint(0,1)
random_attack = bool(random_attack)

if random_attack == True:
    random_damage = random.randint(0, 100)
    print(f"{pseudoUser1} subit une attaque de {pseudoUser2} qui lui inflige {random_damage} points de degats")
    pseudoUser1_hp -= random_damage
else:
    print(f"{pseudoUser2} rate attaque...")
     

 
 # 3ème attaque
input()
print(f"{pseudoUser1}, à vous de jouer!")
print(f"J1 : {pseudoUser1} pv / J2 : {pseudoUser2} pv")
random_attack = random.randint(0,1)
random_attack = bool(random_attack)

if random_attack == True:
    random_damage = random.randint(0, 100)
    print(f"{pseudoUser1} subit une attaque de {pseudoUser2} qui lui inflige {random_damage} points de degats")
    pseudoUser2_hp -= random_damage
else:
    print(f"{pseudoUser2} rate attaque...")


 
 # 4ème attaque
input()
print(f"{pseudoUser2}, à vous de jouer !")
print(f"J1 : {pseudoUser1} pv / J2 : {pseudoUser2} pv")
random_attack = random.randint(0,1)
random_attack = bool(random_attack)

if random_attack == True:
    random_damage = random.randint(0, 100)
    print(f"{pseudoUser1} subit une attaque de {pseudoUser2} qui lui inflige {random_damage} points de degats")
    pseudoUser1_hp -= random_damage 
else:   
    print(f"{pseudoUser2} rate attaque...")

    # Resulat final  
print("\nFIN DU COMBAT !\n")
print(f"J1 : {pseudoUser1} pv / J2 : {pseudoUser2} pv")

if pseudoUser1_hp > pseudoUser2_hp:
  print(f"{pseudoUser1} remporte la victoire !")
elif pseudoUser2_hp > pseudoUser1_hp:
  print(f"{pseudoUser2} remporte la victoire !")
else:
    print("Match nul !")



     