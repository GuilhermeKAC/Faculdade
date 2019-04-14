Algoritmo "TEMPERATURA"

Var
   C,F: REAL
   OPERACAO: CARACTERE

Inicio
      ESCREVA("ENTRE COM A OPÇÃO")
      ESCREVA("(F) PARA FAHRENHEIT (C) PARA CELSIUS: ")
      LEIA(OPERACAO)

      SE OPERACAO="F" ENTAO
      ESCREVA("DIGITE O VALOR DE C: ")
      LEIA(C)
      F:= (9*C+160)/5
      ESCREVAL("O VALOR DE F É:",F)
      SENAO
           SE OPERACAO="C" ENTAO
           ESCREVA("DIGITE O VALOR DE F: ")
           LEIA(F)
           C:= (F-32)*(5/9)
           ESCREVAL("O VALOR DE C É:",C)
           FIMSE
      FIMSE
Fimalgoritmo