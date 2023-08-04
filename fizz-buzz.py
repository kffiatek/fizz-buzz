print("Fizz-Buzz by kffiatek")

game_size = 100
factors_of_interest = {3 : "Fizz", 5 : "Buzz",  6: "szakalaka"}

for i in range(1,game_size+1):  # gra zaczyna się od 1
  result=""
  player=i % 2  # gracz parzysty albo nieparzysty 0 albo 1
  for factor in factors_of_interest: # gra dla wszystkich fiz-buzów w zbiorze (oryginalnie 3 i 5)
    if (i % factor == 0):  #jeśli dzieli się przez dany element
      if result: result+="-"  #sprawdzamy, czy to pierwszy, żeby dodać myślnik, jeśli to drugi albo kolejny
      result+=factors_of_interest[factor] #dodajemy fizz buzz albo coś innego
  if not result: result = str(i) # jeśli przez nic się nie dzieli, wyświetlamy listę
  result = abs((player-1))*10*(" ") + result #gracz parzysty zostaje przesunięty w prawo o 10
  print(result)