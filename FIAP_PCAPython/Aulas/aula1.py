# exercicio 1 - Calcule a área de um círculo com raio 5. Use a fórmula: área = π * raio^2. (Dica: você pode usar 3.14159
# como valor aproximado de π).
raio = int(input("Diga o valor de um raio\n"))
area = 3.14159*raio*raio
print("O o valor da area é: ", area, "\n")

#exercicio 2 - Converta uma temperatura de Fahrenheit para Celsius. A fórmula de conversão é: Celsius = (Fahrenheit - 32) * 5/9
fahrenheit = int(input("Diga o valor em Fahrenheit\n"))
celsius = (fahrenheit - 32) * (5/9)
print("O valor em celsius é:", celsius, "\n")


#exercicio 4 - Você comprou 3 livros por R$ 25 cada e 2 canetas por R$ 5 cada. Calcule o total gasto
print("O resultado é: ")
print ((3*25)+(2*5), "\n")

#exercicio 5 - Um carro percorreu 150 km a uma velocidade média de 60 km/h. Quanto tempo (em horas) o carro levou para percorrer essa distância?
velocidade = 60
distancia = 150
tempo = distancia/velocidade
print("O tempo total em horas foi:", tempo, "\n")

#exercicio 6 - ▪ Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir calcule e informe a média ponderada do aluno
nota1 = int(input("Diga o valor da primeira nota"))
nota2 = int(input("Diga o valor da segunda nota"))
print("A média das notas é: ", (nota1 + nota2)/2, "\n")

#exercicio 7 - Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir calcule e informe a média ponderada do aluno, sabendo que a nota A tem peso 4 e a nota B tem peso 6.
nota1 = int(input("Diga o valor da primeira nota"))
nota2 = int(input("Diga o valor da segunda nota"))
print("A média das notas é: ", (0.4*nota1) + (0.6*nota2), "\n")

#exercicio 8 - Neste problema, deve-se ler o nome de uma peça que chamaremos de peça1, o número de peças1 queo usuário quer, o valor unitário de cada peça1, o nome de uma peça2, o número de peças2 e o valor unitário de cada peça2. Após, calcule e mostre o valor a ser pago.
peca1 = input("Diga o nome de uma peca")
numeroPeca1 = int(input("Quantas peças quer? "))
valorpeca1 = float(input("Qual o valor da peça?"))

peca2 = input("Diga o nome de outra peca")
numeroPeca2 = int(input("Quantas peças quer? "))
valorpeca2 = float(input("Qual o valor da peça?"))

print("Valor total das peças ficou: ", (numeroPeca1*valorpeca1)+(numeroPeca2*valorpeca2))

#exercicio 9 - Crie um programa que receba o valor do produto e valor pago. Calcule o troco a ser pago. O valor do troco deve ser exibido no terminal
valor = float(input("Diga o valor do produto: "))
pago = float(input("Diga o valor pago: "))
print("O troco é: ", pago - valor)

