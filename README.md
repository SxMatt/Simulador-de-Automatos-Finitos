# Simulador-de-Automatos-Finitos

Determinístico

Linha	   Descrição		     Exemplo
 1	      estado inicial	  0
 2	      estados finais	  2
 3	      transições		   (0|a|0), (0|b|0), (0|c|1), (1|d|2), (2|a|2)

No estado inicial fica em loop com as letras "a" e "b", quando o usuário digitar a letra "c", vai para o estado q1. No estado q1, quando o usuário digita "d", o automato vai para o estado final q2. No estado final fica em loop de letras "a".

Exemplos: aabcda, acda, abbbcd.

===================================================================================================================================================================================

Não Determinístico

Linha	    Descrição		     Exemplo
 1	       estado inicial	  0
 2	       estados finais	  1
 3	       transições		   (0|a0), (0|a|1), (0|b|1), (0|c|1), (1|a|1)

No estado inicial fica com loop na letra "a". Quando digitado a letra "a", "b" ou "c", ele vai para o estado final q1. Nele o programa fica em loop de letra "a".

Exemplos: aaaaba, aaca, abca.
