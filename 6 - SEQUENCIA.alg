Algoritmo "VALORES"

Var
   s,r,t : real

Inicio
      s := 1
      enquanto s > 0  faça
      escreva("Digite a sequencia, e 0 para sair: ")
      leia (s)
           Se (s <> 0)  entao
           r := s
             se (r > t) e (t <> r) entao
             t := r
             fimse
             fimse
                  fimenquanto
      escreva ("O valor MENOR é",r ," e o valor maior", t)
    
Fimalgoritmo