"""
Conversão de qualquer base
"""

def conversaohexa(resto):
    resultado = str(resto)
    if resto == 10:
        resultado = 'a'
    elif resto == 11:
        resultado = 'b'
    elif resto == 12:
        resultado = 'c'
    elif resto == 13:
        resultado = 'd'
    elif resto == 14:
        resultado = 'e'
    elif resto == 15:
        resultado = 'f'
    return resultado
    
base=int(input('Defina a base numerica: '))
valornabase = ''
numero=int(input('Digite o Numero: '))

while numero > 1:
    resto = numero % base
    print(conversaohexa(resto))
    valornabase = conversaohexa(resto) + valornabase
    numero = numero // base
    if numero == 0 or numero == 1:
        valornabase = str(numero) + valornabase

print (valornabase)