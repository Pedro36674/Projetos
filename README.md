🃏 Super Trunfo (em C)

Este projeto é uma versão simplificada do jogo Super Trunfo, feita em linguagem C.
O jogador insere os dados de duas cartas de cidades e escolhe atributos para comparar.
Quem tiver a maior soma dos atributos escolhidos vence! 🎉

⚙️ Como funciona

Cadastro das Cartas
O programa pede que o usuário insira os dados de duas cartas, contendo:

Estado (A até H)

Código da carta (ex: A01)

Nome da cidade

População

Área

PIB

Pontos turísticos

Depois disso, o programa calcula automaticamente:

PIB per capita

Densidade populacional

Escolha dos Atributos
O jogador deve escolher 2 atributos diferentes para a comparação:

1 → População

2 → Área

3 → PIB

4 → Pontos turísticos

5 → Densidade populacional (quanto menor a densidade, melhor)

Cálculo da Soma
O programa soma os valores reais dos atributos escolhidos em cada carta:

Se o atributo for densidade, é usado 1/densidade (para inverter a lógica: menor densidade → valor maior).

Resultado Final
O programa exibe a soma dos atributos escolhidos e declara o vencedor:

Carta 1 vence 🚩

Carta 2 vence 🏆

Ou empate 🤝

🖥️ Exemplo de uso
Insira a letra inicial do estado de A a H: A
Insira o código da carta de 01 a 04 (ex: A01): A01
Insira o nome da cidade: Brasília
Insira a população do estado: 3000000
Insira a área do estado: 5800
Insira o PIB do estado: 2500000
Insira a quantidade de pontos turísticos do estado: 12

Insira a letra inicial do estado de A a H: B
Insira o código da carta de 01 a 04 (ex: B02): B02
Insira o nome da cidade: Goiânia
Insira a população do estado: 1500000
Insira a área do estado: 7400
Insira o PIB do estado: 1800000
Insira a quantidade de pontos turísticos do estado: 9

Escolha o atributo para comparar:
1. População
2. Área
3. PIB
4. Pontos turísticos
5. Densidade populacional
Opção: 1

Escolha o segundo atributo (diferente do primeiro):
Opção: 3

Soma dos atributos escolhidos:
Carta 1: 3002500.00
Carta 2: 1501800.00

A primeira carta é a vencedora!

🛠️ Como compilar e executar

No terminal:

gcc super_trunfo.c -o super_trunfo
./super_trunfo

📌 Melhorias possíveis

Permitir escolher mais de 2 atributos para a soma.

Criar um sistema de rodadas entre várias cartas.

Implementar menu interativo para jogar várias vezes sem precisar reiniciar o programa.

Melhorar a interface (cores e formatação).
