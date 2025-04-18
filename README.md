# 📄 **Documentação Técnica – Consumo de Animais no Zoológico**

Este é um projeto funcional desenvolvido em **linguagem C**, que calcula o consumo de comida e o custo mensal com base na quantidade de animais de uma determinada espécie em um zoológico.  
O programa é executado no terminal e permite ao usuário selecionar um animal, informar a quantidade, e visualizar o custo de alimentação diária e mensal.



## ⚙️ **Tecnologias Utilizadas**

| Tecnologia | Finalidade                          |
|------------|-------------------------------------|
| C          | Lógica de programação e execução    |
| Terminal   | Entrada e saída de dados do usuário |



## **Componentes do Projeto**

- `scanf()` / `printf()` – Entrada e saída de dados no terminal.  
- Estrutura `if/else` – Define a quantidade de comida e preço por animal.  
- Estrutura `while` – Valida a opção escolhida pelo usuário.  
- Variáveis (`int`, `float`) – Armazenam dados como quantidade, preço e resultado dos cálculos.  

### 🔧 **Funções / Blocos Lógicos Importantes**

- Validação de entrada com `while(1)` e `getchar()` – Garante que a opção do usuário seja válida.  
- Cálculo de comida por dia/mês e custo mensal.  
- Impressão dos resultados finais para o usuário.  



## **Objetivo**

Construir um sistema simples em C para calcular o consumo alimentar e o custo mensal com alimentação de animais de um zoológico.  
O foco está no uso de estruturas condicionais, laços de repetição, validação de entrada e operações matemáticas básicas.



## 🧩 **Desafios Enfrentados**

| Desafio                                              | Solução Aplicada                                                       |
|------------------------------------------------------|------------------------------------------------------------------------|
| Validar a entrada do usuário                         | Uso de `scanf()` com verificação e limpeza do buffer (`getchar()`).   |
| Associar dados diferentes a cada tipo de animal      | Utilização de estrutura `if/else` para atribuir valores específicos.   |
| Evitar erro de entrada ao digitar valores inválidos  | Laço `while` com condição de repetição até entrada válida.             |
| Realizar cálculos com diferentes tipos numéricos     | Uso de variáveis `float` para precisão nos resultados.                 |



