Algoritmo "DOIS_VALORES_C"

Var
A,B,C: INTEIRO

Inicio
      ESCREVAL("DIGITE TRES VALORES ")
      ESCREVA("DIGITE O PRIMEIRO VALOR: ")
      LEIA(A)
      ESCREVA("DIGITE O SEGUNDO VALOR: ")
      LEIA(B)
      ESCREVA("DIGITE O TERCEIRO VALOR: ")
      LEIA(C)

      SE (A>B>C) ENTAO
      ESCREVA ("A SEQUENCIA É: ", C,",",B",",A)
      SENAO
           SE (C>B>A) ENTAO
           ESCREVA ("A SEQUENCIA É: ", A,",",B",",C)
           SENAO
                SE(B>A>C)ENTAO
                ESCREVA ("A SEQUENCIA É: ", C,",",A",",B)
                SENAO
                     SE(B>C>A)ENTAO
                     ESCREVA ("A SEQUENCIA É: ", A,",",C",",B)
                     FIMSE
                FIMSE
           FIMSE
     FIMSE

Fimalgoritmo