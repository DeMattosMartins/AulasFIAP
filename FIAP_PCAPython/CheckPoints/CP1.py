#exercicio 1 - Montar um script onde o usuário entre com o valor em Reais e faça a sua respectiva conversão para: Dólar Americano – Euro - Peso Argentino - Libra Esterlina - Iene
#Exibir na tela (terminal) todos os valores obtidos com apenas 02 casas decimais
real = float(input("Diga o valor em real:\n"))

#1 real == 0,17 dolár
dolar = real*0.17

#1 real == 0,16 euro
euro =  real*0.16

#1 real == 188 pesos argentinos
pesoArgentino = real*188

#1 real == 0,13 libras
libra = real*0.13

#1 real == 25,11 Ienes
Iene = real*25.11

print("O valor em real de", round(real, 2), "equivale a:\nDolares: ", round(dolar, 2), "\nEuros: ", round(euro, 2), "\nPesos Argentinos: ", round(pesoArgentino, 2), "\nLibras: ", round(libra, 2), "\nIenes", round(Iene, 2))

#exercicios 2 - Elabore um programa no qual o usuário entre com um número.
#Após isso seu script deverá exibir o número digitado e sua respectiva separação em centena, dezena e unidade.
while True:
    numero = float(input("\nDigite um número entre 1 a 999: "))
    if numero >= 0 and numero <= 999:
        unidade = numero % 10
        dezena = numero % 100 - unidade
        centena = numero - dezena - unidade
        print("Centena= ", int(centena), "\nDezena= ", int(dezena), "\nUnidade= ", int(unidade))
        if unidade % 1 != 0:
            print("Casas decimais= ", round(unidade % 1,8))
        break
    else:
        print("Digite um valor valido")

#exercicio 3 - Leia 3 valores de entrada, referentes à idade de uma pessoa em: anos, meses e dias
#calcule e exiba o total de dias que essa pessoa já viveu.
#considere todo ano com 365 dias e todo mês com 30 dias.
anos = int(input("\nDiga quantos anos: "))
meses = int(input("Diga quantos meses: "))
dias = int(input("Diga quantos dias: "))

print((anos*365) + (meses*30) + dias)

#exercicios 4 - Faça o cálculo contrário do último exercício (Exercício 03): Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias.
#também considere todo ano com 365 dias e todo mês com 30 dias.
idade = int(input("\nDiga a sua idade em dias: "))
dias = (idade % 365) % 30
meses = idade % 365 // 30
anos = idade // 365

print("Anos=", anos, "\nMeses=", meses, "\nDias=", dias)