Algoritmo "VEICULO"

Var
   C,L,K: REAL

Inicio
      ESCREVA("DIGITE QUANTOS KM S�O: ")
      LEIA(K)
      ESCREVAL("                      ")
      ESCREVA("DIGITE A QUANTIDADE DE LITROS: ")
      LEIA(L)
      ESCREVAL("                      ")
      ESCREVA("DIGITE O CONSUMO M�DIO: ")
      LEIA(C)

             SE C*L>=K ENTAO
             ESCREVAL("N�O DEVE REABASTECER")
                          SENAO C*L<K ENTAO
                          ESCREVAL("DEVE ABASTECER")
             FIMSE
    
Fimalgoritmo