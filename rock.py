import random

choices=["rock","paper","scissor"]
user=input("choose rock, paper or scissor ").lower()
computer=random.choice(choices)
print("yours :",user)
print("computers :",computer)
if(user==computer):
  print("Its a tie!")
elif(user=="rock" and computer=="scissor"):
  print("you win!")
elif(user=="scissor" and computer=="paper"):
  print("you win!")
elif(user=="paper" and computer=="rock"):
  print("you win!")
else:
  print("Computer wins!!")